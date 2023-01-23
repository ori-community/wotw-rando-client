#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/SceneBasedUberState__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_DEFINED
struct DynamicDataResolver;
struct GameObject;
struct BaseAnimator;
struct MoonTimeline;
struct ActionSequence;
struct DigZone;
struct CageStructureTool;
struct List_1_UnityEngine_Renderer_;
struct IUberState__Array;
struct LegacyCollapsingPlatform__Fields {
    struct SceneBasedUberState__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct GameObject* ObjectRoot;
    struct GameObject* SceneObject;
    struct GameObject* PlatformObject;
    struct GameObject* VisualsObject;
    struct BaseAnimator* Animator;
    struct MoonTimeline* CollapseTimeline;
    struct MoonTimeline* CollapseFastTimeline;
    bool UseFastCollapse;
    struct MoonTimeline* RespawnTimeline;
    struct ActionSequence* CollapseAction;
    struct ActionSequence* RespawnAction;
    bool RespawnOnLanding;
    bool CollapseOnDigThrough;
    bool m_isCollapsed;
    struct DigZone* m_digZone;
    struct CageStructureTool* m_cageStructure;
    bool ResetStateOnDisable;
    bool DisableWhenOutOfFrustrum;
    bool m_stressTested;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;

    struct List_1_UnityEngine_Renderer_* m_renderers;
    struct IUberState__Array* m_affectingUberStates;
    bool _DefaultBooleanValue_k__BackingField;
    struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyCollapsingPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyCollapsingPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyCollapsingPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
