#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableMultiplier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableMultiplier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableMultiplier_DEFINED)
#include <Modloader/app/structs/UpgradableMultiplier__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradableMultiplier__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradableMultiplier_DEFINED
struct UpgradableMultiplier__Class;
struct UpgradableMultiplier {
    struct UpgradableMultiplier__Class* klass;
    MonitorData* monitor;
    struct UpgradableMultiplier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradableMultiplier_FWDDECL)
#define IL2CPP_STRUCT_UpgradableMultiplier_FWDDECL
#include <Modloader/app/structs/UpgradableMultiplier__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradableMultiplier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableMultiplier_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableMultiplier_FWDDECL)
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableMultiplier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
