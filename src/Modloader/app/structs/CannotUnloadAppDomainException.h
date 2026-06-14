#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CannotUnloadAppDomainException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CannotUnloadAppDomainException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CannotUnloadAppDomainException_DEFINED)
#include <Modloader/app/structs/CannotUnloadAppDomainException__Fields.h>
#if defined(IL2CPP_STRUCT_CannotUnloadAppDomainException__Fields_DEFINED)
#define IL2CPP_STRUCT_CannotUnloadAppDomainException_DEFINED
struct CannotUnloadAppDomainException__Class;
struct CannotUnloadAppDomainException {
    struct CannotUnloadAppDomainException__Class* klass;
    MonitorData* monitor;
    struct CannotUnloadAppDomainException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CannotUnloadAppDomainException_FWDDECL)
#define IL2CPP_STRUCT_CannotUnloadAppDomainException_FWDDECL
#include <Modloader/app/structs/CannotUnloadAppDomainException__Class.h>
#endif
#undef IL2CPP_STRUCT_CannotUnloadAppDomainException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CannotUnloadAppDomainException_DEFINED) && !defined(IL2CPP_STRUCT_CannotUnloadAppDomainException_FWDDECL)
#include <Modloader/app/structs/CannotUnloadAppDomainException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CannotUnloadAppDomainException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
