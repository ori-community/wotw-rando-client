#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_DEFINED
struct CustomSampler;
struct Recorder;
struct MoonRenderContext_Samplers__StaticFields {
    struct CustomSampler* flush;
    struct CustomSampler* submit;
    struct CustomSampler* cull;
    struct Recorder* cullRecorder;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_FWDDECL
#include <Modloader/app/structs/CustomSampler.h>
#include <Modloader/app/structs/Recorder.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderContext_Samplers__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonRenderContext_Samplers__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderContext_Samplers__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
