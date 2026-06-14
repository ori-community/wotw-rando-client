#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__PrivateImplementationDetails__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__PrivateImplementationDetails__INITIALIZING
#if !defined(IL2CPP_STRUCT__PrivateImplementationDetails__DEFINED)
#define IL2CPP_STRUCT__PrivateImplementationDetails__DEFINED
struct _PrivateImplementationDetails___Class;
struct _PrivateImplementationDetails_ {
    struct _PrivateImplementationDetails___Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__PrivateImplementationDetails__FWDDECL)
#define IL2CPP_STRUCT__PrivateImplementationDetails__FWDDECL
#include <Modloader/app/structs/_PrivateImplementationDetails___Class.h>
#endif
#undef IL2CPP_STRUCT__PrivateImplementationDetails__INITIALIZING
#if !defined(IL2CPP_STRUCT__PrivateImplementationDetails__DEFINED) && !defined(IL2CPP_STRUCT__PrivateImplementationDetails__FWDDECL)
#include <Modloader/app/structs/_PrivateImplementationDetails_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_PrivateImplementationDetails_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
