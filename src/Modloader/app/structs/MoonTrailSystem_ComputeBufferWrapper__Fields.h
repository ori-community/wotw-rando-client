#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_DEFINED
struct ComputeBuffer;
struct __declspec(align(8)) MoonTrailSystem_ComputeBufferWrapper__Fields {
    struct ComputeBuffer* ComputeBuffer;
    int32_t LastUsedFrameIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_FWDDECL
#include <Modloader/app/structs/ComputeBuffer.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailSystem_ComputeBufferWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
