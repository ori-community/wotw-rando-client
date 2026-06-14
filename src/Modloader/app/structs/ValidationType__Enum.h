#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationType__Enum_DEFINED)
#define IL2CPP_STRUCT_ValidationType__Enum_DEFINED
enum class ValidationType__Enum : int32_t {
    None = 0x00000000,
    Auto = 0x00000001,
    DTD = 0x00000002,
    XDR = 0x00000003,
    Schema = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ValidationType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ValidationType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValidationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ValidationType__Enum_FWDDECL)
#include <Modloader/app/structs/ValidationType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
