#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationHeaderRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationHeaderRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationHeaderRecord_DEFINED)
#include <Modloader/app/structs/SerializationHeaderRecord__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationHeaderRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationHeaderRecord_DEFINED
struct SerializationHeaderRecord__Class;
struct SerializationHeaderRecord {
    struct SerializationHeaderRecord__Class* klass;
    MonitorData* monitor;
    struct SerializationHeaderRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationHeaderRecord_FWDDECL)
#define IL2CPP_STRUCT_SerializationHeaderRecord_FWDDECL
#include <Modloader/app/structs/SerializationHeaderRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationHeaderRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationHeaderRecord_DEFINED) && !defined(IL2CPP_STRUCT_SerializationHeaderRecord_FWDDECL)
#include <Modloader/app/structs/SerializationHeaderRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationHeaderRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
