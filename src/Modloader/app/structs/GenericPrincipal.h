#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPrincipal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPrincipal_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPrincipal_DEFINED)
#include <Modloader/app/structs/GenericPrincipal__Fields.h>
#if defined(IL2CPP_STRUCT_GenericPrincipal__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPrincipal_DEFINED
struct GenericPrincipal__Class;
struct GenericPrincipal {
    struct GenericPrincipal__Class* klass;
    MonitorData* monitor;
    struct GenericPrincipal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPrincipal_FWDDECL)
#define IL2CPP_STRUCT_GenericPrincipal_FWDDECL
#include <Modloader/app/structs/GenericPrincipal__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericPrincipal_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPrincipal_DEFINED) && !defined(IL2CPP_STRUCT_GenericPrincipal_FWDDECL)
#include <Modloader/app/structs/GenericPrincipal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPrincipal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
