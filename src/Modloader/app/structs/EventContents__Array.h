#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventContents__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventContents__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventContents__Array_DEFINED)
#define IL2CPP_STRUCT_EventContents__Array_DEFINED
struct EventContents__Array__Class;
struct EventContents;
struct EventContents__Array {
    struct EventContents__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct EventContents* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_EventContents__Array_FWDDECL)
#define IL2CPP_STRUCT_EventContents__Array_FWDDECL
#include <Modloader/app/structs/EventContents.h>
#include <Modloader/app/structs/EventContents__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_EventContents__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventContents__Array_DEFINED) && !defined(IL2CPP_STRUCT_EventContents__Array_FWDDECL)
#include <Modloader/app/structs/EventContents__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventContents__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
