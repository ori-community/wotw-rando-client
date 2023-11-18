#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallSiteOps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallSiteOps_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSiteOps_DEFINED)
#define IL2CPP_STRUCT_CallSiteOps_DEFINED
struct CallSiteOps__Class;
struct CallSiteOps {
    struct CallSiteOps__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CallSiteOps_FWDDECL)
#define IL2CPP_STRUCT_CallSiteOps_FWDDECL
#include <Modloader/app/structs/CallSiteOps__Class.h>
#endif
#undef IL2CPP_STRUCT_CallSiteOps_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSiteOps_DEFINED) && !defined(IL2CPP_STRUCT_CallSiteOps_FWDDECL)
#include <Modloader/app/structs/CallSiteOps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallSiteOps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
