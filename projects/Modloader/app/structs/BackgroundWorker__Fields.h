#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackgroundWorker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackgroundWorker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackgroundWorker__Fields_DEFINED)
#include <Modloader/app/structs/Component__Fields.h>
#if defined(IL2CPP_STRUCT_Component__Fields_DEFINED)
#define IL2CPP_STRUCT_BackgroundWorker__Fields_DEFINED
struct AsyncOperation;
struct BackgroundWorker_WorkerThreadStartDelegate;
struct SendOrPostCallback;
struct BackgroundWorker__Fields {
    struct Component__Fields _;
    bool canCancelWorker;
    bool workerReportsProgress;
    bool cancellationPending;
    bool isRunning;
    struct AsyncOperation* asyncOperation;
    struct BackgroundWorker_WorkerThreadStartDelegate* threadStart;
    struct SendOrPostCallback* operationCompleted;
    struct SendOrPostCallback* progressReporter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BackgroundWorker__Fields_FWDDECL)
#define IL2CPP_STRUCT_BackgroundWorker__Fields_FWDDECL
#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/BackgroundWorker_WorkerThreadStartDelegate.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#endif
#undef IL2CPP_STRUCT_BackgroundWorker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackgroundWorker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BackgroundWorker__Fields_FWDDECL)
#include <Modloader/app/structs/BackgroundWorker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackgroundWorker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
