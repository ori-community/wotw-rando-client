#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_1__Fields_DEFINED)
#include <Modloader/app/structs/Component__Fields.h>
#if defined(IL2CPP_STRUCT_Component__Fields_DEFINED)
#define IL2CPP_STRUCT_Timer_1__Fields_DEFINED
struct ElapsedEventHandler;
struct ISynchronizeInvoke;
struct Timer;
struct TimerCallback;
struct Object;
struct Timer_1__Fields {
    struct Component__Fields _;
    double interval;
    bool enabled;
    bool initializing;
    bool delayedEnable;
    struct ElapsedEventHandler* onIntervalElapsed;
    bool autoReset;
    struct ISynchronizeInvoke* synchronizingObject;
    bool disposed;
    struct Timer* timer;
    struct TimerCallback* callback;
    struct Object* cookie;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Timer_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Timer_1__Fields_FWDDECL
#include <Modloader/app/structs/ElapsedEventHandler.h>
#include <Modloader/app/structs/ISynchronizeInvoke.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Timer.h>
#include <Modloader/app/structs/TimerCallback.h>
#endif
#undef IL2CPP_STRUCT_Timer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Timer_1__Fields_FWDDECL)
#include <Modloader/app/structs/Timer_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
