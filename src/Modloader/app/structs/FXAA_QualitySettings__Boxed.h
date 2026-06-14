#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_DEFINED)
#include <Modloader/app/structs/FXAA_QualitySettings.h>
#if defined(IL2CPP_STRUCT_FXAA_QualitySettings_DEFINED)
#define IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_DEFINED
struct FXAA_QualitySettings__Class;
struct FXAA_QualitySettings__Boxed {
    struct FXAA_QualitySettings__Class* klass;
    MonitorData* monitor;
    struct FXAA_QualitySettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_FWDDECL
#include <Modloader/app/structs/FXAA_QualitySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_QualitySettings__Boxed_FWDDECL)
#include <Modloader/app/structs/FXAA_QualitySettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_QualitySettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
