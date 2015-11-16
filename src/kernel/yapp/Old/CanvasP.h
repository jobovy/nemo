/*
* $Header: /home/cvsroot/nemo/src/kernel/yapp/Old/CanvasP.h,v 1.1.1.1 1990/03/08 23:03:47 teuben Exp $
*/


/* 
 * CanvasP.h - Private definitions for Canvas widget
 * 
 */

#ifndef _XtCanvasP_h
#define _XtCanvasP_h

/***********************************************************************
 *
 * Canvas Widget Private Data
 *
 ***********************************************************************/

#include "Canvas.h"
#include <X11/SimpleP.h>

/* New fields for the Canvas widget class record */

typedef struct {int foo;} CanvasClassPart;

/* Full class record declaration */
typedef struct _CanvasClassRec {
    CoreClassPart	core_class;
    SimpleClassPart	simple_class;
    CanvasClassPart	label_class;
} CanvasClassRec;

extern CanvasClassRec labelClassRec;

/* New fields for the Canvas widget record */
typedef struct {
    /* resources */
    Pixel	foreground;
    XFontStruct	*font;

    /* private state */
    GC		normal_GC;
} CanvasPart;


/****************************************************************
 *
 * Full instance record declaration
 *
 ****************************************************************/

typedef struct _CanvasRec {
    CorePart	core;
    SimplePart	simple;
    CanvasPart	canvas;
} CanvasRec;

#endif /* _XtCanvasP_h */

