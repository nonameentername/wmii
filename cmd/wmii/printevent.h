void printevent(XEvent*);

enum {
	X_CreateWindow = 1,
	X_ChangeWindowAttributes,
	X_GetWindowAttributes,
	X_DestroyWindow,
	X_DestroySubwindows,
	X_ChangeSaveSet,
	X_ReparentWindow,
	X_MapWindow,
	X_MapSubwindows,
	X_UnmapWindow,
	X_UnmapSubwindows,
	X_ConfigureWindow,
	X_CirculateWindow,
	X_GetGeometry,
	X_QueryTree,
	X_InternAtom,
	X_GetAtomName,
	X_ChangeProperty,
	X_DeleteProperty,
	X_GetProperty,
	X_ListProperties,
	X_SetSelectionOwner,
	X_GetSelectionOwner,
	X_ConvertSelection,
	X_SendEvent,
	X_GrabPointer,
	X_UngrabPointer,
	X_GrabButton,
	X_UngrabButton,
	X_ChangeActivePointerGrab,
	X_GrabKeyboard,
	X_UngrabKeyboard,
	X_GrabKey,
	X_UngrabKey,
	X_AllowEvents,
	X_GrabServer,
	X_UngrabServer,
	X_QueryPointer,
	X_GetMotionEvents,
	X_TranslateCoords,
	X_WarpPointer,
	X_SetInputFocus,
	X_GetInputFocus,
	X_QueryKeymap,
	X_OpenFont,
	X_CloseFont,
	X_QueryFont,
	X_QueryTextExtents,
	X_ListFonts,
	X_ListFontsWithInfo,
	X_SetFontPath,
	X_GetFontPath,
	X_CreatePixmap,
	X_FreePixmap,
	X_CreateGC,
	X_ChangeGC,
	X_CopyGC,
	X_SetDashes,
	X_SetClipRectangles,
	X_FreeGC,
	X_ClearArea,
	X_CopyArea,
	X_CopyPlane,
	X_PolyPoint,
	X_PolyLine,
	X_PolySegment,
	X_PolyRectangle,
	X_PolyArc,
	X_FillPoly,
	X_PolyFillRectangle,
	X_PolyFillArc,
	X_PutImage,
	X_GetImage,
	X_PolyText8,
	X_PolyText16,
	X_ImageText8,
	X_ImageText16,
	X_CreateColormap,
	X_FreeColormap,
	X_CopyColormapAndFree,
	X_InstallColormap,
	X_UninstallColormap,
	X_ListInstalledColormaps,
	X_AllocColor,
	X_AllocNamedColor,
	X_AllocColorCells,
	X_AllocColorPlanes,
	X_FreeColors,
	X_StoreColors,
	X_StoreNamedColor,
	X_QueryColors,
	X_LookupColor,
	X_CreateCursor,
	X_CreateGlyphCursor,
	X_FreeCursor,
	X_RecolorCursor,
	X_QueryBestSize,
	X_QueryExtension,
	X_ListExtensions,
	X_ChangeKeyboardMapping,
	X_GetKeyboardMapping,
	X_ChangeKeyboardControl,
	X_GetKeyboardControl,
	X_Bell,
	X_ChangePointerControl,
	X_GetPointerControl,
	X_SetScreenSaver,
	X_GetScreenSaver,
	X_ChangeHosts,
	X_ListHosts,
	X_SetAccessControl,
	X_SetCloseDownMode,
	X_KillClient,
	X_RotateProperties,
	X_ForceScreenSaver,
	X_SetPointerMapping,
	X_GetPointerMapping,
	X_SetModifierMapping,
	X_GetModifierMapping,
	X_NoOperation,
};

#define XMajors \
	"<nil>",\
	"CreateWindow",\
	"ChangeWindowAttributes",\
	"GetWindowAttributes",\
	"DestroyWindow",\
	"DestroySubwindows",\
	"ChangeSaveSet",\
	"ReparentWindow",\
	"MapWindow",\
	"MapSubwindows",\
	"UnmapWindow",\
	"UnmapSubwindows",\
	"ConfigureWindow",\
	"CirculateWindow",\
	"GetGeometry",\
	"QueryTree",\
	"InternAtom",\
	"GetAtomName",\
	"ChangeProperty",\
	"DeleteProperty",\
	"GetProperty",\
	"ListProperties",\
	"SetSelectionOwner",\
	"GetSelectionOwner",\
	"ConvertSelection",\
	"SendEvent",\
	"GrabPointer",\
	"UngrabPointer",\
	"GrabButton",\
	"UngrabButton",\
	"ChangeActivePointerGrab",\
	"GrabKeyboard",\
	"UngrabKeyboard",\
	"GrabKey",\
	"UngrabKey",\
	"AllowEvents",\
	"GrabServer",\
	"UngrabServer",\
	"QueryPointer",\
	"GetMotionEvents",\
	"TranslateCoords",\
	"WarpPointer",\
	"SetInputFocus",\
	"GetInputFocus",\
	"QueryKeymap",\
	"OpenFont",\
	"CloseFont",\
	"QueryFont",\
	"QueryTextExtents",\
	"ListFonts",\
	"ListFontsWithInfo",\
	"SetFontPath",\
	"GetFontPath",\
	"CreatePixmap",\
	"FreePixmap",\
	"CreateGC",\
	"ChangeGC",\
	"CopyGC",\
	"SetDashes",\
	"SetClipRectangles",\
	"FreeGC",\
	"ClearArea",\
	"CopyArea",\
	"CopyPlane",\
	"PolyPoint",\
	"PolyLine",\
	"PolySegment",\
	"PolyRectangle",\
	"PolyArc",\
	"FillPoly",\
	"PolyFillRectangle",\
	"PolyFillArc",\
	"PutImage",\
	"GetImage",\
	"PolyText8",\
	"PolyText16",\
	"ImageText8",\
	"ImageText16",\
	"CreateColormap",\
	"FreeColormap",\
	"CopyColormapAndFree",\
	"InstallColormap",\
	"UninstallColormap",\
	"ListInstalledColormaps",\
	"AllocColor",\
	"AllocNamedColor",\
	"AllocColorCells",\
	"AllocColorPlanes",\
	"FreeColors",\
	"StoreColors",\
	"StoreNamedColor",\
	"QueryColors",\
	"LookupColor",\
	"CreateCursor",\
	"CreateGlyphCursor",\
	"FreeCursor",\
	"RecolorCursor",\
	"QueryBestSize",\
	"QueryExtension",\
	"ListExtensions",\
	"ChangeKeyboardMapping",\
	"GetKeyboardMapping",\
	"ChangeKeyboardControl",\
	"GetKeyboardControl",\
	"Bell",\
	"ChangePointerControl",\
	"GetPointerControl",\
	"SetScreenSaver",\
	"GetScreenSaver",\
	"ChangeHosts",\
	"ListHosts",\
	"SetAccessControl",\
	"SetCloseDownMode",\
	"KillClient",\
	"RotateProperties",\
	"ForceScreenSaver",\
	"SetPointerMapping",\
	"GetPointerMapping",\
	"SetModifierMapping",\
	"GetModifierMapping",\
	"NoOperation",\

