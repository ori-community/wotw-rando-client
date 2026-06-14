#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTarget__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraTarget__Fields_DEFINED
struct GameplayCamera;
struct List_1_CameraTarget_TargetLayer_;
struct __declspec(align(8)) CameraTarget__Fields {
    struct GameplayCamera* GameplayCamera;
    struct List_1_CameraTarget_TargetLayer_* m_targetLayers;
    struct List_1_CameraTarget_TargetLayer_* m_sortedLayers;
    struct Vector3 TargetPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraTarget__Fields_FWDDECL
#include <Modloader/app/structs/GameplayCamera.h>
#include <Modloader/app/structs/List_1_CameraTarget_TargetLayer_.h>
#endif
#undef IL2CPP_STRUCT_CameraTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraTarget__Fields_FWDDECL)
#include <Modloader/app/structs/CameraTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
