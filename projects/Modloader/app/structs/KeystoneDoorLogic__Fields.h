#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeystoneDoorLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeystoneDoorLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystoneDoorLogic__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/KeystoneDoorLogic_KeystoneDoorType__Enum.h>
#include <Modloader/app/structs/KeystoneDoorLogic_State__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_KeystoneDoorLogic_KeystoneDoorType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_KeystoneDoorLogic_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_KeystoneDoorLogic__Fields_DEFINED
struct KeystoneDoorAnimator;
struct Transform;
struct SoundProvider;
struct MessageProvider;
struct DesiredUberStateDoor;
struct MessageBox;
struct IUberState__Array;
struct SoundPlayer;
struct KeystoneDoorLogic__Fields {
    struct GuidOwner__Fields _;
    KeystoneDoorLogic_KeystoneDoorType__Enum DoorType;

    struct KeystoneDoorAnimator* Animator;
    struct Transform* OriTarget;
    struct Color OriHoverColor;
    struct Transform* m_transform;
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
    struct MessageBox* m_hint;
    bool m_opensOnLeftSide;
    KeystoneDoorLogic_State__Enum CurrentState;

    bool m_checkItOpened;
    struct IUberState__Array* m_affectingUberStates;
    struct SoundPlayer* m_openDoorSound;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeystoneDoorLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeystoneDoorLogic__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateDoor.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/KeystoneDoorAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KeystoneDoorLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystoneDoorLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeystoneDoorLogic__Fields_FWDDECL)
#include <Modloader/app/structs/KeystoneDoorLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeystoneDoorLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
