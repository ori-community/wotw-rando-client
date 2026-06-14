#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncGPUReadbackRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncGPUReadbackRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest_DEFINED)
#define IL2CPP_STRUCT_AsyncGPUReadbackRequest_DEFINED
struct AsyncGPUReadbackRequest {
    void* m_Ptr;
    int32_t m_Version;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest_FWDDECL)
#define IL2CPP_STRUCT_AsyncGPUReadbackRequest_FWDDECL
#endif
#undef IL2CPP_STRUCT_AsyncGPUReadbackRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest_DEFINED) && !defined(IL2CPP_STRUCT_AsyncGPUReadbackRequest_FWDDECL)
#include <Modloader/app/structs/AsyncGPUReadbackRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncGPUReadbackRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
