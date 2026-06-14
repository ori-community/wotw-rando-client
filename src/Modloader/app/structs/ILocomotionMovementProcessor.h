#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILocomotionMovementProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILocomotionMovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILocomotionMovementProcessor_DEFINED)
#define IL2CPP_STRUCT_ILocomotionMovementProcessor_DEFINED
struct ILocomotionMovementProcessor__Class;
struct ILocomotionMovementProcessor {
    struct ILocomotionMovementProcessor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILocomotionMovementProcessor_FWDDECL)
#define IL2CPP_STRUCT_ILocomotionMovementProcessor_FWDDECL
#include <Modloader/app/structs/ILocomotionMovementProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_ILocomotionMovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILocomotionMovementProcessor_DEFINED) && !defined(IL2CPP_STRUCT_ILocomotionMovementProcessor_FWDDECL)
#include <Modloader/app/structs/ILocomotionMovementProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILocomotionMovementProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
