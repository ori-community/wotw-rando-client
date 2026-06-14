#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashableSwitchSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashableSwitchSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitchSetupData_DEFINED)
#include <Modloader/app/structs/DashableSwitchSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_DashableSwitchSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_DashableSwitchSetupData_DEFINED
struct DashableSwitchSetupData__Class;
struct DashableSwitchSetupData {
    struct DashableSwitchSetupData__Class* klass;
    MonitorData* monitor;
    struct DashableSwitchSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashableSwitchSetupData_FWDDECL)
#define IL2CPP_STRUCT_DashableSwitchSetupData_FWDDECL
#include <Modloader/app/structs/DashableSwitchSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_DashableSwitchSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitchSetupData_DEFINED) && !defined(IL2CPP_STRUCT_DashableSwitchSetupData_FWDDECL)
#include <Modloader/app/structs/DashableSwitchSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashableSwitchSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
