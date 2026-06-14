#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradablePropertyLevel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradablePropertyLevel_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradablePropertyLevel_DEFINED)
#include <Modloader/app/structs/UpgradablePropertyLevel__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradablePropertyLevel_DEFINED
struct UpgradablePropertyLevel__Class;
struct UpgradablePropertyLevel {
    struct UpgradablePropertyLevel__Class* klass;
    MonitorData* monitor;
    struct UpgradablePropertyLevel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradablePropertyLevel_FWDDECL)
#define IL2CPP_STRUCT_UpgradablePropertyLevel_FWDDECL
#include <Modloader/app/structs/UpgradablePropertyLevel__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradablePropertyLevel_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradablePropertyLevel_DEFINED) && !defined(IL2CPP_STRUCT_UpgradablePropertyLevel_FWDDECL)
#include <Modloader/app/structs/UpgradablePropertyLevel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradablePropertyLevel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
