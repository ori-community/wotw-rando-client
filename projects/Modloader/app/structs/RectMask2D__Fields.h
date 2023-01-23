#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectMask2D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectMask2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectMask2D__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_RectMask2D__Fields_DEFINED
struct RectangularVertexClipper;
struct RectTransform;
struct HashSet_1_UnityEngine_UI_IClippable_;
struct List_1_UnityEngine_UI_RectMask2D_;
struct Canvas;
struct Vector3__Array;
struct RectMask2D__Fields {
    struct UIBehaviour__Fields _;
    struct RectangularVertexClipper* m_VertexClipper;
    struct RectTransform* m_RectTransform;
    struct HashSet_1_UnityEngine_UI_IClippable_* m_ClipTargets;
    bool m_ShouldRecalculateClipRects;
    struct List_1_UnityEngine_UI_RectMask2D_* m_Clippers;
    struct Rect m_LastClipRectCanvasSpace;
    bool m_ForceClip;
    struct Canvas* m_Canvas;
    struct Vector3__Array* m_Corners;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RectMask2D__Fields_FWDDECL)
#define IL2CPP_STRUCT_RectMask2D__Fields_FWDDECL
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_UI_IClippable_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_RectMask2D_.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/RectangularVertexClipper.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_RectMask2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectMask2D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RectMask2D__Fields_FWDDECL)
#include <Modloader/app/structs/RectMask2D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectMask2D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
