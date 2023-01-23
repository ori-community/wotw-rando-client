#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceBasedSoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider_DEFINED)
#include <Modloader/app/structs/SurfaceBasedSoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceBasedSoundProvider_DEFINED
struct SurfaceBasedSoundProvider__Class;
struct SurfaceBasedSoundProvider {
    struct SurfaceBasedSoundProvider__Class* klass;
    MonitorData* monitor;
    struct SurfaceBasedSoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider_FWDDECL)
#define IL2CPP_STRUCT_SurfaceBasedSoundProvider_FWDDECL
#include <Modloader/app/structs/SurfaceBasedSoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SurfaceBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider_FWDDECL)
#include <Modloader/app/structs/SurfaceBasedSoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceBasedSoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
