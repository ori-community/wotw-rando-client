#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseUsageMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseUsageMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseUsageMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LicenseUsageMode__Enum_DEFINED
enum class LicenseUsageMode__Enum : int32_t {
    Runtime = 0x00000000,
    Designtime = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_LicenseUsageMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_LicenseUsageMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LicenseUsageMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseUsageMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LicenseUsageMode__Enum_FWDDECL)
#include <Modloader/app/structs/LicenseUsageMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseUsageMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
