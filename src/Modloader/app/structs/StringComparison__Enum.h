#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringComparison__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringComparison__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringComparison__Enum_DEFINED)
#define IL2CPP_STRUCT_StringComparison__Enum_DEFINED
enum class StringComparison__Enum : int32_t {
    CurrentCulture = 0x00000000,
    CurrentCultureIgnoreCase = 0x00000001,
    InvariantCulture = 0x00000002,
    InvariantCultureIgnoreCase = 0x00000003,
    Ordinal = 0x00000004,
    OrdinalIgnoreCase = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_StringComparison__Enum_FWDDECL)
#define IL2CPP_STRUCT_StringComparison__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StringComparison__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringComparison__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StringComparison__Enum_FWDDECL)
#include <Modloader/app/structs/StringComparison__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringComparison__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
