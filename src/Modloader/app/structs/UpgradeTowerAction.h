#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradeTowerAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradeTowerAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradeTowerAction_DEFINED)
#include <Modloader/app/structs/UpgradeTowerAction__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradeTowerAction__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradeTowerAction_DEFINED
struct UpgradeTowerAction__Class;
struct UpgradeTowerAction {
    struct UpgradeTowerAction__Class* klass;
    MonitorData* monitor;
    struct UpgradeTowerAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradeTowerAction_FWDDECL)
#define IL2CPP_STRUCT_UpgradeTowerAction_FWDDECL
#include <Modloader/app/structs/UpgradeTowerAction__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradeTowerAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradeTowerAction_DEFINED) && !defined(IL2CPP_STRUCT_UpgradeTowerAction_FWDDECL)
#include <Modloader/app/structs/UpgradeTowerAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradeTowerAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
