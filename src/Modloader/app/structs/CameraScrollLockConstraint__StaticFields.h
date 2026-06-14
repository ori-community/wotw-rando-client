#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_DEFINED
struct CameraScrollLockConstraint;
struct Ray__Array;
struct Vector3__Array;
struct CameraScrollLockConstraint__StaticFields {
    struct CameraScrollLockConstraint* Current;
    bool AdjustFramingForExtraZoom;
    struct Ray__Array* s_rays;
    struct Vector3__Array* s_pts;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_FWDDECL
#include <Modloader/app/structs/CameraScrollLockConstraint.h>
#include <Modloader/app/structs/Ray__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CameraScrollLockConstraint__StaticFields_FWDDECL)
#include <Modloader/app/structs/CameraScrollLockConstraint__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraScrollLockConstraint__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
