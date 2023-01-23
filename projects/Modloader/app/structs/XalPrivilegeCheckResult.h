#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalPrivilegeCheckResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalPrivilegeCheckResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalPrivilegeCheckResult_DEFINED)
#include <Modloader/app/structs/XalPrivilegeCheckDenyReasons__Enum.h>
#include <Modloader/app/structs/XalPrivilege__Enum.h>
#if defined(IL2CPP_STRUCT_XalPrivilege__Enum_DEFINED) && defined(IL2CPP_STRUCT_XalPrivilegeCheckDenyReasons__Enum_DEFINED)
#define IL2CPP_STRUCT_XalPrivilegeCheckResult_DEFINED
struct XalPrivilegeCheckResult {
    XalPrivilege__Enum Privilege;

    bool HasPrivilege;
    XalPrivilegeCheckDenyReasons__Enum DenyReasons;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalPrivilegeCheckResult_FWDDECL)
#define IL2CPP_STRUCT_XalPrivilegeCheckResult_FWDDECL
#endif
#undef IL2CPP_STRUCT_XalPrivilegeCheckResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalPrivilegeCheckResult_DEFINED) && !defined(IL2CPP_STRUCT_XalPrivilegeCheckResult_FWDDECL)
#include <Modloader/app/structs/XalPrivilegeCheckResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalPrivilegeCheckResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
