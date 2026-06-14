#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Compositor_OverlaySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Compositor_OverlaySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_OverlaySettings_DEFINED)
#include <Modloader/app/structs/HmdMatrix44_t.h>
#if defined(IL2CPP_STRUCT_HmdMatrix44_t_DEFINED)
#define IL2CPP_STRUCT_Compositor_OverlaySettings_DEFINED
struct Compositor_OverlaySettings {
    uint32_t size;
    bool curved;
    bool antialias;
    float scale;
    float distance;
    float alpha;
    float uOffset;
    float vOffset;
    float uScale;
    float vScale;
    float gridDivs;
    float gridWidth;
    float gridScale;
    struct HmdMatrix44_t transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Compositor_OverlaySettings_FWDDECL)
#define IL2CPP_STRUCT_Compositor_OverlaySettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_Compositor_OverlaySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_OverlaySettings_DEFINED) && !defined(IL2CPP_STRUCT_Compositor_OverlaySettings_FWDDECL)
#include <Modloader/app/structs/Compositor_OverlaySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Compositor_OverlaySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
