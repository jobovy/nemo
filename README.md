# nemo

NEMO Stellar Dynamics Toolbox

## NEMO in bash

AFAIK, ``NEMO`` needs to be built in a C-type shell, which you can
start using ``csh``. After installation, but still in the C-type shell,
one can create a bash version of ``nemo_start`` using

```
src/scripts/mk_nemo_start.sh > nemo_start.sh
```

This file can then be sourced in one's ``.bashrc`` to start ``NEMO``.

## This repository

This is a git version of the ``NEMO Stellar Dynamics Toolbox``
repository. The CVS version is contained in the ``cvs`` branch.

The CVS-specific directories were removed by finding them recursively
as follows in Python::

```
import fnmatch
import os
def find_files(directory, pattern):
    for root, dirs, files in os.walk(directory):
        for basename in dirs:
            if fnmatch.fnmatch(basename, pattern):
                filename = os.path.join(root, basename)
                yield filename
for filename in find_files('.', '*CVS*'):
    print filename,
```

and feeding them to ``git rm``.

We will attempt to keep the git repository in sync with the CVS
repository, while keeping the CVS directories outside of git (note
that we will not attempt to preserve the full CVS history). We define
a git driver to keep our version as 

```
 git config --global merge.ours.driver true
```

and do

```
echo '*CVS/Entries merge=ours' >> .gitattributes
echo '*CVS/Repository merge=ours' >> .gitattributes
echo '*CVS/Root merge=ours' >> .gitattributes
git add .gitattributes
```

and commit this file. Now our version of the (deleted) CVS files
should always keep precedence when merging changes from the CVS
repository. Note that this is currently untested.

