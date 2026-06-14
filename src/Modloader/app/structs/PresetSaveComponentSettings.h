#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PresetSaveComponentSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PresetSaveComponentSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PresetSaveComponentSettings_DEFINED)
#include <Modloader/app/structs/PresetSaveComponentSettings__Fields.h>
#if defined(IL2CPP_STRUCT_PresetSaveComponentSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_PresetSaveComponentSettings_DEFINED
struct PresetSaveComponentSettings__Class;
struct PresetSaveComponentSettings {
    struct PresetSaveComponentSettings__Class* klass;
    MonitorData* monitor;
    struct PresetSaveComponentSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PresetSaveComponentSettings_FWDDECL)
#define IL2CPP_STRUCT_PresetSaveComponentSettings_FWDDECL
#include <Modloader/app/structs/PresetSaveComponentSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_PresetSaveComponentSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_PresetSaveComponentSettings_DEFINED) && !defined(IL2CPP_STRUCT_PresetSaveComponentSettings_FWDDECL)
#include <Modloader/app/structs/PresetSaveComponentSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PresetSaveComponentSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
