#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableAbility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableAbility_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableAbility_DEFINED)
#include <Modloader/app/structs/UpgradableAbility__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradableAbility__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradableAbility_DEFINED
struct UpgradableAbility__Class;
struct UpgradableAbility {
    struct UpgradableAbility__Class* klass;
    MonitorData* monitor;
    struct UpgradableAbility__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradableAbility_FWDDECL)
#define IL2CPP_STRUCT_UpgradableAbility_FWDDECL
#include <Modloader/app/structs/UpgradableAbility__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradableAbility_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableAbility_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableAbility_FWDDECL)
#include <Modloader/app/structs/UpgradableAbility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableAbility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
