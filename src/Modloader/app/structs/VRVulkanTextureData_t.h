#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRVulkanTextureData_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRVulkanTextureData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRVulkanTextureData_t_DEFINED)
#define IL2CPP_STRUCT_VRVulkanTextureData_t_DEFINED
struct VRVulkanTextureData_t {
    uint64_t m_nImage;
    void* m_pDevice;
    void* m_pPhysicalDevice;
    void* m_pInstance;
    void* m_pQueue;
    uint32_t m_nQueueFamilyIndex;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nFormat;
    uint32_t m_nSampleCount;
};
#endif
#if !defined(IL2CPP_STRUCT_VRVulkanTextureData_t_FWDDECL)
#define IL2CPP_STRUCT_VRVulkanTextureData_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VRVulkanTextureData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRVulkanTextureData_t_DEFINED) && !defined(IL2CPP_STRUCT_VRVulkanTextureData_t_FWDDECL)
#include <Modloader/app/structs/VRVulkanTextureData_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRVulkanTextureData_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
