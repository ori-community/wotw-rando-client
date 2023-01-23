#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StompableFloor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StompableFloor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompableFloor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_StompableFloor__Fields_DEFINED
struct MoonTimeline;
struct VisibleOnWorldMap;
struct Transform;
struct SerializedBooleanUberState;
struct IDamageReciever__Array;
struct StompableFloor__Fields {
    struct MonoBehaviour__Fields _;
    int32_t _HammerPriority_k__BackingField;
    bool _HammerEnableAutoTarget_k__BackingField;
    struct MoonTimeline* HighlightTimeline;
    struct MoonTimeline* HighlightedLoopTimeline;
    struct MoonTimeline* UnhighlightTimeline;
    struct MoonTimeline* DestructionTimeline;
    struct VisibleOnWorldMap* VisibleOnWorldMapComponent;
    struct Transform* HighlightTriggerTransform;
    struct SerializedBooleanUberState* State;
    struct Rect GasBallAttractionZone;
    struct Vector3 m_position;
    bool m_isHighlighted;
    struct Rect m_bounds;
    struct Rect m_runTimeGasBallAtractionZone;
    bool AlwaysIgnoreEnemies;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StompableFloor__Fields_FWDDECL)
#define IL2CPP_STRUCT_StompableFloor__Fields_FWDDECL
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#endif
#undef IL2CPP_STRUCT_StompableFloor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompableFloor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StompableFloor__Fields_FWDDECL)
#include <Modloader/app/structs/StompableFloor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StompableFloor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
