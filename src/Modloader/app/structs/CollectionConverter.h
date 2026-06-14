#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionConverter_DEFINED)
#define IL2CPP_STRUCT_CollectionConverter_DEFINED
struct CollectionConverter__Class;
struct CollectionConverter {
    struct CollectionConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CollectionConverter_FWDDECL)
#define IL2CPP_STRUCT_CollectionConverter_FWDDECL
#include <Modloader/app/structs/CollectionConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectionConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionConverter_DEFINED) && !defined(IL2CPP_STRUCT_CollectionConverter_FWDDECL)
#include <Modloader/app/structs/CollectionConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
