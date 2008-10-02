#ifndef  CLIB_GCLASS_PROTOS_H
#define  CLIB_GCLASS_PROTOS_H

/* $VER: gclass_protos.h 0.11 (14.4.2001)
** Developer Release 0.11
**
** ignition prototypes for gClasses
**
** Copyright �2001-2008 pinc Software
** All Rights Reserved
*/

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

/**/
/* memory */
/**/
STRPTR AllocStringLength(STRPTR string,long len);
STRPTR AllocString(STRPTR string);
void FreeString(STRPTR string);
/**/
/* method calling */
/**/
ULONG gDoMethodA(APTR go,Msg msg);
ULONG gDoMethod(APTR go,LONG data,...);
ULONG gDoSuperMethodA(struct gClass *gc,APTR go,Msg msg);
ULONG gDoSuperMethod(struct gClass *gc,APTR go,LONG data,...);
/**/
/* graphics */
/**/
void SetHighColor(struct RastPort *rp,ULONG color);
void SetColors(struct RastPort *rp,ULONG apenID,ULONG bpenID);
ULONG FindColorPen(UBYTE red,UBYTE green,UBYTE blue);
void DrawRect(struct RastPort *rp,long x,long y,long w,long h);
void DrawLine(struct RastPort *rp,ULONG dpi,long x1,long y1,long x2,long y2,ULONG points,UWORD flags);
void gAreaMove(LONG x,LONG y);
void gAreaDraw(LONG x,LONG y);
void gAreaEnd(struct RastPort *rp);
ULONG GetDPI(struct Page *page);
LONG GetOffset(struct Page *page,BOOL horiz);
/**/
/* fonts */
/**/
void FreeFontInfo(struct FontInfo *fi);
struct FontInfo *SetFontInfoA(struct FontInfo *fi,ULONG dpi,struct TagItem *ti);
struct FontInfo *SetFontInfo(struct FontInfo *fi,ULONG dpi,ULONG tag1,...);
struct FontInfo *CopyFontInfo(struct FontInfo *fi);
struct FontInfo *NewFontInfoA(struct FontInfo *fi,ULONG dpi,struct TagItem *ti);
void DrawText(struct RastPort *rp,struct FontInfo *fi,STRPTR t,long x,long y);
/**/
/* misc*/
/**/
ULONG OutlineLength(struct FontInfo *fi,STRPTR text,long len);
ULONG OutlineHeight(struct FontInfo *fi,STRPTR text,long len);
long pixel(struct Page *page,long mm,BOOL width);
long mm(struct Page *page,long pixel,BOOL width);
struct Term *CreateTerm(struct Page *page,STRPTR text);
void DeleteTerm(struct Term *term);
struct Term *CopyTerm(struct Term *term);
STRPTR CalcTerm(struct Page *page,STRPTR text,struct Term *term,STRPTR format);
void gInsertRemoveCellsTerm(struct gcpInReCells *gcpc,struct Page *page,STRPTR *term,struct Term *t);
void gInsertRemoveCellsTablePos(struct gcpInReCells *gcpc,struct Page *page,STRPTR *term,struct TablePos *tp);
ULONG TintColor(ULONG id,float tint);
void gSuperDraw(struct Page *page,ULONG dpi,struct RastPort *rp,struct gClass *gc,struct gObject *go,struct gBounds *gb);
struct gLink *gGetLink(struct gDiagram *gd,long col,long row);
void SetLowColor(struct RastPort *rp,ULONG color);
void SetOutlineColor(struct RastPort *rp,ULONG color);

#endif  /* CLIB_GCLASS_PROTOS_H */
