#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonProperty__Fields_DEFINED
struct BsonString;
struct BsonToken;
struct __declspec(align(8)) BsonProperty__Fields {
    struct BsonString* _Name_k__BackingField;
    struct BsonToken* _Value_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_BsonProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_BsonProperty__Fields_FWDDECL
#include <Modloader/app/structs/BsonString.h>
#include <Modloader/app/structs/BsonToken.h>
#endif
#undef IL2CPP_STRUCT_BsonProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BsonProperty__Fields_FWDDECL)
#include <Modloader/app/structs/BsonProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
