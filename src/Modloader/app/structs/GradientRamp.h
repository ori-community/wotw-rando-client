#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GradientRamp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GradientRamp_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientRamp_DEFINED)
#include <Modloader/app/structs/GradientRamp__Fields.h>
#if defined(IL2CPP_STRUCT_GradientRamp__Fields_DEFINED)
#define IL2CPP_STRUCT_GradientRamp_DEFINED
struct GradientRamp__Class;
struct GradientRamp {
    struct GradientRamp__Class* klass;
    MonitorData* monitor;
    struct GradientRamp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GradientRamp_FWDDECL)
#define IL2CPP_STRUCT_GradientRamp_FWDDECL
#include <Modloader/app/structs/GradientRamp__Class.h>
#endif
#undef IL2CPP_STRUCT_GradientRamp_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientRamp_DEFINED) && !defined(IL2CPP_STRUCT_GradientRamp_FWDDECL)
#include <Modloader/app/structs/GradientRamp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GradientRamp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
