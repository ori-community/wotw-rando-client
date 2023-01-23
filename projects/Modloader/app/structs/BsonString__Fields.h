#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonString__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonString__Fields_DEFINED)
#include <Modloader/app/structs/BsonValue__Fields.h>
#if defined(IL2CPP_STRUCT_BsonValue__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonString__Fields_DEFINED
struct BsonString__Fields {
    struct BsonValue__Fields _;
    int32_t _ByteCount_k__BackingField;
    bool _IncludeLength_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonString__Fields_FWDDECL)
#define IL2CPP_STRUCT_BsonString__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BsonString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonString__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BsonString__Fields_FWDDECL)
#include <Modloader/app/structs/BsonString__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonString__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
