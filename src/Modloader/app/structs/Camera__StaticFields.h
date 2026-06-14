#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Camera__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Camera__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Camera__StaticFields_DEFINED
struct Camera_CameraCallback;
struct Camera__StaticFields {
    struct Camera_CameraCallback* onPreCull;
    struct Camera_CameraCallback* onPreRender;
    struct Camera_CameraCallback* onPostRender;
};
#endif
#if !defined(IL2CPP_STRUCT_Camera__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Camera__StaticFields_FWDDECL
#include <Modloader/app/structs/Camera_CameraCallback.h>
#endif
#undef IL2CPP_STRUCT_Camera__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Camera__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Camera__StaticFields_FWDDECL)
#include <Modloader/app/structs/Camera__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Camera__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
