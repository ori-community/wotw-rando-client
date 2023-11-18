#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_SessionInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_SessionInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Array_DEFINED)
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#if defined(IL2CPP_STRUCT_EventProvider_SessionInfo_DEFINED)
#define IL2CPP_STRUCT_EventProvider_SessionInfo__Array_DEFINED
struct EventProvider_SessionInfo__Array__Class;
struct EventProvider_SessionInfo__Array {
    struct EventProvider_SessionInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct EventProvider_SessionInfo vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_SessionInfo__Array_FWDDECL
#include <Modloader/app/structs/EventProvider_SessionInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_EventProvider_SessionInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Array_FWDDECL)
#include <Modloader/app/structs/EventProvider_SessionInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_SessionInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
