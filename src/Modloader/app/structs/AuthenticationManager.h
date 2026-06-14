#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationManager_DEFINED)
#define IL2CPP_STRUCT_AuthenticationManager_DEFINED
struct AuthenticationManager__Class;
struct AuthenticationManager {
    struct AuthenticationManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationManager_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationManager_FWDDECL
#include <Modloader/app/structs/AuthenticationManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationManager_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationManager_FWDDECL)
#include <Modloader/app/structs/AuthenticationManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
