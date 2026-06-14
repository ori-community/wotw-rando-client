#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilterRenderersSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilterRenderersSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterRenderersSettings_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/FilterBoundsMode__Enum.h>
#include <Modloader/app/structs/RenderQueueRange.h>
#if defined(IL2CPP_STRUCT_RenderQueueRange_DEFINED) && defined(IL2CPP_STRUCT_FilterBoundsMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_FilterRenderersSettings_DEFINED
struct FilterRenderersSettings {
    struct RenderQueueRange m_RenderQueueRange;
    int32_t m_LayerMask;
    uint32_t m_RenderingLayerMask;
    int32_t m_ExcludeMotionVectorObjects;
    FilterBoundsMode__Enum boundsMode;

    struct Bounds bounds;
    float boundsZMin;
    float boundsZMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FilterRenderersSettings_FWDDECL)
#define IL2CPP_STRUCT_FilterRenderersSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_FilterRenderersSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterRenderersSettings_DEFINED) && !defined(IL2CPP_STRUCT_FilterRenderersSettings_FWDDECL)
#include <Modloader/app/structs/FilterRenderersSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilterRenderersSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
