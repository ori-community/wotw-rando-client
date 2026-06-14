#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SampleComparer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SampleComparer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleComparer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SampleComparer__StaticFields_DEFINED
struct Single__Array;
struct ComputeBuffer;
struct ComputeShader;
struct SampleComparer__StaticFields {
    int32_t s_kernel;
    struct Single__Array* s_diffLuminances;
    struct ComputeBuffer* s_argBuffer;
    struct ComputeBuffer* s_computeBuffer;
    struct ComputeShader* s_imageCompareShader;
    bool s_shouldUpdateBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_SampleComparer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SampleComparer__StaticFields_FWDDECL
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_SampleComparer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleComparer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SampleComparer__StaticFields_FWDDECL)
#include <Modloader/app/structs/SampleComparer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SampleComparer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
