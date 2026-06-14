#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonBoolean_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonBoolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBoolean_DEFINED)
#include <Modloader/app/structs/BsonBoolean__Fields.h>
#if defined(IL2CPP_STRUCT_BsonBoolean__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonBoolean_DEFINED
struct BsonBoolean__Class;
struct BsonBoolean {
    struct BsonBoolean__Class* klass;
    MonitorData* monitor;
    struct BsonBoolean__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonBoolean_FWDDECL)
#define IL2CPP_STRUCT_BsonBoolean_FWDDECL
#include <Modloader/app/structs/BsonBoolean__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonBoolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBoolean_DEFINED) && !defined(IL2CPP_STRUCT_BsonBoolean_FWDDECL)
#include <Modloader/app/structs/BsonBoolean.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonBoolean.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
