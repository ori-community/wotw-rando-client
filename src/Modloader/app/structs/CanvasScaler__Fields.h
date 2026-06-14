#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasScaler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasScaler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasScaler__Fields_DEFINED)
#include <Modloader/app/structs/CanvasScaler_ScaleMode__Enum.h>
#include <Modloader/app/structs/CanvasScaler_ScreenMatchMode__Enum.h>
#include <Modloader/app/structs/CanvasScaler_Unit__Enum.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CanvasScaler_ScaleMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_CanvasScaler_ScreenMatchMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CanvasScaler_Unit__Enum_DEFINED)
#define IL2CPP_STRUCT_CanvasScaler__Fields_DEFINED
struct Canvas;
struct CanvasScaler__Fields {
    struct UIBehaviour__Fields _;
    CanvasScaler_ScaleMode__Enum m_UiScaleMode;

    float m_ReferencePixelsPerUnit;
    float m_ScaleFactor;
    struct Vector2 m_ReferenceResolution;
    CanvasScaler_ScreenMatchMode__Enum m_ScreenMatchMode;

    float m_MatchWidthOrHeight;
    CanvasScaler_Unit__Enum m_PhysicalUnit;

    float m_FallbackScreenDPI;
    float m_DefaultSpriteDPI;
    float m_DynamicPixelsPerUnit;
    struct Canvas* m_Canvas;
    float m_PrevScaleFactor;
    float m_PrevReferencePixelsPerUnit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanvasScaler__Fields_FWDDECL)
#define IL2CPP_STRUCT_CanvasScaler__Fields_FWDDECL
#include <Modloader/app/structs/Canvas.h>
#endif
#undef IL2CPP_STRUCT_CanvasScaler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasScaler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CanvasScaler__Fields_FWDDECL)
#include <Modloader/app/structs/CanvasScaler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasScaler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
