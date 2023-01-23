#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_DEFINED)
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_DEFINED
struct DownsamplingThresholdProfilingSetting__Class;
struct DownsamplingThresholdProfilingSetting {
    struct DownsamplingThresholdProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct DownsamplingThresholdProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_FWDDECL
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_DownsamplingThresholdProfilingSetting_FWDDECL)
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
