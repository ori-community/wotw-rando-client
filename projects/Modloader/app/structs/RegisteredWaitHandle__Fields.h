#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisteredWaitHandle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisteredWaitHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisteredWaitHandle__Fields_DEFINED)
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_RegisteredWaitHandle__Fields_DEFINED
struct WaitHandle;
struct WaitOrTimerCallback;
struct Object;
struct ManualResetEvent;
struct RegisteredWaitHandle__Fields {
    struct MarshalByRefObject__Fields _;
    struct WaitHandle* _waitObject;
    struct WaitOrTimerCallback* _callback;
    struct Object* _state;
    struct WaitHandle* _finalEvent;
    struct ManualResetEvent* _cancelEvent;
    struct TimeSpan _timeout;
    int32_t _callsInProcess;
    bool _executeOnlyOnce;
    bool _unregistered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisteredWaitHandle__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegisteredWaitHandle__Fields_FWDDECL
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaitHandle.h>
#include <Modloader/app/structs/WaitOrTimerCallback.h>
#endif
#undef IL2CPP_STRUCT_RegisteredWaitHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisteredWaitHandle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegisteredWaitHandle__Fields_FWDDECL)
#include <Modloader/app/structs/RegisteredWaitHandle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisteredWaitHandle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
