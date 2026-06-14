#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointRestrictZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointRestrictZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointRestrictZone__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointRestrictZone_CheckpointRestrictType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_CheckpointRestrictZone_CheckpointRestrictType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CheckpointRestrictZone__Fields_DEFINED
struct Condition_1;
struct ConditionUberState;
struct CheckpointRestrictZone__Fields {
    struct MonoBehaviour__Fields _;
    bool m_inside;
    float m_characterPositionNormalized;
    struct Rect m_bounds;
    struct Condition_1* Condition;
    CheckpointRestrictZone_CheckpointRestrictType__Enum RestrictCheckpoint;

    struct Vector3 m_lastSafePositionOutsideZone;
    bool m_wasInsideZoneWhenDying;
    bool m_requestedCheckpoint;
    bool AllowAbandonChallange;
    struct ConditionUberState* AllowAbandonChallangeCondition;
    bool RefillHealthAndEnergy;
    bool ApplyRefillInstantly;
    struct Vector3 TargetPosition;
    struct Color EditorColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckpointRestrictZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_CheckpointRestrictZone__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_CheckpointRestrictZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointRestrictZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointRestrictZone__Fields_FWDDECL)
#include <Modloader/app/structs/CheckpointRestrictZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointRestrictZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
