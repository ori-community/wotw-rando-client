#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonBinaryType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonBinaryType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinaryType__Enum_DEFINED)
#define IL2CPP_STRUCT_BsonBinaryType__Enum_DEFINED
enum class BsonBinaryType__Enum : uint8_t {
    Binary = 0x00,
    Function = 0x01,
    BinaryOld = 0x02,
    UuidOld = 0x03,
    Uuid = 0x04,
    Md5 = 0x05,
    UserDefined = 0x80,
};
#endif
#if !defined(IL2CPP_STRUCT_BsonBinaryType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BsonBinaryType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BsonBinaryType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinaryType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BsonBinaryType__Enum_FWDDECL)
#include <Modloader/app/structs/BsonBinaryType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonBinaryType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
