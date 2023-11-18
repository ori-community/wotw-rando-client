#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_DelayPromise__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_DelayPromise__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_DelayPromise__Fields_DEFINED)
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/CancellationTokenRegistration.h>
#include <Modloader/app/structs/Task_1_VoidTaskResult___Fields.h>
#if defined(IL2CPP_STRUCT_Task_1_VoidTaskResult___Fields_DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_CancellationTokenRegistration_DEFINED)
#define IL2CPP_STRUCT_Task_DelayPromise__Fields_DEFINED
struct Timer;
struct Task_DelayPromise__Fields {
    struct Task_1_VoidTaskResult___Fields _;
    struct CancellationToken Token;
    struct CancellationTokenRegistration Registration;
    struct Timer* Timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_DelayPromise__Fields_FWDDECL)
#define IL2CPP_STRUCT_Task_DelayPromise__Fields_FWDDECL
#include <Modloader/app/structs/Timer.h>
#endif
#undef IL2CPP_STRUCT_Task_DelayPromise__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_DelayPromise__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Task_DelayPromise__Fields_FWDDECL)
#include <Modloader/app/structs/Task_DelayPromise__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_DelayPromise__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
