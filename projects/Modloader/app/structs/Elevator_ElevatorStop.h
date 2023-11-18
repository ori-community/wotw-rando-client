#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Elevator_ElevatorStop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Elevator_ElevatorStop_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator_ElevatorStop_DEFINED)
#include <Modloader/app/structs/Elevator_ElevatorStop__Fields.h>
#if defined(IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_DEFINED)
#define IL2CPP_STRUCT_Elevator_ElevatorStop_DEFINED
struct Elevator_ElevatorStop__Class;
struct Elevator_ElevatorStop {
    struct Elevator_ElevatorStop__Class* klass;
    MonitorData* monitor;
    struct Elevator_ElevatorStop__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Elevator_ElevatorStop_FWDDECL)
#define IL2CPP_STRUCT_Elevator_ElevatorStop_FWDDECL
#include <Modloader/app/structs/Elevator_ElevatorStop__Class.h>
#endif
#undef IL2CPP_STRUCT_Elevator_ElevatorStop_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator_ElevatorStop_DEFINED) && !defined(IL2CPP_STRUCT_Elevator_ElevatorStop_FWDDECL)
#include <Modloader/app/structs/Elevator_ElevatorStop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Elevator_ElevatorStop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
