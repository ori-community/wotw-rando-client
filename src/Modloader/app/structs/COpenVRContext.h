#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_COpenVRContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_COpenVRContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_COpenVRContext_DEFINED)
#define IL2CPP_STRUCT_COpenVRContext_DEFINED
struct COpenVRContext {
    void* m_pVRSystem;
    void* m_pVRChaperone;
    void* m_pVRChaperoneSetup;
    void* m_pVRCompositor;
    void* m_pVROverlay;
    void* m_pVRResources;
    void* m_pVRRenderModels;
    void* m_pVRExtendedDisplay;
    void* m_pVRSettings;
    void* m_pVRApplications;
    void* m_pVRTrackedCamera;
    void* m_pVRScreenshots;
    void* m_pVRDriverManager;
};
#endif
#if !defined(IL2CPP_STRUCT_COpenVRContext_FWDDECL)
#define IL2CPP_STRUCT_COpenVRContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_COpenVRContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_COpenVRContext_DEFINED) && !defined(IL2CPP_STRUCT_COpenVRContext_FWDDECL)
#include <Modloader/app/structs/COpenVRContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/COpenVRContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
