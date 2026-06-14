#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabSurface_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabSurface_DEFINED)
#include <Modloader/app/structs/SeinGrabSurface__Fields.h>
#if defined(IL2CPP_STRUCT_SeinGrabSurface__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabSurface_DEFINED
struct SeinGrabSurface__Class;
struct SeinGrabSurface {
    struct SeinGrabSurface__Class* klass;
    MonitorData* monitor;
    struct SeinGrabSurface__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabSurface_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabSurface_FWDDECL
#include <Modloader/app/structs/SeinGrabSurface__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabSurface_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabSurface_FWDDECL)
#include <Modloader/app/structs/SeinGrabSurface.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabSurface.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
