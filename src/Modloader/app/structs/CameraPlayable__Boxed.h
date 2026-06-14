#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPlayable__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPlayable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPlayable__Boxed_DEFINED)
#include <Modloader/app/structs/CameraPlayable.h>
#if defined(IL2CPP_STRUCT_CameraPlayable_DEFINED)
#define IL2CPP_STRUCT_CameraPlayable__Boxed_DEFINED
struct CameraPlayable__Class;
struct CameraPlayable__Boxed {
    struct CameraPlayable__Class* klass;
    MonitorData* monitor;
    struct CameraPlayable fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPlayable__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CameraPlayable__Boxed_FWDDECL
#include <Modloader/app/structs/CameraPlayable__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraPlayable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPlayable__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CameraPlayable__Boxed_FWDDECL)
#include <Modloader/app/structs/CameraPlayable__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPlayable__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
