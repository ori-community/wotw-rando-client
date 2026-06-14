#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PortalB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PortalB_INITIALIZING
#if !defined(IL2CPP_STRUCT_PortalB_DEFINED)
#include <Modloader/app/structs/PortalB__Fields.h>
#if defined(IL2CPP_STRUCT_PortalB__Fields_DEFINED)
#define IL2CPP_STRUCT_PortalB_DEFINED
struct PortalB__Class;
struct PortalB {
    struct PortalB__Class* klass;
    MonitorData* monitor;
    struct PortalB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PortalB_FWDDECL)
#define IL2CPP_STRUCT_PortalB_FWDDECL
#include <Modloader/app/structs/PortalB__Class.h>
#endif
#undef IL2CPP_STRUCT_PortalB_INITIALIZING
#if !defined(IL2CPP_STRUCT_PortalB_DEFINED) && !defined(IL2CPP_STRUCT_PortalB_FWDDECL)
#include <Modloader/app/structs/PortalB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PortalB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
