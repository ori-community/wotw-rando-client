#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_State__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_State__Enum_DEFINED
enum class XsdBuilder_State__Enum : int32_t {
    Root = 0x00000000,
    Schema = 0x00000001,
    Annotation = 0x00000002,
    Include = 0x00000003,
    Import = 0x00000004,
    Element = 0x00000005,
    Attribute = 0x00000006,
    AttributeGroup = 0x00000007,
    AttributeGroupRef = 0x00000008,
    AnyAttribute = 0x00000009,
    Group = 0x0000000a,
    GroupRef = 0x0000000b,
    All = 0x0000000c,
    Choice = 0x0000000d,
    Sequence = 0x0000000e,
    Any = 0x0000000f,
    Notation = 0x00000010,
    SimpleType = 0x00000011,
    ComplexType = 0x00000012,
    ComplexContent = 0x00000013,
    ComplexContentRestriction = 0x00000014,
    ComplexContentExtension = 0x00000015,
    SimpleContent = 0x00000016,
    SimpleContentExtension = 0x00000017,
    SimpleContentRestriction = 0x00000018,
    SimpleTypeUnion = 0x00000019,
    SimpleTypeList = 0x0000001a,
    SimpleTypeRestriction = 0x0000001b,
    Unique = 0x0000001c,
    Key = 0x0000001d,
    KeyRef = 0x0000001e,
    Selector = 0x0000001f,
    Field = 0x00000020,
    MinExclusive = 0x00000021,
    MinInclusive = 0x00000022,
    MaxExclusive = 0x00000023,
    MaxInclusive = 0x00000024,
    TotalDigits = 0x00000025,
    FractionDigits = 0x00000026,
    Length = 0x00000027,
    MinLength = 0x00000028,
    MaxLength = 0x00000029,
    Enumeration = 0x0000002a,
    Pattern = 0x0000002b,
    WhiteSpace = 0x0000002c,
    AppInfo = 0x0000002d,
    Documentation = 0x0000002e,
    Redefine = 0x0000002f,
};
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdBuilder_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_State__Enum_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
