#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_DEFINED)
#define IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_DEFINED
enum class XalPrivilegeCheckDenyReasons__Enum : int32_t {
    None = 0x00000000,
    PurchaseRequired = 0x00000001,
    Restricted = 0x00000002,
    Banned = 0x00000003,
    Unknown = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_FWDDECL)
#define IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_FWDDECL)
#include <Modloader/app/structs/XalPrivilegeCheckDenyReasons__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalPrivilegeCheckDenyReasons__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
