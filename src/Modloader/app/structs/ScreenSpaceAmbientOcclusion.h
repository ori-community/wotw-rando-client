#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_DEFINED)
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_DEFINED
struct ScreenSpaceAmbientOcclusion__Class;
struct ScreenSpaceAmbientOcclusion {
    struct ScreenSpaceAmbientOcclusion__Class* klass;
    MonitorData* monitor;
    struct ScreenSpaceAmbientOcclusion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_FWDDECL
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
