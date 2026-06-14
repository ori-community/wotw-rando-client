#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRChaperone_ReloadInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRChaperone_ReloadInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRChaperone_ReloadInfo_DEFINED)
#include <Modloader/app/structs/IVRChaperone_ReloadInfo__Fields.h>
#if defined(IL2CPP_STRUCT_IVRChaperone_ReloadInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRChaperone_ReloadInfo_DEFINED
struct IVRChaperone_ReloadInfo__Class;
struct IVRChaperone_ReloadInfo {
    struct IVRChaperone_ReloadInfo__Class* klass;
    MonitorData* monitor;
    struct IVRChaperone_ReloadInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRChaperone_ReloadInfo_FWDDECL)
#define IL2CPP_STRUCT_IVRChaperone_ReloadInfo_FWDDECL
#include <Modloader/app/structs/IVRChaperone_ReloadInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRChaperone_ReloadInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRChaperone_ReloadInfo_DEFINED) && !defined(IL2CPP_STRUCT_IVRChaperone_ReloadInfo_FWDDECL)
#include <Modloader/app/structs/IVRChaperone_ReloadInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRChaperone_ReloadInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
