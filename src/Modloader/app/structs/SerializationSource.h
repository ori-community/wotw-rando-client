#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSource_DEFINED)
#include <Modloader/app/structs/SerializationSource__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationSource__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationSource_DEFINED
struct SerializationSource__Class;
struct SerializationSource {
    struct SerializationSource__Class* klass;
    MonitorData* monitor;
    struct SerializationSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationSource_FWDDECL)
#define IL2CPP_STRUCT_SerializationSource_FWDDECL
#include <Modloader/app/structs/SerializationSource__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSource_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSource_FWDDECL)
#include <Modloader/app/structs/SerializationSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
