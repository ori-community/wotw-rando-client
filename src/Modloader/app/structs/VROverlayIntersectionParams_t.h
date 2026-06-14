#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VROverlayIntersectionParams_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VROverlayIntersectionParams_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionParams_t_DEFINED)
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/HmdVector3_t.h>
#if defined(IL2CPP_STRUCT_HmdVector3_t_DEFINED) && defined(IL2CPP_STRUCT_ETrackingUniverseOrigin__Enum_DEFINED)
#define IL2CPP_STRUCT_VROverlayIntersectionParams_t_DEFINED
struct VROverlayIntersectionParams_t {
    struct HmdVector3_t vSource;
    struct HmdVector3_t vDirection;
    ETrackingUniverseOrigin__Enum eOrigin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionParams_t_FWDDECL)
#define IL2CPP_STRUCT_VROverlayIntersectionParams_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VROverlayIntersectionParams_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionParams_t_DEFINED) && !defined(IL2CPP_STRUCT_VROverlayIntersectionParams_t_FWDDECL)
#include <Modloader/app/structs/VROverlayIntersectionParams_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VROverlayIntersectionParams_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
