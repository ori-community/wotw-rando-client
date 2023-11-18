#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_DEFINED
struct CVRSystem;
struct CVRChaperone;
struct CVRChaperoneSetup;
struct CVRCompositor;
struct CVROverlay;
struct CVRRenderModels;
struct CVRExtendedDisplay;
struct CVRSettings;
struct CVRApplications;
struct CVRScreenshots;
struct CVRTrackedCamera;
struct __declspec(align(8)) OpenVR_COpenVRContext__Fields {
    struct CVRSystem* m_pVRSystem;
    struct CVRChaperone* m_pVRChaperone;
    struct CVRChaperoneSetup* m_pVRChaperoneSetup;
    struct CVRCompositor* m_pVRCompositor;
    struct CVROverlay* m_pVROverlay;
    struct CVRRenderModels* m_pVRRenderModels;
    struct CVRExtendedDisplay* m_pVRExtendedDisplay;
    struct CVRSettings* m_pVRSettings;
    struct CVRApplications* m_pVRApplications;
    struct CVRScreenshots* m_pVRScreenshots;
    struct CVRTrackedCamera* m_pVRTrackedCamera;
};
#endif
#if !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_FWDDECL
#include <Modloader/app/structs/CVRApplications.h>
#include <Modloader/app/structs/CVRChaperone.h>
#include <Modloader/app/structs/CVRChaperoneSetup.h>
#include <Modloader/app/structs/CVRCompositor.h>
#include <Modloader/app/structs/CVRExtendedDisplay.h>
#include <Modloader/app/structs/CVROverlay.h>
#include <Modloader/app/structs/CVRRenderModels.h>
#include <Modloader/app/structs/CVRScreenshots.h>
#include <Modloader/app/structs/CVRSettings.h>
#include <Modloader/app/structs/CVRSystem.h>
#include <Modloader/app/structs/CVRTrackedCamera.h>
#endif
#undef IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_FWDDECL)
#include <Modloader/app/structs/OpenVR_COpenVRContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenVR_COpenVRContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
