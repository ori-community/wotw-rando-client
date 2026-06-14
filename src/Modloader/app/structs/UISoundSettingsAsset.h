#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UISoundSettingsAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UISoundSettingsAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_UISoundSettingsAsset_DEFINED)
#include <Modloader/app/structs/UISoundSettingsAsset__Fields.h>
#if defined(IL2CPP_STRUCT_UISoundSettingsAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_UISoundSettingsAsset_DEFINED
struct UISoundSettingsAsset__Class;
struct UISoundSettingsAsset {
    struct UISoundSettingsAsset__Class* klass;
    MonitorData* monitor;
    struct UISoundSettingsAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UISoundSettingsAsset_FWDDECL)
#define IL2CPP_STRUCT_UISoundSettingsAsset_FWDDECL
#include <Modloader/app/structs/UISoundSettingsAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_UISoundSettingsAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_UISoundSettingsAsset_DEFINED) && !defined(IL2CPP_STRUCT_UISoundSettingsAsset_FWDDECL)
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
