#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_TypeAttributes__Enum_DEFINED
enum class TypeAttributes__Enum : int32_t {
    VisibilityMask = 0x00000007,
    NotPublic = 0x00000000,
    Public = 0x00000001,
    NestedPublic = 0x00000002,
    NestedPrivate = 0x00000003,
    NestedFamily = 0x00000004,
    NestedAssembly = 0x00000005,
    NestedFamANDAssem = 0x00000006,
    NestedFamORAssem = 0x00000007,
    LayoutMask = 0x00000018,
    AutoLayout = 0x00000000,
    SequentialLayout = 0x00000008,
    ExplicitLayout = 0x00000010,
    ClassSemanticsMask = 0x00000020,
    Class = 0x00000000,
    Interface = 0x00000020,
    Abstract = 0x00000080,
    Sealed = 0x00000100,
    SpecialName = 0x00000400,
    Import = 0x00001000,
    Serializable = 0x00002000,
    WindowsRuntime = 0x00004000,
    StringFormatMask = 0x00030000,
    AnsiClass = 0x00000000,
    UnicodeClass = 0x00010000,
    AutoClass = 0x00020000,
    CustomFormatClass = 0x00030000,
    CustomFormatMask = 0x00c00000,
    BeforeFieldInit = 0x00100000,
    ReservedMask = 0x00040800,
    RTSpecialName = 0x00000800,
    HasSecurity = 0x00040000,
};
#endif
#if !defined(IL2CPP_STRUCT_TypeAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_TypeAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TypeAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TypeAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
