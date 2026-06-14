#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderNPC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderNPC__Fields_DEFINED)
#include <Modloader/app/structs/BaseNPC__Fields.h>
#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#if defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED) && defined(IL2CPP_STRUCT_BuilderNPC_State__Enum_DEFINED)
#define IL2CPP_STRUCT_BuilderNPC__Fields_DEFINED
struct MessageProvider;
struct InteractionSettings;
struct Action;
struct GetWorldEventCondition;
struct SetWorldEventAction;
struct SoundProvider;
struct MessageBox;
struct BuilderNPC__Fields {
    struct BaseNPC__Fields _;
    struct MessageProvider* InteractionHintMessage;
    struct MessageProvider* InteractionMessageProvider;
    struct InteractionSettings* PurchaseInteraction;
    struct MessageProvider* FixCannonMessageProvider;
    struct MessageProvider* FixCannonDoneMessageProvider;
    struct InteractionSettings* HubOfferInteraction;
    struct MessageProvider* HubFirstEncounter;
    struct MessageProvider* HubAllDone;
    struct MessageProvider* HubFixedLift;
    struct MessageProvider* HubFixedSave;
    struct MessageProvider* HubSaleConfirmation;
    struct MessageProvider* HubNotEnough;
    struct Action* OnDialog;
    struct Action* OnGoFixCanon;
    struct GetWorldEventCondition* fixedLiftCondition;
    struct GetWorldEventCondition* fixedSaveCondition;
    struct SetWorldEventAction* fixingLiftEvent;
    struct SetWorldEventAction* fixingSaveEvent;
    struct SetWorldEventAction* fixingLiftEventDone;
    struct SetWorldEventAction* fixingSaveEventDone;
    struct SetWorldEventAction* fixingCannonEventDone;
    struct SoundProvider* notEnoughSpiritLightSoundProvider;
    struct SoundProvider* purchaseSuccessSoundProvider;
    struct SoundProvider* fixDoneSoundProvider;
    bool m_metOri;
    BuilderNPC_State__Enum m_currentState;

    float m_currentStateTime;
    struct MessageBox* m_interactionHintMessageBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderNPC__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuilderNPC__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GetWorldEventCondition.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SetWorldEventAction.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_BuilderNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderNPC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuilderNPC__Fields_FWDDECL)
#include <Modloader/app/structs/BuilderNPC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderNPC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
