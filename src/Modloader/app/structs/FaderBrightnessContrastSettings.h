#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderBrightnessContrastSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderBrightnessContrastSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBrightnessContrastSettings_DEFINED)
#include <Modloader/app/structs/FaderBrightnessContrastSettings__Fields.h>
#if defined(IL2CPP_STRUCT_FaderBrightnessContrastSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderBrightnessContrastSettings_DEFINED
struct FaderBrightnessContrastSettings__Class;
struct FaderBrightnessContrastSettings {
    struct FaderBrightnessContrastSettings__Class* klass;
    MonitorData* monitor;
    struct FaderBrightnessContrastSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderBrightnessContrastSettings_FWDDECL)
#define IL2CPP_STRUCT_FaderBrightnessContrastSettings_FWDDECL
#include <Modloader/app/structs/FaderBrightnessContrastSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderBrightnessContrastSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBrightnessContrastSettings_DEFINED) && !defined(IL2CPP_STRUCT_FaderBrightnessContrastSettings_FWDDECL)
#include <Modloader/app/structs/FaderBrightnessContrastSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderBrightnessContrastSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
