#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonBinary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonBinary_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinary_DEFINED)
#include <Modloader/app/structs/BsonBinary__Fields.h>
#if defined(IL2CPP_STRUCT_BsonBinary__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonBinary_DEFINED
struct BsonBinary__Class;
struct BsonBinary {
    struct BsonBinary__Class* klass;
    MonitorData* monitor;
    struct BsonBinary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonBinary_FWDDECL)
#define IL2CPP_STRUCT_BsonBinary_FWDDECL
#include <Modloader/app/structs/BsonBinary__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonBinary_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinary_DEFINED) && !defined(IL2CPP_STRUCT_BsonBinary_FWDDECL)
#include <Modloader/app/structs/BsonBinary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonBinary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
