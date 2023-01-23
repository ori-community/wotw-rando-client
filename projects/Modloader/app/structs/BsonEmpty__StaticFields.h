#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonEmpty__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonEmpty__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonEmpty__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BsonEmpty__StaticFields_DEFINED
struct BsonToken;
struct BsonEmpty__StaticFields {
    struct BsonToken* Null;
    struct BsonToken* Undefined;
};
#endif
#if !defined(IL2CPP_STRUCT_BsonEmpty__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BsonEmpty__StaticFields_FWDDECL
#include <Modloader/app/structs/BsonToken.h>
#endif
#undef IL2CPP_STRUCT_BsonEmpty__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonEmpty__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BsonEmpty__StaticFields_FWDDECL)
#include <Modloader/app/structs/BsonEmpty__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonEmpty__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
