#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_TaskStatus__Enum_DEFINED
enum class TaskStatus__Enum : int32_t {
    Created = 0x00000000,
    WaitingForActivation = 0x00000001,
    WaitingToRun = 0x00000002,
    Running = 0x00000003,
    WaitingForChildrenToComplete = 0x00000004,
    RanToCompletion = 0x00000005,
    Canceled = 0x00000006,
    Faulted = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_TaskStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_TaskStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TaskStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TaskStatus__Enum_FWDDECL)
#include <Modloader/app/structs/TaskStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
