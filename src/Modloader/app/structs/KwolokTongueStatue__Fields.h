#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokTongueStatue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokTongueStatue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueMode__Enum.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueState__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_KwolokTongueStatue_KwolowTongueStatueMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_KwolokTongueStatue_KwolowTongueStatueState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokTongueStatue__Fields_DEFINED
struct MoonTimeline;
struct MoonReference_1_IByteUberState_;
struct Transform;
struct GameObject;
struct KwolokTongueStatue_AllowedCollision;
struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings;
struct Action_1_KwolokTongueStatue_;
struct IByteUberState;
struct KwolokTongueStatue_TongueState;
struct DynamicDataResolver;
struct IUberState__Array;
struct IDamageReciever__Array;
struct KwolokTongueStatue__Fields {
    struct GuidOwner__Fields _;
    struct MoonTimeline* CloseTimeline;
    struct MoonTimeline* OpenTimeline;
    struct MoonReference_1_IByteUberState_* State;
    struct Transform* AutoTargetCenter;
    struct GameObject* GrassObject;
    KwolokTongueStatue_KwolowTongueStatueMode__Enum Mode;

    KwolokTongueStatue_KwolowTongueStatueState__Enum InitialState;

    float OpenedDuration;
    bool Grassy;
    int32_t BowTargetPriority;
    struct KwolokTongueStatue_AllowedCollision* Collision;
    struct KwolokTongueStatue_AdvancedKwolokTongueStatueSettings* AdvancedSettings;
    struct Action_1_KwolokTongueStatue_* OnTurnOn;
    struct Action_1_KwolokTongueStatue_* OnTurnOff;
    float m_extendedTime;
    KwolokTongueStatue_KwolowTongueStatueState__Enum m_currentState;

    KwolokTongueStatue_KwolowTongueStatueState__Enum m_targetState;

    struct IByteUberState* m_resolvedUberState;
    struct KwolokTongueStatue_TongueState* m_openState;
    struct KwolokTongueStatue_TongueState* m_closeState;
    struct KwolokTongueStatue_TongueState* m_partiallyOpenedState;
    float m_cooldownTimer;
    struct DynamicDataResolver* m_dataResolver;
    bool _IsBlocked_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IUberState__Array* m_affectingUberStates;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokTongueStatue__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_KwolokTongueStatue_.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IByteUberState.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/KwolokTongueStatue_AdvancedKwolokTongueStatueSettings.h>
#include <Modloader/app/structs/KwolokTongueStatue_AllowedCollision.h>
#include <Modloader/app/structs/KwolokTongueStatue_TongueState.h>
#include <Modloader/app/structs/MoonReference_1_IByteUberState_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokTongueStatue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokTongueStatue__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokTongueStatue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokTongueStatue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
