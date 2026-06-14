#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_D3D12TextureData_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_D3D12TextureData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_D3D12TextureData_t_DEFINED)
#define IL2CPP_STRUCT_D3D12TextureData_t_DEFINED
struct D3D12TextureData_t {
    void* m_pResource;
    void* m_pCommandQueue;
    uint32_t m_nNodeMask;
};
#endif
#if !defined(IL2CPP_STRUCT_D3D12TextureData_t_FWDDECL)
#define IL2CPP_STRUCT_D3D12TextureData_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_D3D12TextureData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_D3D12TextureData_t_DEFINED) && !defined(IL2CPP_STRUCT_D3D12TextureData_t_FWDDECL)
#include <Modloader/app/structs/D3D12TextureData_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/D3D12TextureData_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
