#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovementProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovementProcessor_DEFINED)
#include <Modloader/app/structs/MovementProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_MovementProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_MovementProcessor_DEFINED
struct MovementProcessor__Class;
struct MovementProcessor {
    struct MovementProcessor__Class* klass;
    MonitorData* monitor;
    struct MovementProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovementProcessor_FWDDECL)
#define IL2CPP_STRUCT_MovementProcessor_FWDDECL
#include <Modloader/app/structs/MovementProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_MovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovementProcessor_DEFINED) && !defined(IL2CPP_STRUCT_MovementProcessor_FWDDECL)
#include <Modloader/app/structs/MovementProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovementProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
