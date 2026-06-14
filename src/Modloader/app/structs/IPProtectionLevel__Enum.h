#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPProtectionLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPProtectionLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPProtectionLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_IPProtectionLevel__Enum_DEFINED
enum class IPProtectionLevel__Enum : int32_t {
    Unspecified = -1,
    Unrestricted = 0x0000000a,
    EdgeRestricted = 0x00000014,
    Restricted = 0x0000001e,
};
#endif
#if !defined(IL2CPP_STRUCT_IPProtectionLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_IPProtectionLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPProtectionLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPProtectionLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_IPProtectionLevel__Enum_FWDDECL)
#include <Modloader/app/structs/IPProtectionLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPProtectionLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
