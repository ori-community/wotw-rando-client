#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonObject_DEFINED)
#include <Modloader/app/structs/BsonObject__Fields.h>
#if defined(IL2CPP_STRUCT_BsonObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonObject_DEFINED
struct BsonObject__Class;
struct BsonObject {
    struct BsonObject__Class* klass;
    MonitorData* monitor;
    struct BsonObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonObject_FWDDECL)
#define IL2CPP_STRUCT_BsonObject_FWDDECL
#include <Modloader/app/structs/BsonObject__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonObject_DEFINED) && !defined(IL2CPP_STRUCT_BsonObject_FWDDECL)
#include <Modloader/app/structs/BsonObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
