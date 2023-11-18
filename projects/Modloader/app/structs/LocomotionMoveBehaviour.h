#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionMoveBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionMoveBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour_DEFINED)
#include <Modloader/app/structs/LocomotionMoveBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionMoveBehaviour_DEFINED
struct LocomotionMoveBehaviour__Class;
struct LocomotionMoveBehaviour {
    struct LocomotionMoveBehaviour__Class* klass;
    MonitorData* monitor;
    struct LocomotionMoveBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour_FWDDECL)
#define IL2CPP_STRUCT_LocomotionMoveBehaviour_FWDDECL
#include <Modloader/app/structs/LocomotionMoveBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_LocomotionMoveBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour_FWDDECL)
#include <Modloader/app/structs/LocomotionMoveBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionMoveBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
