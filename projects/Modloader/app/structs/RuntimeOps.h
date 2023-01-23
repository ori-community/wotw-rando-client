#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeOps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeOps_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeOps_DEFINED)
#define IL2CPP_STRUCT_RuntimeOps_DEFINED
struct RuntimeOps__Class;
struct RuntimeOps {
    struct RuntimeOps__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeOps_FWDDECL)
#define IL2CPP_STRUCT_RuntimeOps_FWDDECL
#include <Modloader/app/structs/RuntimeOps__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeOps_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeOps_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeOps_FWDDECL)
#include <Modloader/app/structs/RuntimeOps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeOps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
