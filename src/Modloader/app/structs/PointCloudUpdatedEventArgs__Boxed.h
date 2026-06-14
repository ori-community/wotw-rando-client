#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_DEFINED)
#include <Modloader/app/structs/PointCloudUpdatedEventArgs.h>
#if defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs_DEFINED)
#define IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_DEFINED
struct PointCloudUpdatedEventArgs__Class;
struct PointCloudUpdatedEventArgs__Boxed {
    struct PointCloudUpdatedEventArgs__Class* klass;
    MonitorData* monitor;
    struct PointCloudUpdatedEventArgs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_FWDDECL
#include <Modloader/app/structs/PointCloudUpdatedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs__Boxed_FWDDECL)
#include <Modloader/app/structs/PointCloudUpdatedEventArgs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointCloudUpdatedEventArgs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
