#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_DEFINED
struct __declspec(align(8)) CameraPositionTracker_CameraPosition__Fields {
    int32_t Id;
    struct Vector3 Position;
    struct Matrix4x4 ViewProjMatrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_FWDDECL)
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
