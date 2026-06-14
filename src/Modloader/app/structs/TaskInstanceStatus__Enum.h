#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskInstanceStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskInstanceStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskInstanceStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_TaskInstanceStatus__Enum_DEFINED
enum class TaskInstanceStatus__Enum : int32_t {
    Succeeded = 0x00000000,
    Starting = 0x00000001,
    InProgress = 0x00000002,
    Failed = 0x00000003,
    Aborted = 0x00000004,
    Stalled = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_TaskInstanceStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_TaskInstanceStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TaskInstanceStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskInstanceStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TaskInstanceStatus__Enum_FWDDECL)
#include <Modloader/app/structs/TaskInstanceStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskInstanceStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
