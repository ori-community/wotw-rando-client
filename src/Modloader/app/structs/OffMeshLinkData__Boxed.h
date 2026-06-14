#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffMeshLinkData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffMeshLinkData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffMeshLinkData__Boxed_DEFINED)
#include <Modloader/app/structs/OffMeshLinkData.h>
#if defined(IL2CPP_STRUCT_OffMeshLinkData_DEFINED)
#define IL2CPP_STRUCT_OffMeshLinkData__Boxed_DEFINED
struct OffMeshLinkData__Class;
struct OffMeshLinkData__Boxed {
    struct OffMeshLinkData__Class* klass;
    MonitorData* monitor;
    struct OffMeshLinkData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffMeshLinkData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_OffMeshLinkData__Boxed_FWDDECL
#include <Modloader/app/structs/OffMeshLinkData__Class.h>
#endif
#undef IL2CPP_STRUCT_OffMeshLinkData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffMeshLinkData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_OffMeshLinkData__Boxed_FWDDECL)
#include <Modloader/app/structs/OffMeshLinkData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffMeshLinkData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
