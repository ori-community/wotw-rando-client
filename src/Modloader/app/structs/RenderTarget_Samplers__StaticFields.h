#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_DEFINED)
#include <Modloader/app/structs/SrpSampler.h>
#if defined(IL2CPP_STRUCT_SrpSampler_DEFINED)
#define IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_DEFINED
struct RenderTarget_Samplers__StaticFields {
    struct SrpSampler acquire;
    struct SrpSampler acquireInternal;
    struct SrpSampler release;
    struct SrpSampler releaseInternal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RenderTarget_Samplers__StaticFields_FWDDECL)
#include <Modloader/app/structs/RenderTarget_Samplers__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTarget_Samplers__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
