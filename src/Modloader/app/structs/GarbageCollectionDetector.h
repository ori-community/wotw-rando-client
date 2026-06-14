#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GarbageCollectionDetector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GarbageCollectionDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_GarbageCollectionDetector_DEFINED)
#define IL2CPP_STRUCT_GarbageCollectionDetector_DEFINED
struct GarbageCollectionDetector__Class;
struct GarbageCollectionDetector {
    struct GarbageCollectionDetector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GarbageCollectionDetector_FWDDECL)
#define IL2CPP_STRUCT_GarbageCollectionDetector_FWDDECL
#include <Modloader/app/structs/GarbageCollectionDetector__Class.h>
#endif
#undef IL2CPP_STRUCT_GarbageCollectionDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_GarbageCollectionDetector_DEFINED) && !defined(IL2CPP_STRUCT_GarbageCollectionDetector_FWDDECL)
#include <Modloader/app/structs/GarbageCollectionDetector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GarbageCollectionDetector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
