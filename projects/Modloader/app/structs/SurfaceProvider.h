#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceProvider_DEFINED)
#include <Modloader/app/structs/SurfaceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SurfaceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceProvider_DEFINED
struct SurfaceProvider__Class;
struct SurfaceProvider {
    struct SurfaceProvider__Class* klass;
    MonitorData* monitor;
    struct SurfaceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceProvider_FWDDECL)
#define IL2CPP_STRUCT_SurfaceProvider_FWDDECL
#include <Modloader/app/structs/SurfaceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SurfaceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceProvider_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceProvider_FWDDECL)
#include <Modloader/app/structs/SurfaceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
