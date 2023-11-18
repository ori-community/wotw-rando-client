#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationModuleElementCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationModuleElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationModuleElementCollection_DEFINED)
#define IL2CPP_STRUCT_AuthenticationModuleElementCollection_DEFINED
struct AuthenticationModuleElementCollection__Class;
struct AuthenticationModuleElementCollection {
    struct AuthenticationModuleElementCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationModuleElementCollection_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationModuleElementCollection_FWDDECL
#include <Modloader/app/structs/AuthenticationModuleElementCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationModuleElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationModuleElementCollection_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationModuleElementCollection_FWDDECL)
#include <Modloader/app/structs/AuthenticationModuleElementCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationModuleElementCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
