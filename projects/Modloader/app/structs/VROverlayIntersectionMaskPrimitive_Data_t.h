#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_DEFINED)
#include <Modloader/app/structs/IntersectionMaskCircle_t.h>
#include <Modloader/app/structs/IntersectionMaskRectangle_t.h>
#if defined(IL2CPP_STRUCT_IntersectionMaskRectangle_t_DEFINED) && defined(IL2CPP_STRUCT_IntersectionMaskCircle_t_DEFINED)
#define IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_DEFINED
struct VROverlayIntersectionMaskPrimitive_Data_t {
    struct IntersectionMaskRectangle_t m_Rectangle;
    struct IntersectionMaskCircle_t m_Circle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_FWDDECL)
#define IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_DEFINED) && !defined(IL2CPP_STRUCT_VROverlayIntersectionMaskPrimitive_Data_t_FWDDECL)
#include <Modloader/app/structs/VROverlayIntersectionMaskPrimitive_Data_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VROverlayIntersectionMaskPrimitive_Data_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
