#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimalAnimationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimalAnimationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimalAnimationController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AnimalAnimationController__Fields_DEFINED
struct DynamicDataResolver;
struct MoonTimeline;
struct SerializedBooleanUberState;
struct GameObject;
struct TriggerZone;
struct Transform;
struct IUberState__Array;
struct AnimalAnimationController__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct Vector3 OtterStartLocalPosition;
    struct Vector3 OtterWaitLocalPosition;
    struct Vector3 OtterEndLocalPosition;
    struct MoonTimeline* animationTimeline;
    struct SerializedBooleanUberState* AnimalCutsceneState;
    struct GameObject* otterSprite;
    struct TriggerZone* TriggerZone;
    struct Transform* OriTransform;
    struct Vector3 oriStartPos;
    bool cutsceneHasBeenTriggered;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimalAnimationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimalAnimationController__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TriggerZone.h>
#endif
#undef IL2CPP_STRUCT_AnimalAnimationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimalAnimationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimalAnimationController__Fields_FWDDECL)
#include <Modloader/app/structs/AnimalAnimationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimalAnimationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
