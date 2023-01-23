#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPuppetController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPuppetController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPuppetController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPuppetController__Fields_DEFINED
struct CameraController_1;
struct Transform;
struct GameplayToCinematicEntity;
struct CameraPuppetController__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraController_1* m_cameraController;
    struct Transform* GameplayPuppet;
    struct Transform* CinematicPuppet;
    float Tween;
    float WideScreenHorizontalPanStrength;
    float WideScreenVerticalPanStrength;
    float WideScreenZoomStrength;
    struct Transform* m_transform;
    struct GameplayToCinematicEntity* CurrentGameplayToCinematicEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPuppetController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraPuppetController__Fields_FWDDECL
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/GameplayToCinematicEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraPuppetController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPuppetController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraPuppetController__Fields_FWDDECL)
#include <Modloader/app/structs/CameraPuppetController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPuppetController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
