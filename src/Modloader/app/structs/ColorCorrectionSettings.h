#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorCorrectionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorCorrectionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionSettings_DEFINED)
#include <Modloader/app/structs/ColorCorrectionSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ColorCorrectionSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorCorrectionSettings_DEFINED
struct ColorCorrectionSettings__Class;
struct ColorCorrectionSettings {
    struct ColorCorrectionSettings__Class* klass;
    MonitorData* monitor;
    struct ColorCorrectionSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorCorrectionSettings_FWDDECL)
#define IL2CPP_STRUCT_ColorCorrectionSettings_FWDDECL
#include <Modloader/app/structs/ColorCorrectionSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorCorrectionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionSettings_DEFINED) && !defined(IL2CPP_STRUCT_ColorCorrectionSettings_FWDDECL)
#include <Modloader/app/structs/ColorCorrectionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorCorrectionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
