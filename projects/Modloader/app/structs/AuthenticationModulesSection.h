#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationModulesSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationModulesSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationModulesSection_DEFINED)
#define IL2CPP_STRUCT_AuthenticationModulesSection_DEFINED
struct AuthenticationModulesSection__Class;
struct AuthenticationModulesSection {
    struct AuthenticationModulesSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationModulesSection_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationModulesSection_FWDDECL
#include <Modloader/app/structs/AuthenticationModulesSection__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationModulesSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationModulesSection_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationModulesSection_FWDDECL)
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
