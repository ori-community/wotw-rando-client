#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_DEFINED)
#include <Modloader/app/structs/AmbientOcclusion_OcclusionSource__Enum.h>
#if defined(IL2CPP_STRUCT_AmbientOcclusion_OcclusionSource__Enum_DEFINED)
#define IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_DEFINED
struct AmbientOcclusion_PropertyObserver {
    bool _downsampling;
    AmbientOcclusion_OcclusionSource__Enum _occlusionSource;

    bool _ambientOnly;
    bool _debug;
    int32_t _pixelWidth;
    int32_t _pixelHeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_FWDDECL)
#define IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_FWDDECL
#endif
#undef IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_DEFINED) && !defined(IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_FWDDECL)
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
