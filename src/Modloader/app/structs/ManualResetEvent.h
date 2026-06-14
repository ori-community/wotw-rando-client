#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManualResetEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManualResetEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManualResetEvent_DEFINED)
#include <Modloader/app/structs/ManualResetEvent__Fields.h>
#if defined(IL2CPP_STRUCT_ManualResetEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_ManualResetEvent_DEFINED
struct ManualResetEvent__Class;
struct ManualResetEvent {
    struct ManualResetEvent__Class* klass;
    MonitorData* monitor;
    struct ManualResetEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManualResetEvent_FWDDECL)
#define IL2CPP_STRUCT_ManualResetEvent_FWDDECL
#include <Modloader/app/structs/ManualResetEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_ManualResetEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManualResetEvent_DEFINED) && !defined(IL2CPP_STRUCT_ManualResetEvent_FWDDECL)
#include <Modloader/app/structs/ManualResetEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManualResetEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
