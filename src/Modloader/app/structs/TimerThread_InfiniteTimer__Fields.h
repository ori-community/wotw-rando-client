#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_DEFINED)
#include <Modloader/app/structs/TimerThread_Timer__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_Timer__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_DEFINED
struct TimerThread_InfiniteTimer__Fields {
    struct TimerThread_Timer__Fields _;
    int32_t cancelled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_FWDDECL)
#include <Modloader/app/structs/TimerThread_InfiniteTimer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_InfiniteTimer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
