#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_DEFINED
struct SerializedIntUberState;
struct SerializedFloatUberState;
struct LinearPathVariedSpeed;
struct Transform__Array;
struct Single__Array;
struct PathFollowerVariedSpeed;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct DesertEscapeWormPathFollower__Fields {
    struct GuidOwner__Fields _;
    struct SerializedIntUberState* DesertWormNodeState;
    struct SerializedFloatUberState* DesertWormDistanceState;
    struct LinearPathVariedSpeed* LinearPath;
    float ChangeAngleSpeed;
    struct Transform__Array* Segments;
    struct Single__Array* m_segmentOffsets;
    struct Single__Array* m_segmentRotationLastFrame;
    struct PathFollowerVariedSpeed* m_follower;
    bool m_startCalled;
    bool m_hasLoaded;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LinearPathVariedSpeed.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PathFollowerVariedSpeed.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesertEscapeWormPathFollower__Fields_FWDDECL)
#include <Modloader/app/structs/DesertEscapeWormPathFollower__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesertEscapeWormPathFollower__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
