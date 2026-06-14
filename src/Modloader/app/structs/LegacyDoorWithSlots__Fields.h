#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LegacyDoorWithSlots_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_LegacyDoorWithSlots_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_DEFINED
struct Transform;
struct ActionMethod;
struct SoundProvider;
struct MessageProvider;
struct CameraShakeAsset;
struct ControllerShakeAsset;
struct MessageBox;
struct SoundPlayer;
struct LegacyDoorWithSlots__Fields {
    struct SaveSerialize__Fields _;
    struct Transform* OriTarget;
    struct Color OriHoverColor;
    struct Transform* m_transform;
    int32_t m_slotsPending;
    int32_t m_slotsFilled;
    struct ActionMethod* OnOpenedAction;
    struct ActionMethod* OnFailAction;
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
    struct CameraShakeAsset* DoorKeyInsertShake;
    struct ControllerShakeAsset* DoorKeyInsertControllerShake;
    struct MessageBox* m_hint;
    bool m_opensOnLeftSide;
    LegacyDoorWithSlots_State__Enum CurrentState;

    bool m_checkItOpened;
    struct SoundPlayer* m_openDoorSound;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/CameraShakeAsset.h>
#include <Modloader/app/structs/ControllerShakeAsset.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyDoorWithSlots__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDoorWithSlots__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
