#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonToken_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonToken_DEFINED)
#include <Modloader/app/structs/BsonToken__Fields.h>
#if defined(IL2CPP_STRUCT_BsonToken__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonToken_DEFINED
struct BsonToken__Class;
struct BsonToken {
    struct BsonToken__Class* klass;
    MonitorData* monitor;
    struct BsonToken__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonToken_FWDDECL)
#define IL2CPP_STRUCT_BsonToken_FWDDECL
#include <Modloader/app/structs/BsonToken__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonToken_DEFINED) && !defined(IL2CPP_STRUCT_BsonToken_FWDDECL)
#include <Modloader/app/structs/BsonToken.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonToken.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
