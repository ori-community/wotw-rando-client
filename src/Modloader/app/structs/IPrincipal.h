#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPrincipal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPrincipal_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrincipal_DEFINED)
#define IL2CPP_STRUCT_IPrincipal_DEFINED
struct IPrincipal__Class;
struct IPrincipal {
    struct IPrincipal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPrincipal_FWDDECL)
#define IL2CPP_STRUCT_IPrincipal_FWDDECL
#include <Modloader/app/structs/IPrincipal__Class.h>
#endif
#undef IL2CPP_STRUCT_IPrincipal_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPrincipal_DEFINED) && !defined(IL2CPP_STRUCT_IPrincipal_FWDDECL)
#include <Modloader/app/structs/IPrincipal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPrincipal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
