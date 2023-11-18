#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRTextureWithPose_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRTextureWithPose_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRTextureWithPose_t_DEFINED)
#include <Modloader/app/structs/HmdMatrix34_t.h>
#if defined(IL2CPP_STRUCT_HmdMatrix34_t_DEFINED)
#define IL2CPP_STRUCT_VRTextureWithPose_t_DEFINED
struct VRTextureWithPose_t {
    struct HmdMatrix34_t mDeviceToAbsoluteTracking;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRTextureWithPose_t_FWDDECL)
#define IL2CPP_STRUCT_VRTextureWithPose_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VRTextureWithPose_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRTextureWithPose_t_DEFINED) && !defined(IL2CPP_STRUCT_VRTextureWithPose_t_FWDDECL)
#include <Modloader/app/structs/VRTextureWithPose_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRTextureWithPose_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
