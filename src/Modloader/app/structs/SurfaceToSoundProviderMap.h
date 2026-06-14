#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceToSoundProviderMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceToSoundProviderMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap_DEFINED)
#include <Modloader/app/structs/SurfaceToSoundProviderMap__Fields.h>
#if defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceToSoundProviderMap_DEFINED
struct SurfaceToSoundProviderMap__Class;
struct SurfaceToSoundProviderMap {
    struct SurfaceToSoundProviderMap__Class* klass;
    MonitorData* monitor;
    struct SurfaceToSoundProviderMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap_FWDDECL)
#define IL2CPP_STRUCT_SurfaceToSoundProviderMap_FWDDECL
#include <Modloader/app/structs/SurfaceToSoundProviderMap__Class.h>
#endif
#undef IL2CPP_STRUCT_SurfaceToSoundProviderMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap_FWDDECL)
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
