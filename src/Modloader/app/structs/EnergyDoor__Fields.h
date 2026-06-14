#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyDoor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoor__Fields_DEFINED)
#include <Modloader/app/structs/EnergyDoor_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_EnergyDoor_State__Enum_DEFINED)
#define IL2CPP_STRUCT_EnergyDoor__Fields_DEFINED
struct Transform;
struct ActionMethod;
struct SoundProvider;
struct Texture2D;
struct MessageProvider;
struct MessageBox;
struct List_1_EnergyDoorSlot_;
struct EnergyDoor__Fields {
    struct SaveSerialize__Fields _;
    struct Transform* OriTarget;
    struct Transform* m_transform;
    int32_t m_slotsPending;
    int32_t m_slotsFilled;
    struct ActionMethod* OnOpenedAction;
    struct ActionMethod* OnFailAction;
    int32_t AmountOfEnergyRequired;
    int32_t AmountOfEnergyUsed;
    struct SoundProvider* PlaceSlotSoundProvider;
    struct SoundProvider* ActivateSoundProvider;
    struct SoundProvider* RestoreSoundProvider;
    struct SoundProvider* OnOriEnterSoundProvider;
    struct SoundProvider* OnOriExitSoundProvider;
    float OriDuration;
    float Radius;
    struct Texture2D* HintTexture;
    struct MessageProvider* HintMessage;
    struct MessageBox* m_hint;
    EnergyDoor_State__Enum CurrentState;

    struct List_1_EnergyDoorSlot_* m_slots;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyDoor__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnergyDoor__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/List_1_EnergyDoorSlot_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EnergyDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnergyDoor__Fields_FWDDECL)
#include <Modloader/app/structs/EnergyDoor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyDoor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
