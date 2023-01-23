#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonValue_DEFINED)
#include <Modloader/app/structs/BsonValue__Fields.h>
#if defined(IL2CPP_STRUCT_BsonValue__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonValue_DEFINED
struct BsonValue__Class;
struct BsonValue {
    struct BsonValue__Class* klass;
    MonitorData* monitor;
    struct BsonValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonValue_FWDDECL)
#define IL2CPP_STRUCT_BsonValue_FWDDECL
#include <Modloader/app/structs/BsonValue__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonValue_DEFINED) && !defined(IL2CPP_STRUCT_BsonValue_FWDDECL)
#include <Modloader/app/structs/BsonValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
