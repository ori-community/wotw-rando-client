#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollapsingPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollapsingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatform__Fields_DEFINED)
#include <Modloader/app/structs/CollapsingPlatform_CollapsingPlatformType__Enum.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/SceneBasedUberState__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_DEFINED) && defined(IL2CPP_STRUCT_CollapsingPlatform_CollapsingPlatformType__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_CollapsingPlatform__Fields_DEFINED
struct GameObject;
struct CollapsingPlatformAnimator;
struct DamageReceiver;
struct DigZone;
struct CageStructureTool;
struct IUberState__Array;
struct CollapsingPlatform__Fields {
    struct SceneBasedUberState__Fields _;
    struct GameObject* PlatformRoot;
    struct CollapsingPlatformAnimator* Animator;
    bool CanBeDisabledWhenNotVisible;
    CollapsingPlatform_CollapsingPlatformType__Enum PlatformType;

    bool RespawnOnLanding;
    bool CollapseOnDigThrough;
    bool m_isCollapsed;
    float m_maxDelayToPlayFastCollapse;
    struct DamageReceiver* m_damageReceiver;
    struct DigZone* m_digZone;
    struct CageStructureTool* m_cageStructure;
    bool m_stressTested;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;

    struct IUberState__Array* m_affectingUberStates;
    bool _DefaultBooleanValue_k__BackingField;
    struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollapsingPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollapsingPlatform__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CollapsingPlatformAnimator.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#endif
#undef IL2CPP_STRUCT_CollapsingPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollapsingPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/CollapsingPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollapsingPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
