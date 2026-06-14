#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadState__Enum_DEFINED)
#define IL2CPP_STRUCT_ThreadState__Enum_DEFINED
enum class ThreadState__Enum : int32_t {
    Running = 0x00000000,
    StopRequested = 0x00000001,
    SuspendRequested = 0x00000002,
    Background = 0x00000004,
    Unstarted = 0x00000008,
    Stopped = 0x00000010,
    WaitSleepJoin = 0x00000020,
    Suspended = 0x00000040,
    AbortRequested = 0x00000080,
    Aborted = 0x00000100,
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadState__Enum_FWDDECL)
#define IL2CPP_STRUCT_ThreadState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ThreadState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ThreadState__Enum_FWDDECL)
#include <Modloader/app/structs/ThreadState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
