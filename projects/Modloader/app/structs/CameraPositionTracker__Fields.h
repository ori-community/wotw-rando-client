#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPositionTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPositionTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPositionTracker__Fields_DEFINED
struct Camera;
struct CameraPositionTracker__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera* m_camera;
    bool m_capturedThisFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPositionTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraPositionTracker__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#endif
#undef IL2CPP_STRUCT_CameraPositionTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraPositionTracker__Fields_FWDDECL)
#include <Modloader/app/structs/CameraPositionTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPositionTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
