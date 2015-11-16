/*
 * $Header: /home/cvsroot/nemo/src/kernel/yapp/Old/Canvas.h,v 1.1.1.1 1990/03/07 20:26:36 teuben Exp $
 */
#ifndef _XtCanvas_h
#define _XtCanvas_h

/***********************************************************************
 *
 * Canvas Widget
 *
 *
 ***********************************************************************/

#include <X11/Simple.h>

/*
 * Resources:
 *
 * Name		     Class		RepType		Default Value
 * ----		     -----		-------		-------------
 * font		     Font		FontStruct	fixed
 * foreground	     Foreground		pixel		Black
 *
 */
#define XtNforeground		"foreground"
#define XtNfont			"font"
/*
 * Class record constants
 */
extern WidgetClass canvasWidgetClass;

typedef struct _CanvasClassRec *CanvasWidgetClass;
typedef struct _CanvasRec      *CanvasWidget;
#endif _XtCanvas_h
/* DON'T ADD STUFF AFTER THIS #endif */
