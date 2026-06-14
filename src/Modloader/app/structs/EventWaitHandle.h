#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventWaitHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventWaitHandle_DEFINED)
#include <Modloader/app/structs/EventWaitHandle__Fields.h>
#if defined(IL2CPP_STRUCT_EventWaitHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_EventWaitHandle_DEFINED
struct EventWaitHandle__Class;
struct EventWaitHandle {
    struct EventWaitHandle__Class* klass;
    MonitorData* monitor;
    struct EventWaitHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventWaitHandle_FWDDECL)
#define IL2CPP_STRUCT_EventWaitHandle_FWDDECL
#include <Modloader/app/structs/EventWaitHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_EventWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventWaitHandle_DEFINED) && !defined(IL2CPP_STRUCT_EventWaitHandle_FWDDECL)
#include <Modloader/app/structs/EventWaitHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventWaitHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
