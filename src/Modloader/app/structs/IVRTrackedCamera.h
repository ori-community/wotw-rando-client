#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRTrackedCamera_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRTrackedCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRTrackedCamera_DEFINED)
#define IL2CPP_STRUCT_IVRTrackedCamera_DEFINED
struct IVRTrackedCamera_GetCameraErrorNameFromEnum;
struct IVRTrackedCamera_HasCamera;
struct IVRTrackedCamera_GetCameraFrameSize;
struct IVRTrackedCamera_GetCameraIntrinsics;
struct IVRTrackedCamera_GetCameraProjection;
struct IVRTrackedCamera_AcquireVideoStreamingService;
struct IVRTrackedCamera_ReleaseVideoStreamingService;
struct IVRTrackedCamera_GetVideoStreamFrameBuffer;
struct IVRTrackedCamera_GetVideoStreamTextureSize;
struct IVRTrackedCamera_GetVideoStreamTextureD3D11;
struct IVRTrackedCamera_GetVideoStreamTextureGL;
struct IVRTrackedCamera_ReleaseVideoStreamTextureGL;
struct IVRTrackedCamera {
    struct IVRTrackedCamera_GetCameraErrorNameFromEnum* GetCameraErrorNameFromEnum;
    struct IVRTrackedCamera_HasCamera* HasCamera;
    struct IVRTrackedCamera_GetCameraFrameSize* GetCameraFrameSize;
    struct IVRTrackedCamera_GetCameraIntrinsics* GetCameraIntrinsics;
    struct IVRTrackedCamera_GetCameraProjection* GetCameraProjection;
    struct IVRTrackedCamera_AcquireVideoStreamingService* AcquireVideoStreamingService;
    struct IVRTrackedCamera_ReleaseVideoStreamingService* ReleaseVideoStreamingService;
    struct IVRTrackedCamera_GetVideoStreamFrameBuffer* GetVideoStreamFrameBuffer;
    struct IVRTrackedCamera_GetVideoStreamTextureSize* GetVideoStreamTextureSize;
    struct IVRTrackedCamera_GetVideoStreamTextureD3D11* GetVideoStreamTextureD3D11;
    struct IVRTrackedCamera_GetVideoStreamTextureGL* GetVideoStreamTextureGL;
    struct IVRTrackedCamera_ReleaseVideoStreamTextureGL* ReleaseVideoStreamTextureGL;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRTrackedCamera_FWDDECL)
#define IL2CPP_STRUCT_IVRTrackedCamera_FWDDECL
#include <Modloader/app/structs/IVRTrackedCamera_AcquireVideoStreamingService.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraFrameSize.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraIntrinsics.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraProjection.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamFrameBuffer.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureD3D11.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureGL.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureSize.h>
#include <Modloader/app/structs/IVRTrackedCamera_HasCamera.h>
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamTextureGL.h>
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamingService.h>
#endif
#undef IL2CPP_STRUCT_IVRTrackedCamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRTrackedCamera_DEFINED) && !defined(IL2CPP_STRUCT_IVRTrackedCamera_FWDDECL)
#include <Modloader/app/structs/IVRTrackedCamera.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRTrackedCamera.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
