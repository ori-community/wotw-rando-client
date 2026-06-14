#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonRegex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonRegex_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonRegex_DEFINED)
#include <Modloader/app/structs/BsonRegex__Fields.h>
#if defined(IL2CPP_STRUCT_BsonRegex__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonRegex_DEFINED
struct BsonRegex__Class;
struct BsonRegex {
    struct BsonRegex__Class* klass;
    MonitorData* monitor;
    struct BsonRegex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonRegex_FWDDECL)
#define IL2CPP_STRUCT_BsonRegex_FWDDECL
#include <Modloader/app/structs/BsonRegex__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonRegex_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonRegex_DEFINED) && !defined(IL2CPP_STRUCT_BsonRegex_FWDDECL)
#include <Modloader/app/structs/BsonRegex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonRegex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
