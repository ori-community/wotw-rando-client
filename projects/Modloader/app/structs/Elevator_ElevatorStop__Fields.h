#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_DEFINED)
#define IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_DEFINED
struct Condition_1;
struct __declspec(align(8)) Elevator_ElevatorStop__Fields {
    float Height;
    struct Condition_1* ValidCondition;
};
#endif
#if !defined(IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_FWDDECL)
#define IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Elevator_ElevatorStop__Fields_FWDDECL)
#include <Modloader/app/structs/Elevator_ElevatorStop__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Elevator_ElevatorStop__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
