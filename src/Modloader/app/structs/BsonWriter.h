#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonWriter_DEFINED)
#include <Modloader/app/structs/BsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_BsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonWriter_DEFINED
struct BsonWriter__Class;
struct BsonWriter {
    struct BsonWriter__Class* klass;
    MonitorData* monitor;
    struct BsonWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonWriter_FWDDECL)
#define IL2CPP_STRUCT_BsonWriter_FWDDECL
#include <Modloader/app/structs/BsonWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonWriter_DEFINED) && !defined(IL2CPP_STRUCT_BsonWriter_FWDDECL)
#include <Modloader/app/structs/BsonWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
