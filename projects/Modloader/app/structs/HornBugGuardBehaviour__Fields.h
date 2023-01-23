#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_DEFINED
struct MoonAnimation;
struct ILocomotionTurningHandler;
struct HornBugGuardBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _Target_k__BackingField;
    struct MoonAnimation* GuardStartAnimation;
    struct MoonAnimation* GuardLoop;
    int32_t AnimationPriority;
    struct ActiveAnimationHandle m_animationState;
    struct ILocomotionTurningHandler* m_turnHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugGuardBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugGuardBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
