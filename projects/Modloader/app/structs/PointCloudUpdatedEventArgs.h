#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointCloudUpdatedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointCloudUpdatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs_DEFINED)
#define IL2CPP_STRUCT_PointCloudUpdatedEventArgs_DEFINED
struct XRDepthSubsystem;
struct PointCloudUpdatedEventArgs {
    struct XRDepthSubsystem* m_DepthSubsystem;
};
#endif
#if !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_PointCloudUpdatedEventArgs_FWDDECL
#include <Modloader/app/structs/XRDepthSubsystem.h>
#endif
#undef IL2CPP_STRUCT_PointCloudUpdatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_PointCloudUpdatedEventArgs_FWDDECL)
#include <Modloader/app/structs/PointCloudUpdatedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointCloudUpdatedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
