#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VROverlayIntersectionResults_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VROverlayIntersectionResults_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionResults_t_DEFINED)
#include <Modloader/app/structs/HmdVector2_t.h>
#include <Modloader/app/structs/HmdVector3_t.h>
#if defined(IL2CPP_STRUCT_HmdVector3_t_DEFINED) && defined(IL2CPP_STRUCT_HmdVector2_t_DEFINED)
#define IL2CPP_STRUCT_VROverlayIntersectionResults_t_DEFINED
struct VROverlayIntersectionResults_t {
    struct HmdVector3_t vPoint;
    struct HmdVector3_t vNormal;
    struct HmdVector2_t vUVs;
    float fDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionResults_t_FWDDECL)
#define IL2CPP_STRUCT_VROverlayIntersectionResults_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VROverlayIntersectionResults_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionResults_t_DEFINED) && !defined(IL2CPP_STRUCT_VROverlayIntersectionResults_t_FWDDECL)
#include <Modloader/app/structs/VROverlayIntersectionResults_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VROverlayIntersectionResults_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
