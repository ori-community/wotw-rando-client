#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitOrTimerCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitOrTimerCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitOrTimerCallback_DEFINED)
#include <Modloader/app/structs/WaitOrTimerCallback__Fields.h>
#if defined(IL2CPP_STRUCT_WaitOrTimerCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitOrTimerCallback_DEFINED
struct WaitOrTimerCallback__Class;
struct WaitOrTimerCallback {
    struct WaitOrTimerCallback__Class* klass;
    MonitorData* monitor;
    struct WaitOrTimerCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitOrTimerCallback_FWDDECL)
#define IL2CPP_STRUCT_WaitOrTimerCallback_FWDDECL
#include <Modloader/app/structs/WaitOrTimerCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitOrTimerCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitOrTimerCallback_DEFINED) && !defined(IL2CPP_STRUCT_WaitOrTimerCallback_FWDDECL)
#include <Modloader/app/structs/WaitOrTimerCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitOrTimerCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
