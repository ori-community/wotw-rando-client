#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Elevator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Elevator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator_DEFINED)
#include <Modloader/app/structs/Elevator__Fields.h>
#if defined(IL2CPP_STRUCT_Elevator__Fields_DEFINED)
#define IL2CPP_STRUCT_Elevator_DEFINED
struct Elevator__Class;
struct Elevator {
    struct Elevator__Class* klass;
    MonitorData* monitor;
    struct Elevator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Elevator_FWDDECL)
#define IL2CPP_STRUCT_Elevator_FWDDECL
#include <Modloader/app/structs/Elevator__Class.h>
#endif
#undef IL2CPP_STRUCT_Elevator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator_DEFINED) && !defined(IL2CPP_STRUCT_Elevator_FWDDECL)
#include <Modloader/app/structs/Elevator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Elevator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
