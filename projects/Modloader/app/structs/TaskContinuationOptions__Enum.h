#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskContinuationOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskContinuationOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskContinuationOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_TaskContinuationOptions__Enum_DEFINED
enum class TaskContinuationOptions__Enum : int32_t {
    None = 0x00000000,
    PreferFairness = 0x00000001,
    LongRunning = 0x00000002,
    AttachedToParent = 0x00000004,
    DenyChildAttach = 0x00000008,
    HideScheduler = 0x00000010,
    LazyCancellation = 0x00000020,
    RunContinuationsAsynchronously = 0x00000040,
    NotOnRanToCompletion = 0x00010000,
    NotOnFaulted = 0x00020000,
    NotOnCanceled = 0x00040000,
    OnlyOnRanToCompletion = 0x00060000,
    OnlyOnFaulted = 0x00050000,
    OnlyOnCanceled = 0x00030000,
    ExecuteSynchronously = 0x00080000,
};
#endif
#if !defined(IL2CPP_STRUCT_TaskContinuationOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_TaskContinuationOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TaskContinuationOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskContinuationOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TaskContinuationOptions__Enum_FWDDECL)
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
