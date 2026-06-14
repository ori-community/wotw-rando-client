#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Process__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Process__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process__Fields_DEFINED)
#include <Modloader/app/structs/Component__Fields.h>
#include <Modloader/app/structs/Process_StreamReadMode__Enum.h>
#if defined(IL2CPP_STRUCT_Component__Fields_DEFINED) && defined(IL2CPP_STRUCT_Process_StreamReadMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Process__Fields_DEFINED
struct SafeProcessHandle;
struct String;
struct ProcessThreadCollection;
struct ProcessModuleCollection;
struct ProcessStartInfo;
struct EventHandler;
struct RegisteredWaitHandle;
struct WaitHandle;
struct ISynchronizeInvoke;
struct StreamReader;
struct StreamWriter;
struct AsyncStreamReader;
struct Process__Fields {
    struct Component__Fields _;
    bool haveProcessId;
    int32_t processId;
    bool haveProcessHandle;
    struct SafeProcessHandle* m_processHandle;
    bool isRemoteMachine;
    struct String* machineName;
    int32_t m_processAccess;
    struct ProcessThreadCollection* threads;
    struct ProcessModuleCollection* modules;
    bool haveWorkingSetLimits;
    bool havePriorityClass;
    struct ProcessStartInfo* startInfo;
    bool watchForExit;
    bool watchingForExit;
    struct EventHandler* onExited;
    bool exited;
    int32_t exitCode;
    bool signaled;
    bool haveExitTime;
    bool raisedOnExited;
    struct RegisteredWaitHandle* registeredWaitHandle;
    struct WaitHandle* waitHandle;
    struct ISynchronizeInvoke* synchronizingObject;
    struct StreamReader* standardOutput;
    struct StreamWriter* standardInput;
    struct StreamReader* standardError;
    bool disposed;
    Process_StreamReadMode__Enum outputStreamReadMode;

    Process_StreamReadMode__Enum errorStreamReadMode;

    Process_StreamReadMode__Enum inputStreamReadMode;

    struct AsyncStreamReader* output;
    struct AsyncStreamReader* error;
    struct String* process_name;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Process__Fields_FWDDECL)
#define IL2CPP_STRUCT_Process__Fields_FWDDECL
#include <Modloader/app/structs/AsyncStreamReader.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/ISynchronizeInvoke.h>
#include <Modloader/app/structs/ProcessModuleCollection.h>
#include <Modloader/app/structs/ProcessStartInfo.h>
#include <Modloader/app/structs/ProcessThreadCollection.h>
#include <Modloader/app/structs/RegisteredWaitHandle.h>
#include <Modloader/app/structs/SafeProcessHandle.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WaitHandle.h>
#endif
#undef IL2CPP_STRUCT_Process__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Process__Fields_FWDDECL)
#include <Modloader/app/structs/Process__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Process__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
