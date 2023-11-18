#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonArray_DEFINED)
#include <Modloader/app/structs/BsonArray__Fields.h>
#if defined(IL2CPP_STRUCT_BsonArray__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonArray_DEFINED
struct BsonArray__Class;
struct BsonArray {
    struct BsonArray__Class* klass;
    MonitorData* monitor;
    struct BsonArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonArray_FWDDECL)
#define IL2CPP_STRUCT_BsonArray_FWDDECL
#include <Modloader/app/structs/BsonArray__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonArray_DEFINED) && !defined(IL2CPP_STRUCT_BsonArray_FWDDECL)
#include <Modloader/app/structs/BsonArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
