#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorCorrectionLookup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorCorrectionLookup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionLookup_DEFINED)
#include <Modloader/app/structs/ColorCorrectionLookup__Fields.h>
#if defined(IL2CPP_STRUCT_ColorCorrectionLookup__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorCorrectionLookup_DEFINED
struct ColorCorrectionLookup__Class;
struct ColorCorrectionLookup {
    struct ColorCorrectionLookup__Class* klass;
    MonitorData* monitor;
    struct ColorCorrectionLookup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorCorrectionLookup_FWDDECL)
#define IL2CPP_STRUCT_ColorCorrectionLookup_FWDDECL
#include <Modloader/app/structs/ColorCorrectionLookup__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorCorrectionLookup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorCorrectionLookup_DEFINED) && !defined(IL2CPP_STRUCT_ColorCorrectionLookup_FWDDECL)
#include <Modloader/app/structs/ColorCorrectionLookup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorCorrectionLookup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
