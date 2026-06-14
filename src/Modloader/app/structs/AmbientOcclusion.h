#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientOcclusion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientOcclusion_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_DEFINED)
#include <Modloader/app/structs/AmbientOcclusion__Fields.h>
#if defined(IL2CPP_STRUCT_AmbientOcclusion__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbientOcclusion_DEFINED
struct AmbientOcclusion__Class;
struct AmbientOcclusion {
    struct AmbientOcclusion__Class* klass;
    MonitorData* monitor;
    struct AmbientOcclusion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_FWDDECL)
#define IL2CPP_STRUCT_AmbientOcclusion_FWDDECL
#include <Modloader/app/structs/AmbientOcclusion__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbientOcclusion_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_DEFINED) && !defined(IL2CPP_STRUCT_AmbientOcclusion_FWDDECL)
#include <Modloader/app/structs/AmbientOcclusion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientOcclusion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
