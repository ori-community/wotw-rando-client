#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZoneScalingData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZoneScalingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneScalingData_DEFINED)
#include <Modloader/app/structs/ZoneScalingData__Fields.h>
#if defined(IL2CPP_STRUCT_ZoneScalingData__Fields_DEFINED)
#define IL2CPP_STRUCT_ZoneScalingData_DEFINED
struct ZoneScalingData__Class;
struct ZoneScalingData {
    struct ZoneScalingData__Class* klass;
    MonitorData* monitor;
    struct ZoneScalingData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZoneScalingData_FWDDECL)
#define IL2CPP_STRUCT_ZoneScalingData_FWDDECL
#include <Modloader/app/structs/ZoneScalingData__Class.h>
#endif
#undef IL2CPP_STRUCT_ZoneScalingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneScalingData_DEFINED) && !defined(IL2CPP_STRUCT_ZoneScalingData_FWDDECL)
#include <Modloader/app/structs/ZoneScalingData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZoneScalingData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
