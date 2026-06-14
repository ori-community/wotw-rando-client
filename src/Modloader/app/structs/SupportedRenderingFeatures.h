#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SupportedRenderingFeatures_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SupportedRenderingFeatures_INITIALIZING
#if !defined(IL2CPP_STRUCT_SupportedRenderingFeatures_DEFINED)
#include <Modloader/app/structs/SupportedRenderingFeatures__Fields.h>
#if defined(IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_DEFINED)
#define IL2CPP_STRUCT_SupportedRenderingFeatures_DEFINED
struct SupportedRenderingFeatures__Class;
struct SupportedRenderingFeatures {
    struct SupportedRenderingFeatures__Class* klass;
    MonitorData* monitor;
    struct SupportedRenderingFeatures__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SupportedRenderingFeatures_FWDDECL)
#define IL2CPP_STRUCT_SupportedRenderingFeatures_FWDDECL
#include <Modloader/app/structs/SupportedRenderingFeatures__Class.h>
#endif
#undef IL2CPP_STRUCT_SupportedRenderingFeatures_INITIALIZING
#if !defined(IL2CPP_STRUCT_SupportedRenderingFeatures_DEFINED) && !defined(IL2CPP_STRUCT_SupportedRenderingFeatures_FWDDECL)
#include <Modloader/app/structs/SupportedRenderingFeatures.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SupportedRenderingFeatures.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
