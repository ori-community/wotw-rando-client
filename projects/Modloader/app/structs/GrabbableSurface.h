#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrabbableSurface_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrabbableSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurface_DEFINED)
#include <Modloader/app/structs/GrabbableSurface__Fields.h>
#if defined(IL2CPP_STRUCT_GrabbableSurface__Fields_DEFINED)
#define IL2CPP_STRUCT_GrabbableSurface_DEFINED
struct GrabbableSurface__Class;
struct GrabbableSurface {
    struct GrabbableSurface__Class* klass;
    MonitorData* monitor;
    struct GrabbableSurface__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrabbableSurface_FWDDECL)
#define IL2CPP_STRUCT_GrabbableSurface_FWDDECL
#include <Modloader/app/structs/GrabbableSurface__Class.h>
#endif
#undef IL2CPP_STRUCT_GrabbableSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableSurface_DEFINED) && !defined(IL2CPP_STRUCT_GrabbableSurface_FWDDECL)
#include <Modloader/app/structs/GrabbableSurface.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrabbableSurface.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
