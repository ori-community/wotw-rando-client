#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackableSwitchSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackableSwitchSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackableSwitchSetupData_DEFINED)
#include <Modloader/app/structs/AttackableSwitchSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_AttackableSwitchSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_AttackableSwitchSetupData_DEFINED
struct AttackableSwitchSetupData__Class;
struct AttackableSwitchSetupData {
    struct AttackableSwitchSetupData__Class* klass;
    MonitorData* monitor;
    struct AttackableSwitchSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackableSwitchSetupData_FWDDECL)
#define IL2CPP_STRUCT_AttackableSwitchSetupData_FWDDECL
#include <Modloader/app/structs/AttackableSwitchSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_AttackableSwitchSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackableSwitchSetupData_DEFINED) && !defined(IL2CPP_STRUCT_AttackableSwitchSetupData_FWDDECL)
#include <Modloader/app/structs/AttackableSwitchSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackableSwitchSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
