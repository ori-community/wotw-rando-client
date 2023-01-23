#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/LegacyActivateAnimator_TargetMode__Enum.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator_AnimateMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyTransparencyAnimator_AnimateMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LegacyActivateAnimator_TargetMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct List_1_LegacyTransparencyAnimator_RendererData_;
struct List_1_LegacyTransparencyAnimator_;
struct List_1_CleverMenuItem_;
struct Transform;
struct List_1_UnityEngine_GameObject_;
struct HashSet_1_UnityEngine_Renderer_;
struct Single__Array;
struct LegacyTransparencyAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    bool AnimateChildren;
    LegacyTransparencyAnimator_AnimateMode__Enum Mode;

    struct GameObject* AnimationTarget;
    LegacyActivateAnimator_TargetMode__Enum TargetType;

    bool IgnoreChildTransparencyAnimators;
    bool IgnoreInactiveChildObjs;
    bool AutoEnableTargets;
    struct List_1_LegacyTransparencyAnimator_RendererData_* m_rendererData;
    struct List_1_LegacyTransparencyAnimator_* m_childTransparencyAnimators;
    struct List_1_CleverMenuItem_* m_cleverMenuItems;
    bool m_forceUseRendererMaterial;
    float m_opacity;
    struct Transform* m_target;
    struct List_1_UnityEngine_GameObject_* m_objectsToEnable;
    struct HashSet_1_UnityEngine_Renderer_* m_renderers;
    float m_lastFinalOpacity;
    struct Single__Array* ParentOpacityByMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_.h>
#include <Modloader/app/structs/List_1_LegacyTransparencyAnimator_.h>
#include <Modloader/app/structs/List_1_LegacyTransparencyAnimator_RendererData_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTransparencyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTransparencyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTransparencyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
