#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleNPCEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleNPCEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/NPCAnchorConfiguration__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_NPCAnchorConfiguration__Enum_DEFINED)
#define IL2CPP_STRUCT_SimpleNPCEntity__Fields_DEFINED
struct MoonAnimator;
struct String;
struct MessageProvider;
struct InteractionGraph;
struct MoonTimeline;
struct CameraOffsetZone;
struct Sensor;
struct SimpleNPCEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimator* Animator;
    struct String* ActorName;
    float InteractionRadius;
    struct Vector2 InteractionOffset;
    struct MessageProvider* InteractionHintMessage;
    NPCAnchorConfiguration__Enum AnchorSetup;

    struct Vector2 PlayerAnchorLeft;
    struct Vector2 PlayerAnchorRight;
    bool CanInteract;
    struct InteractionGraph* InteractionGraph;
    struct MoonTimeline* ExitInteractionTimeline;
    struct CameraOffsetZone* InteractionCameraOffsetZone;
    int32_t m_finishInteractionTime;
    struct Sensor* m_sensor;
    bool m_shouldFinishInteraction;
    bool _IsInteracting_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleNPCEntity__Fields_FWDDECL
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SimpleNPCEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleNPCEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleNPCEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleNPCEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
