#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorCorrectionRamp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorCorrectionRamp_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionRamp_DEFINED)
#include <Modloader/app/structs/ColorCorrectionRamp__Fields.h>
#if defined(IL2CPP_STRUCT_ColorCorrectionRamp__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorCorrectionRamp_DEFINED
struct ColorCorrectionRamp__Class;
struct ColorCorrectionRamp {
    struct ColorCorrectionRamp__Class* klass;
    MonitorData* monitor;
    struct ColorCorrectionRamp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorCorrectionRamp_FWDDECL)
#define IL2CPP_STRUCT_ColorCorrectionRamp_FWDDECL
#include <Modloader/app/structs/ColorCorrectionRamp__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorCorrectionRamp_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionRamp_DEFINED) && !defined(IL2CPP_STRUCT_ColorCorrectionRamp_FWDDECL)
#include <Modloader/app/structs/ColorCorrectionRamp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorCorrectionRamp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
