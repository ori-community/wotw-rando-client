#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonString_DEFINED)
#include <Modloader/app/structs/BsonString__Fields.h>
#if defined(IL2CPP_STRUCT_BsonString__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonString_DEFINED
struct BsonString__Class;
struct BsonString {
    struct BsonString__Class* klass;
    MonitorData* monitor;
    struct BsonString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonString_FWDDECL)
#define IL2CPP_STRUCT_BsonString_FWDDECL
#include <Modloader/app/structs/BsonString__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonString_DEFINED) && !defined(IL2CPP_STRUCT_BsonString_FWDDECL)
#include <Modloader/app/structs/BsonString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
