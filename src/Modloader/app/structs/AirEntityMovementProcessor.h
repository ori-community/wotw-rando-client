#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AirEntityMovementProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AirEntityMovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirEntityMovementProcessor_DEFINED)
#include <Modloader/app/structs/AirEntityMovementProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_AirEntityMovementProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_AirEntityMovementProcessor_DEFINED
struct AirEntityMovementProcessor__Class;
struct AirEntityMovementProcessor {
    struct AirEntityMovementProcessor__Class* klass;
    MonitorData* monitor;
    struct AirEntityMovementProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AirEntityMovementProcessor_FWDDECL)
#define IL2CPP_STRUCT_AirEntityMovementProcessor_FWDDECL
#include <Modloader/app/structs/AirEntityMovementProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_AirEntityMovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirEntityMovementProcessor_DEFINED) && !defined(IL2CPP_STRUCT_AirEntityMovementProcessor_FWDDECL)
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
