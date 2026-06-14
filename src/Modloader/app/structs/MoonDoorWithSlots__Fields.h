#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDoorWithSlots__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDoorWithSlots__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDoorWithSlots__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/MoonDoorWithSlots_State__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && defined(IL2CPP_STRUCT_MoonDoorWithSlots_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonDoorWithSlots__Fields_DEFINED
struct Transform;
struct MoonTimeline;
struct SoundProvider;
struct MessageProvider;
struct DesiredUberStateDoor;
struct MessageBox;
struct IUberState__Array;
struct SoundPlayer;
struct MoonDoorWithSlots__Fields {
    struct GuidOwner__Fields _;
    struct Transform* OriTarget;
    struct Color OriHoverColor;
    struct Transform* m_transform;
    struct MoonTimeline* OpenDoorTimeline;
    struct MoonTimeline* OnFailTimeline;
    int32_t NumberOfOrbsRequired;
    struct SoundProvider* PlaceLeafSoundSoundProvider;
    struct SoundProvider* NotEnoughLeafsSoundProvider;
    struct SoundProvider* OpenDoorSoundProvider;
    struct SoundProvider* RestoreLeafsSoundProvider;
    struct SoundProvider* OnOriEnterSoundProvider;
    struct SoundProvider* OnOriExitSoundProvider;
    float OriDuration;
    float Radius;
    struct MessageProvider* HintMessage;
    struct DesiredUberStateDoor* OpenedState;
    struct CheckpointFunctionality Checkpoint;
    struct Transform* KeystoneTarget;
    struct MessageBox* m_hint;
    bool m_opensOnLeftSide;
    MoonDoorWithSlots_State__Enum CurrentState;

    bool m_checkItOpened;
    struct IUberState__Array* m_affectingUberStates;
    struct SoundPlayer* m_openDoorSound;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDoorWithSlots__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonDoorWithSlots__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateDoor.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoonDoorWithSlots__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDoorWithSlots__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDoorWithSlots__Fields_FWDDECL)
#include <Modloader/app/structs/MoonDoorWithSlots__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDoorWithSlots__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
