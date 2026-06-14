#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallContextSecurityData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallContextSecurityData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContextSecurityData__Fields_DEFINED)
#define IL2CPP_STRUCT_CallContextSecurityData__Fields_DEFINED
struct IPrincipal;
struct __declspec(align(8)) CallContextSecurityData__Fields {
    struct IPrincipal* _principal;
};
#endif
#if !defined(IL2CPP_STRUCT_CallContextSecurityData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CallContextSecurityData__Fields_FWDDECL
#include <Modloader/app/structs/IPrincipal.h>
#endif
#undef IL2CPP_STRUCT_CallContextSecurityData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContextSecurityData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CallContextSecurityData__Fields_FWDDECL)
#include <Modloader/app/structs/CallContextSecurityData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallContextSecurityData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
