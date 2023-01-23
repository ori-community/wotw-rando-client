#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceTypeContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceTypeContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceTypeContext_DEFINED)
#include <Modloader/app/structs/SurfaceTypeContext__Fields.h>
#if defined(IL2CPP_STRUCT_SurfaceTypeContext__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceTypeContext_DEFINED
struct SurfaceTypeContext__Class;
struct SurfaceTypeContext {
    struct SurfaceTypeContext__Class* klass;
    MonitorData* monitor;
    struct SurfaceTypeContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceTypeContext_FWDDECL)
#define IL2CPP_STRUCT_SurfaceTypeContext_FWDDECL
#include <Modloader/app/structs/SurfaceTypeContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SurfaceTypeContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceTypeContext_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceTypeContext_FWDDECL)
#include <Modloader/app/structs/SurfaceTypeContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceTypeContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
