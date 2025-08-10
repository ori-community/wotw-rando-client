#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/CharacterInteractableActivationMode__Enum.h>
#include <Modloader/app/structs/CharacterInteractableType__Enum.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::NPCEntity {
    IL2CPP_REGISTER_METHOD(0x01121E00, app::InteractionGraph*, get_CurrentInteractionGraph, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121E10, void, set_CurrentInteractionGraph, app::NPCEntity* this_ptr, app::InteractionGraph* value)
    IL2CPP_REGISTER_METHOD(0x01121E20, bool, get_IsInteracting, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121E30, void, set_IsInteracting, app::NPCEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01121E40, bool, get_IsEffectivelyInteracting, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanEffectivelyStartInteraction, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121E60, float, get_LookDirection, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121EA0, bool, ShouldAutoTalk, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121EB0, bool, UsingDynamicCamera, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121EC0, bool, UsingCameraOffsetZone, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121ED0, void, OnOpenShop, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121F40, void, OnCloseShop, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01121FA0, app::Vector2, get_EffectivePlayerAnchor, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011223F0, void, MoonCleanup, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011224C0, void, OnNextMessage, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011224D0, void, AllowResetAutoTalk, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011224E0, void, PlayAutoTalk, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01122740, void, StopAutoTalk, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01122830, void, StartInteraction, app::NPCEntity* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x00417920, app::CharacterInteractableType__Enum, get_InteractableType, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01122950, app::Input_InputButtonProcessor*, get_ActivationButton, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B31590, app::MessageProvider*, get_InteractionMessageHint, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E0530, app::MoonAnimator*, get_DialogActorAnimator, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011229F0, app::Vector2, get_DialogActorPosition, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E0530, app::MoonAnimator*, get_InteractionActorAnimator, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01122AB0, app::Vector3, get_InteractionActorPosition, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAnimParameter, app::NPCEntity* this_ptr, app::MoonAnimator* character_animator)
    IL2CPP_REGISTER_METHOD(0x01122AE0, app::MoonAnimation*, get_TalkAnimation, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01122B70, app::MoonAnimation*, get_ThrowAnimation, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123030, app::MessageProvider*, get_CurrentQuestMessageProvider, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123130, app::MoonAnimation*, get_Idle, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011231C0, bool, get_IsInInteractionRange, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123420, app::Transform*, get_ItemBone, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123480, app::StaticEntityLocomotion*, get_StaticLocomotion, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123550, void, PauseIdle, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123640, void, ResumeIdle, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123730, void, ResetEntity, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011237F0, void, OnValidate, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011238D0, void, OnEnable, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123AE0, void, OnDisable, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123D10, void, OnDestroy, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123E00, void, OnAwake, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01123E30, bool, CanInteractWithCharacter, app::NPCEntity* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x01124100, void, OnInteractionStart, app::NPCEntity* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x011244C0, void, InteractionUpdate, app::NPCEntity* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x011246D0, void, OnInteractionEnd, app::NPCEntity* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x011247C0, bool, ShouldFinishInteraction, app::NPCEntity* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CharacterInteractableActivationMode__Enum, get_ActivationMode, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01124990, void, OnFinishMovingOri, app::NPCEntity* this_ptr, bool arrived_to_destination)
    IL2CPP_REGISTER_METHOD(0x011249B0, void, OnInteractionEffectivelyStart, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01124CD0, void, MoveOriToAnchor, app::NPCEntity* this_ptr, app::Action_1_Boolean_* on_finished)
    IL2CPP_REGISTER_METHOD(0x01125060, void, FinishInteraction, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01125280, void, OnWentThroughDoor, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011252A0, void, EnableCameraZone, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011253D0, void, DisableCameraZone, app::NPCEntity* this_ptr, bool imediate)
    IL2CPP_REGISTER_METHOD(0x01125520, void, SetInteractionCameraOffsetZone, app::NPCEntity* this_ptr, app::CameraOffsetZone* target_offset_zone)
    IL2CPP_REGISTER_METHOD(0x011255F0, void, OnUpdate, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01125900, void, ShowReward, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01125D60, void, ThrowReward, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01126260, void, CollectReward, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01126660, app::Vector2, get_CameraTargetPadding, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01126710, float, get_CameraInfluenceMinDist, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011267E0, float, get_CameraInfluenceMaxDist, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        AdjustCameraTargetWeight,
        app::NPCEntity* this_ptr,
        float* weight,
        app::CameraTargetData* data,
        app::Vector3 primary_target_position
    )
    IL2CPP_REGISTER_METHOD(0x011268B0, app::Vector2, get_CameraZoomFactor, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::CameraTargetType__Enum, get_TargetType, app::NPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011269B0, void, ctor, app::NPCEntity* this_ptr)
} // namespace app::classes::Moon::NPCEntity
