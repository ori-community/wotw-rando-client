#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonObjectId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonObjectId_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonObjectId_DEFINED)
#include <Modloader/app/structs/BsonObjectId__Fields.h>
#if defined(IL2CPP_STRUCT_BsonObjectId__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonObjectId_DEFINED
struct BsonObjectId__Class;
struct BsonObjectId {
    struct BsonObjectId__Class* klass;
    MonitorData* monitor;
    struct BsonObjectId__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonObjectId_FWDDECL)
#define IL2CPP_STRUCT_BsonObjectId_FWDDECL
#include <Modloader/app/structs/BsonObjectId__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonObjectId_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonObjectId_DEFINED) && !defined(IL2CPP_STRUCT_BsonObjectId_FWDDECL)
#include <Modloader/app/structs/BsonObjectId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonObjectId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
