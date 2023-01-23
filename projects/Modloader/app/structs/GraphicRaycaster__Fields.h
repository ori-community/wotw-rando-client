#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicRaycaster__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicRaycaster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicRaycaster__Fields_DEFINED)
#include <Modloader/app/structs/BaseRaycaster__Fields.h>
#include <Modloader/app/structs/GraphicRaycaster_BlockingObjects__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_BaseRaycaster__Fields_DEFINED) && defined(IL2CPP_STRUCT_GraphicRaycaster_BlockingObjects__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_GraphicRaycaster__Fields_DEFINED
struct Canvas;
struct List_1_UnityEngine_UI_Graphic_;
struct GraphicRaycaster__Fields {
    struct BaseRaycaster__Fields _;
    bool m_IgnoreReversedGraphics;
    GraphicRaycaster_BlockingObjects__Enum m_BlockingObjects;

    struct LayerMask m_BlockingMask;
    struct Canvas* m_Canvas;
    struct List_1_UnityEngine_UI_Graphic_* m_RaycastResults;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GraphicRaycaster__Fields_FWDDECL)
#define IL2CPP_STRUCT_GraphicRaycaster__Fields_FWDDECL
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Graphic_.h>
#endif
#undef IL2CPP_STRUCT_GraphicRaycaster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicRaycaster__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GraphicRaycaster__Fields_FWDDECL)
#include <Modloader/app/structs/GraphicRaycaster__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicRaycaster__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
