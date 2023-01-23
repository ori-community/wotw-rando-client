#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonEmpty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonEmpty_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonEmpty_DEFINED)
#include <Modloader/app/structs/BsonEmpty__Fields.h>
#if defined(IL2CPP_STRUCT_BsonEmpty__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonEmpty_DEFINED
struct BsonEmpty__Class;
struct BsonEmpty {
    struct BsonEmpty__Class* klass;
    MonitorData* monitor;
    struct BsonEmpty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonEmpty_FWDDECL)
#define IL2CPP_STRUCT_BsonEmpty_FWDDECL
#include <Modloader/app/structs/BsonEmpty__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonEmpty_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonEmpty_DEFINED) && !defined(IL2CPP_STRUCT_BsonEmpty_FWDDECL)
#include <Modloader/app/structs/BsonEmpty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonEmpty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
