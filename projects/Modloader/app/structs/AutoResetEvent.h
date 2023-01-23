#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoResetEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoResetEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoResetEvent_DEFINED)
#include <Modloader/app/structs/AutoResetEvent__Fields.h>
#if defined(IL2CPP_STRUCT_AutoResetEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoResetEvent_DEFINED
struct AutoResetEvent__Class;
struct AutoResetEvent {
    struct AutoResetEvent__Class* klass;
    MonitorData* monitor;
    struct AutoResetEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoResetEvent_FWDDECL)
#define IL2CPP_STRUCT_AutoResetEvent_FWDDECL
#include <Modloader/app/structs/AutoResetEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoResetEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoResetEvent_DEFINED) && !defined(IL2CPP_STRUCT_AutoResetEvent_FWDDECL)
#include <Modloader/app/structs/AutoResetEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoResetEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
