#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WideScreenAdjustmentSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WideScreenAdjustmentSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_WideScreenAdjustmentSettings_DEFINED)
#include <Modloader/app/structs/WideScreenAdjustmentSettings__Fields.h>
#if defined(IL2CPP_STRUCT_WideScreenAdjustmentSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_WideScreenAdjustmentSettings_DEFINED
struct WideScreenAdjustmentSettings__Class;
struct WideScreenAdjustmentSettings {
    struct WideScreenAdjustmentSettings__Class* klass;
    MonitorData* monitor;
    struct WideScreenAdjustmentSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WideScreenAdjustmentSettings_FWDDECL)
#define IL2CPP_STRUCT_WideScreenAdjustmentSettings_FWDDECL
#include <Modloader/app/structs/WideScreenAdjustmentSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_WideScreenAdjustmentSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_WideScreenAdjustmentSettings_DEFINED) && !defined(IL2CPP_STRUCT_WideScreenAdjustmentSettings_FWDDECL)
#include <Modloader/app/structs/WideScreenAdjustmentSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WideScreenAdjustmentSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
