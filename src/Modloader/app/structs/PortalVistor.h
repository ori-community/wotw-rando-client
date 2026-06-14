#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PortalVistor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PortalVistor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PortalVistor_DEFINED)
#define IL2CPP_STRUCT_PortalVistor_DEFINED
struct PortalVistor__Class;
struct PortalVistor {
    struct PortalVistor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PortalVistor_FWDDECL)
#define IL2CPP_STRUCT_PortalVistor_FWDDECL
#include <Modloader/app/structs/PortalVistor__Class.h>
#endif
#undef IL2CPP_STRUCT_PortalVistor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PortalVistor_DEFINED) && !defined(IL2CPP_STRUCT_PortalVistor_FWDDECL)
#include <Modloader/app/structs/PortalVistor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PortalVistor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
