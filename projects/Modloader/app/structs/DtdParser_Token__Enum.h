#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DtdParser_Token__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DtdParser_Token__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser_Token__Enum_DEFINED)
#define IL2CPP_STRUCT_DtdParser_Token__Enum_DEFINED
enum class DtdParser_Token__Enum : int32_t {
    CDATA = 0x00000000,
    ID = 0x00000001,
    IDREF = 0x00000002,
    IDREFS = 0x00000003,
    ENTITY = 0x00000004,
    ENTITIES = 0x00000005,
    NMTOKEN = 0x00000006,
    NMTOKENS = 0x00000007,
    NOTATION = 0x00000008,
    None = 0x00000009,
    PERef = 0x0000000a,
    AttlistDecl = 0x0000000b,
    ElementDecl = 0x0000000c,
    EntityDecl = 0x0000000d,
    NotationDecl = 0x0000000e,
    Comment = 0x0000000f,
    PI = 0x00000010,
    CondSectionStart = 0x00000011,
    CondSectionEnd = 0x00000012,
    Eof = 0x00000013,
    REQUIRED = 0x00000014,
    IMPLIED = 0x00000015,
    FIXED = 0x00000016,
    QName = 0x00000017,
    Name = 0x00000018,
    Nmtoken = 0x00000019,
    Quote = 0x0000001a,
    LeftParen = 0x0000001b,
    RightParen = 0x0000001c,
    GreaterThan = 0x0000001d,
    Or = 0x0000001e,
    LeftBracket = 0x0000001f,
    RightBracket = 0x00000020,
    PUBLIC = 0x00000021,
    SYSTEM = 0x00000022,
    Literal = 0x00000023,
    DOCTYPE = 0x00000024,
    NData = 0x00000025,
    Percent = 0x00000026,
    Star = 0x00000027,
    QMark = 0x00000028,
    Plus = 0x00000029,
    PCDATA = 0x0000002a,
    Comma = 0x0000002b,
    ANY = 0x0000002c,
    EMPTY = 0x0000002d,
    IGNORE = 0x0000002e,
    INCLUDE = 0x0000002f,
};
#endif
#if !defined(IL2CPP_STRUCT_DtdParser_Token__Enum_FWDDECL)
#define IL2CPP_STRUCT_DtdParser_Token__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DtdParser_Token__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser_Token__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DtdParser_Token__Enum_FWDDECL)
#include <Modloader/app/structs/DtdParser_Token__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DtdParser_Token__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
