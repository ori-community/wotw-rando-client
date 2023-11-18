#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationEventsCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationEventsCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEventsCache_DEFINED)
#define IL2CPP_STRUCT_SerializationEventsCache_DEFINED
struct SerializationEventsCache__Class;
struct SerializationEventsCache {
    struct SerializationEventsCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationEventsCache_FWDDECL)
#define IL2CPP_STRUCT_SerializationEventsCache_FWDDECL
#include <Modloader/app/structs/SerializationEventsCache__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationEventsCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEventsCache_DEFINED) && !defined(IL2CPP_STRUCT_SerializationEventsCache_FWDDECL)
#include <Modloader/app/structs/SerializationEventsCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationEventsCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
