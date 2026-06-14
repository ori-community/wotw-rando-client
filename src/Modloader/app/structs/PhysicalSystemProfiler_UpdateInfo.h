#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_DEFINED)
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_DEFINED
struct PhysicalSystemProfiler_UpdateInfo__Class;
struct PhysicalSystemProfiler_UpdateInfo {
    struct PhysicalSystemProfiler_UpdateInfo__Class* klass;
    MonitorData* monitor;
    struct PhysicalSystemProfiler_UpdateInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_FWDDECL
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemProfiler_UpdateInfo_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemProfiler_UpdateInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
