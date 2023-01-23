#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UI_Cameras__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UI_Cameras__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Cameras__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UI_Cameras__StaticFields_DEFINED
struct CameraSystem;
struct GameplayCamera;
struct CameraManager;
struct UI_Cameras__StaticFields {
    struct CameraSystem* System;
    struct GameplayCamera* Current;
    struct CameraManager* Manager;
};
#endif
#if !defined(IL2CPP_STRUCT_UI_Cameras__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UI_Cameras__StaticFields_FWDDECL
#include <Modloader/app/structs/CameraManager.h>
#include <Modloader/app/structs/CameraSystem.h>
#include <Modloader/app/structs/GameplayCamera.h>
#endif
#undef IL2CPP_STRUCT_UI_Cameras__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Cameras__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UI_Cameras__StaticFields_FWDDECL)
#include <Modloader/app/structs/UI_Cameras__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UI_Cameras__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
