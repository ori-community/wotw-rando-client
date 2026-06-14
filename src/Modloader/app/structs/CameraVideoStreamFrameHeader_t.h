#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_DEFINED)
#include <Modloader/app/structs/EVRTrackedCameraFrameType__Enum.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#if defined(IL2CPP_STRUCT_EVRTrackedCameraFrameType__Enum_DEFINED) && defined(IL2CPP_STRUCT_TrackedDevicePose_t_DEFINED)
#define IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_DEFINED
struct CameraVideoStreamFrameHeader_t {
    EVRTrackedCameraFrameType__Enum eFrameType;

    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    struct TrackedDevicePose_t standingTrackedDevicePose;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_FWDDECL)
#define IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_DEFINED) && !defined(IL2CPP_STRUCT_CameraVideoStreamFrameHeader_t_FWDDECL)
#include <Modloader/app/structs/CameraVideoStreamFrameHeader_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraVideoStreamFrameHeader_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
