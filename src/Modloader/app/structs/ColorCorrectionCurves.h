#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorCorrectionCurves_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorCorrectionCurves_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionCurves_DEFINED)
#include <Modloader/app/structs/ColorCorrectionCurves__Fields.h>
#if defined(IL2CPP_STRUCT_ColorCorrectionCurves__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorCorrectionCurves_DEFINED
struct ColorCorrectionCurves__Class;
struct ColorCorrectionCurves {
    struct ColorCorrectionCurves__Class* klass;
    MonitorData* monitor;
    struct ColorCorrectionCurves__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorCorrectionCurves_FWDDECL)
#define IL2CPP_STRUCT_ColorCorrectionCurves_FWDDECL
#include <Modloader/app/structs/ColorCorrectionCurves__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorCorrectionCurves_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionCurves_DEFINED) && !defined(IL2CPP_STRUCT_ColorCorrectionCurves_FWDDECL)
#include <Modloader/app/structs/ColorCorrectionCurves.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorCorrectionCurves.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
