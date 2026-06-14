#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetAsset_DEFINED)
#include <Modloader/app/structs/UberPresetAsset__Fields.h>
#if defined(IL2CPP_STRUCT_UberPresetAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetAsset_DEFINED
struct UberPresetAsset__Class;
struct UberPresetAsset {
    struct UberPresetAsset__Class* klass;
    MonitorData* monitor;
    struct UberPresetAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPresetAsset_FWDDECL)
#define IL2CPP_STRUCT_UberPresetAsset_FWDDECL
#include <Modloader/app/structs/UberPresetAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPresetAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetAsset_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetAsset_FWDDECL)
#include <Modloader/app/structs/UberPresetAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
