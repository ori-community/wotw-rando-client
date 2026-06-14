#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokChase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokChase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokChase__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokChase__Fields_DEFINED
struct SerializedByteUberState;
struct Transform;
struct AnimationCurve;
struct MoonTimeline;
struct PositionAnimatorEntity;
struct KwolokChase__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedByteUberState* KwolokState;
    struct Transform* DistanceToPlayerPoint;
    struct AnimationCurve* SpeedMultiplier;
    struct MoonTimeline* ChaseTimeline;
    struct PositionAnimatorEntity* PositionAnimatorEntity;
    bool Boolean;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokChase__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokChase__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PositionAnimatorEntity.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokChase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokChase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokChase__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokChase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokChase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
