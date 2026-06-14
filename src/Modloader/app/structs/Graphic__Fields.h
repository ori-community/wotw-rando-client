#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Graphic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Graphic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphic__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Graphic__Fields_DEFINED
struct Material;
struct RectTransform;
struct CanvasRenderer;
struct Canvas;
struct UnityAction;
struct TweenRunner_1_ColorTween_;
struct Graphic__Fields {
    struct UIBehaviour__Fields _;
    struct Material* m_Material;
    struct Color m_Color;
    bool m_RaycastTarget;
    struct RectTransform* m_RectTransform;
    struct CanvasRenderer* m_CanvasRenderer;
    struct Canvas* m_Canvas;
    bool m_VertsDirty;
    bool m_MaterialDirty;
    struct UnityAction* m_OnDirtyLayoutCallback;
    struct UnityAction* m_OnDirtyVertsCallback;
    struct UnityAction* m_OnDirtyMaterialCallback;
    struct TweenRunner_1_ColorTween_* m_ColorTweenRunner;
    bool _useLegacyMeshGeneration_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Graphic__Fields_FWDDECL)
#define IL2CPP_STRUCT_Graphic__Fields_FWDDECL
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/CanvasRenderer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/TweenRunner_1_ColorTween_.h>
#include <Modloader/app/structs/UnityAction.h>
#endif
#undef IL2CPP_STRUCT_Graphic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Graphic__Fields_FWDDECL)
#include <Modloader/app/structs/Graphic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Graphic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
