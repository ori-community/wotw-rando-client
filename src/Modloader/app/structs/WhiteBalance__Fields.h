#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WhiteBalance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WhiteBalance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WhiteBalance__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/WhiteBalance_BalanceMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_WhiteBalance_BalanceMode__Enum_DEFINED)
#define IL2CPP_STRUCT_WhiteBalance__Fields_DEFINED
struct WhiteBalance__Fields {
    struct BaseEffect__Fields _;
    struct Color White;
    WhiteBalance_BalanceMode__Enum Mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WhiteBalance__Fields_FWDDECL)
#define IL2CPP_STRUCT_WhiteBalance__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WhiteBalance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WhiteBalance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WhiteBalance__Fields_FWDDECL)
#include <Modloader/app/structs/WhiteBalance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WhiteBalance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
