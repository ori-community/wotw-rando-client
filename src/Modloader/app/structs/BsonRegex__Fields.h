#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonRegex__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonRegex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonRegex__Fields_DEFINED)
#include <Modloader/app/structs/BsonToken__Fields.h>
#if defined(IL2CPP_STRUCT_BsonToken__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonRegex__Fields_DEFINED
struct BsonString;
struct BsonRegex__Fields {
    struct BsonToken__Fields _;
    struct BsonString* _Pattern_k__BackingField;
    struct BsonString* _Options_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonRegex__Fields_FWDDECL)
#define IL2CPP_STRUCT_BsonRegex__Fields_FWDDECL
#include <Modloader/app/structs/BsonString.h>
#endif
#undef IL2CPP_STRUCT_BsonRegex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonRegex__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BsonRegex__Fields_FWDDECL)
#include <Modloader/app/structs/BsonRegex__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonRegex__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
