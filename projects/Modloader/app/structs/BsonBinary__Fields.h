#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonBinary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonBinary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinary__Fields_DEFINED)
#include <Modloader/app/structs/BsonBinaryType__Enum.h>
#include <Modloader/app/structs/BsonValue__Fields.h>
#if defined(IL2CPP_STRUCT_BsonValue__Fields_DEFINED) && defined(IL2CPP_STRUCT_BsonBinaryType__Enum_DEFINED)
#define IL2CPP_STRUCT_BsonBinary__Fields_DEFINED
struct BsonBinary__Fields {
    struct BsonValue__Fields _;
    BsonBinaryType__Enum _BinaryType_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonBinary__Fields_FWDDECL)
#define IL2CPP_STRUCT_BsonBinary__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BsonBinary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BsonBinary__Fields_FWDDECL)
#include <Modloader/app/structs/BsonBinary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonBinary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
