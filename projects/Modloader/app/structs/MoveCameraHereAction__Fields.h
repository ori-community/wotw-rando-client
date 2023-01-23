#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveCameraHereAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveCameraHereAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraHereAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveCameraHereAction__Fields_DEFINED
struct GameObject;
struct MoveCameraHereAction__Fields {
    struct ActionWithDuration__Fields _;
    struct GameObject* Target;
    bool Active;
    bool SkipMiddle;
    bool MoveCamera;
    bool AutoDetermineSkipMiddle;
    float AutoDistance;
    float ZoomOffset;
    bool IgnoreScrollLock;
    float WideScreenAdjustment;
    float DurationOfMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveCameraHereAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoveCameraHereAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_MoveCameraHereAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraHereAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoveCameraHereAction__Fields_FWDDECL)
#include <Modloader/app/structs/MoveCameraHereAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveCameraHereAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
