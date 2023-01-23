#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableProperty_DEFINED)
#include <Modloader/app/structs/UpgradableProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UpgradableProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradableProperty_DEFINED
struct UpgradableProperty__Class;
struct UpgradableProperty {
    struct UpgradableProperty__Class* klass;
    MonitorData* monitor;
    struct UpgradableProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradableProperty_FWDDECL)
#define IL2CPP_STRUCT_UpgradableProperty_FWDDECL
#include <Modloader/app/structs/UpgradableProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_UpgradableProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableProperty_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableProperty_FWDDECL)
#include <Modloader/app/structs/UpgradableProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
