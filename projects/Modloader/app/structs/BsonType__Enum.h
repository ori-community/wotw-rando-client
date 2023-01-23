#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonType__Enum_DEFINED)
#define IL2CPP_STRUCT_BsonType__Enum_DEFINED
enum class BsonType__Enum : int8_t {
    Number = 0x01,
    String = 0x02,
    Object = 0x03,
    Array = 0x04,
    Binary = 0x05,
    Undefined = 0x06,
    Oid = 0x07,
    Boolean = 0x08,
    Date = 0x09,
    Null = 0x0a,
    Regex = 0x0b,
    Reference = 0x0c,
    Code = 0x0d,
    Symbol = 0x0e,
    CodeWScope = 0x0f,
    Integer = 0x10,
    TimeStamp = 0x11,
    Long = 0x12,
    MinKey = 0xff,
    MaxKey = 0x7f,
};
#endif
#if !defined(IL2CPP_STRUCT_BsonType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BsonType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BsonType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BsonType__Enum_FWDDECL)
#include <Modloader/app/structs/BsonType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
