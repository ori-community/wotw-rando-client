#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableLevelProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableLevelProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableLevelProperties_DEFINED)
#include <Modloader/app/structs/UpgradableLevelProperties__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradableLevelProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradableLevelProperties_DEFINED
struct UpgradableLevelProperties__Class;
struct UpgradableLevelProperties {
    struct UpgradableLevelProperties__Class* klass;
    MonitorData* monitor;
    struct UpgradableLevelProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradableLevelProperties_FWDDECL)
#define IL2CPP_STRUCT_UpgradableLevelProperties_FWDDECL
#include <Modloader/app/structs/UpgradableLevelProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradableLevelProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableLevelProperties_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableLevelProperties_FWDDECL)
#include <Modloader/app/structs/UpgradableLevelProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableLevelProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
