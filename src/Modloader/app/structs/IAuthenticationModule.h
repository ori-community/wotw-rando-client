#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAuthenticationModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAuthenticationModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAuthenticationModule_DEFINED)
#define IL2CPP_STRUCT_IAuthenticationModule_DEFINED
struct IAuthenticationModule__Class;
struct IAuthenticationModule {
    struct IAuthenticationModule__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAuthenticationModule_FWDDECL)
#define IL2CPP_STRUCT_IAuthenticationModule_FWDDECL
#include <Modloader/app/structs/IAuthenticationModule__Class.h>
#endif
#undef IL2CPP_STRUCT_IAuthenticationModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAuthenticationModule_DEFINED) && !defined(IL2CPP_STRUCT_IAuthenticationModule_FWDDECL)
#include <Modloader/app/structs/IAuthenticationModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAuthenticationModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
