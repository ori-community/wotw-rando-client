#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensDistortionBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensDistortionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensDistortionBlur_DEFINED)
#include <Modloader/app/structs/LensDistortionBlur__Fields.h>
#if defined(IL2CPP_STRUCT_LensDistortionBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_LensDistortionBlur_DEFINED
struct LensDistortionBlur__Class;
struct LensDistortionBlur {
    struct LensDistortionBlur__Class* klass;
    MonitorData* monitor;
    struct LensDistortionBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LensDistortionBlur_FWDDECL)
#define IL2CPP_STRUCT_LensDistortionBlur_FWDDECL
#include <Modloader/app/structs/LensDistortionBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_LensDistortionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensDistortionBlur_DEFINED) && !defined(IL2CPP_STRUCT_LensDistortionBlur_FWDDECL)
#include <Modloader/app/structs/LensDistortionBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensDistortionBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
