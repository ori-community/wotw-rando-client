#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_DEFINED)
#define IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_DEFINED
enum class TimerThread_TimerNode_TimerState__Enum : int32_t {
    Ready = 0x00000000,
    Fired = 0x00000001,
    Cancelled = 0x00000002,
    Sentinel = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_TimerNode_TimerState__Enum_FWDDECL)
#include <Modloader/app/structs/TimerThread_TimerNode_TimerState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_TimerNode_TimerState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
