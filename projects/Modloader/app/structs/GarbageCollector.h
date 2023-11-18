#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GarbageCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GarbageCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_GarbageCollector_DEFINED)
#define IL2CPP_STRUCT_GarbageCollector_DEFINED
struct GarbageCollector__Class;
struct GarbageCollector {
    struct GarbageCollector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GarbageCollector_FWDDECL)
#define IL2CPP_STRUCT_GarbageCollector_FWDDECL
#include <Modloader/app/structs/GarbageCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_GarbageCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_GarbageCollector_DEFINED) && !defined(IL2CPP_STRUCT_GarbageCollector_FWDDECL)
#include <Modloader/app/structs/GarbageCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GarbageCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
