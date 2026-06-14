#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationModuleElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationModuleElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationModuleElement_DEFINED)
#define IL2CPP_STRUCT_AuthenticationModuleElement_DEFINED
struct AuthenticationModuleElement__Class;
struct AuthenticationModuleElement {
    struct AuthenticationModuleElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationModuleElement_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationModuleElement_FWDDECL
#include <Modloader/app/structs/AuthenticationModuleElement__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationModuleElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationModuleElement_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationModuleElement_FWDDECL)
#include <Modloader/app/structs/AuthenticationModuleElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationModuleElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
