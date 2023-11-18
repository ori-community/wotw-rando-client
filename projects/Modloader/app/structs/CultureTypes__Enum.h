#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_CultureTypes__Enum_DEFINED
enum class CultureTypes__Enum : int32_t {
    NeutralCultures = 0x00000001,
    SpecificCultures = 0x00000002,
    InstalledWin32Cultures = 0x00000004,
    AllCultures = 0x00000007,
    UserCustomCulture = 0x00000008,
    ReplacementCultures = 0x00000010,
    WindowsOnlyCultures = 0x00000020,
    FrameworkCultures = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_CultureTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_CultureTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CultureTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CultureTypes__Enum_FWDDECL)
#include <Modloader/app/structs/CultureTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
