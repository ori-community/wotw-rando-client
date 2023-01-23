#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED
struct ILocomotionTurningHandler;
struct Locomotion;
struct BaseLocomotionTurningBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    float _TargetLookDirectionX_k__BackingField;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct Locomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Locomotion.h>
#endif
#undef IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
