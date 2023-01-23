#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_DEFINED
struct RenderTexture;
struct Plane__Array;
struct SampleUberShaderTask__StaticFields {
    int32_t m_resIndex;
    struct RenderTexture* s_rt;
    struct Plane__Array* s_frustumPlanes;
};
#endif
#if !defined(IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_FWDDECL
#include <Modloader/app/structs/Plane__Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SampleUberShaderTask__StaticFields_FWDDECL)
#include <Modloader/app/structs/SampleUberShaderTask__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SampleUberShaderTask__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
