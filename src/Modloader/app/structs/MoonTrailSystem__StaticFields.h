#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonTrailSystem__StaticFields_DEFINED
struct MoonTrailSystem;
struct List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_;
struct Mesh__Array;
struct MoonTrailSystem__StaticFields {
    int32_t InitialComputeBufferCount;
    int32_t MaxCpuGpuGap;
    struct MoonTrailSystem* m_instance;
    struct List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_* m_computeBuffers;
    int32_t m_nextComputeBufferIndex;
    struct Mesh__Array* m_universalRenderMeshes;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_.h>
#include <Modloader/app/structs/Mesh__Array.h>
#include <Modloader/app/structs/MoonTrailSystem.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTrailSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
