#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTargetSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTargetSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetSettings_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CameraTargetSettings_DEFINED
struct ICameraTarget;
struct CameraTargetSettings {
    struct Vector3 Pos;
    struct Vector2 Padding;
    float Weight;
    struct ICameraTarget* Target;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTargetSettings_FWDDECL)
#define IL2CPP_STRUCT_CameraTargetSettings_FWDDECL
#include <Modloader/app/structs/ICameraTarget.h>
#endif
#undef IL2CPP_STRUCT_CameraTargetSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetSettings_DEFINED) && !defined(IL2CPP_STRUCT_CameraTargetSettings_FWDDECL)
#include <Modloader/app/structs/CameraTargetSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTargetSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
