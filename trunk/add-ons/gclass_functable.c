/* function table for external gClasses, 14.4.2001 */

APTR gc_functable[] =
{
  AllocStringLength,
  AllocString,
  FreeString,
  gDoMethodA,
  gDoSuperMethodA,
  SetHighColor,
  SetColors,
  FindColorPen,
  DrawRect,
  DrawLine,
  gAreaMove,
  gAreaDraw,
  gAreaEnd,
  GetDPI,
  GetOffset,
  FreeFontInfo,
  SetFontInfoA,
  CopyFontInfo,
  NewFontInfoA,
  DrawText,
  OutlineLength,
  OutlineHeight,
  pixel,
  mm,
  CreateTerm,
  DeleteTerm,
  CopyTerm,
  CalcTerm,
  gInsertRemoveCellsTerm,
  gInsertRemoveCellsTablePos,
  TintColor,
  gSuperDraw,
  gGetLink,
  SetLowColor,
  SetOutlineColor
};

