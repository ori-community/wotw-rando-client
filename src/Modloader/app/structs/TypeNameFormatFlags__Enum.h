#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeNameFormatFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeNameFormatFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNameFormatFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_TypeNameFormatFlags__Enum_DEFINED
enum class TypeNameFormatFlags__Enum : int32_t {
    FormatBasic = 0x00000000,
    FormatNamespace = 0x00000001,
    FormatFullInst = 0x00000002,
    FormatAssembly = 0x00000004,
    FormatSignature = 0x00000008,
    FormatNoVersion = 0x00000010,
    FormatAngleBrackets = 0x00000040,
    FormatStubInfo = 0x00000080,
    FormatGenericParam = 0x00000100,
    FormatSerialization = 0x00000103,
};
#endif
#if !defined(IL2CPP_STRUCT_TypeNameFormatFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_TypeNameFormatFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TypeNameFormatFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNameFormatFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TypeNameFormatFlags__Enum_FWDDECL)
#include <Modloader/app/structs/TypeNameFormatFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeNameFormatFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
