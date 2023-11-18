#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonObjectIdConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonObjectIdConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonObjectIdConverter_DEFINED)
#define IL2CPP_STRUCT_BsonObjectIdConverter_DEFINED
struct BsonObjectIdConverter__Class;
struct BsonObjectIdConverter {
    struct BsonObjectIdConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BsonObjectIdConverter_FWDDECL)
#define IL2CPP_STRUCT_BsonObjectIdConverter_FWDDECL
#include <Modloader/app/structs/BsonObjectIdConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonObjectIdConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonObjectIdConverter_DEFINED) && !defined(IL2CPP_STRUCT_BsonObjectIdConverter_FWDDECL)
#include <Modloader/app/structs/BsonObjectIdConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonObjectIdConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
