#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonBinaryWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonBinaryWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinaryWriter_DEFINED)
#include <Modloader/app/structs/BsonBinaryWriter__Fields.h>
#if defined(IL2CPP_STRUCT_BsonBinaryWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonBinaryWriter_DEFINED
struct BsonBinaryWriter__Class;
struct BsonBinaryWriter {
    struct BsonBinaryWriter__Class* klass;
    MonitorData* monitor;
    struct BsonBinaryWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonBinaryWriter_FWDDECL)
#define IL2CPP_STRUCT_BsonBinaryWriter_FWDDECL
#include <Modloader/app/structs/BsonBinaryWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonBinaryWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinaryWriter_DEFINED) && !defined(IL2CPP_STRUCT_BsonBinaryWriter_FWDDECL)
#include <Modloader/app/structs/BsonBinaryWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonBinaryWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
