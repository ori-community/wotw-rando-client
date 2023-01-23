#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyActivateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyActivateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyActivateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/LegacyActivateAnimator_ActivationMode__Enum.h>
#include <Modloader/app/structs/LegacyActivateAnimator_TargetMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyActivateAnimator_ActivationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LegacyActivateAnimator_TargetMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyActivateAnimator__Fields_DEFINED
struct GameObject;
struct GameObject__Array;
struct MonoBehaviour__Array;
struct Dictionary_2_UnityEngine_GameObject_System_Boolean_;
struct Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_;
struct LegacyActivateAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct GameObject* Target;
    struct GameObject__Array* AdditionalTargets;
    struct MonoBehaviour__Array* ComponentsTargets;
    bool ShouldBeActive;
    LegacyActivateAnimator_ActivationMode__Enum Mode;

    LegacyActivateAnimator_TargetMode__Enum TargetType;

    float ClipDuration;
    bool m_originalActivation;
    struct Dictionary_2_UnityEngine_GameObject_System_Boolean_* m_originalActivations;
    struct Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_* m_originalComponentActivations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyActivateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyActivateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_MonoBehaviour_System_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/MonoBehaviour__Array.h>
#endif
#undef IL2CPP_STRUCT_LegacyActivateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyActivateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyActivateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyActivateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyActivateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
