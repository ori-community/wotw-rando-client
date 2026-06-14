#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CartographerNPC.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/DamageSurfacesMap.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/FoxGrabber_Receiver.h>
#include <Modloader/app/structs/FrogEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/HoldableRigidBody.h>
#include <Modloader/app/structs/ICarryable.h>
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/IPuppet.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>
#include <Modloader/app/structs/LeverPuppet.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_Moon_IGizmo_.h>
#include <Modloader/app/structs/List_1_Moon_UI_UIInteractable_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/LocomotionAirMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/MapmakerItem.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/MeleeComboMoveChainsword.h>
#include <Modloader/app/structs/MeleeComboMoveSword.h>
#include <Modloader/app/structs/MeleeComboMoveSwordstaff.h>
#include <Modloader/app/structs/MeleeComboMoveTorch.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeaponHammer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MinerNPCEntity.h>
#include <Modloader/app/structs/MokiNPCEntity.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAssert.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/ReplaySetting.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinController3D.h>
#include <Modloader/app/structs/ShardTraderEntity.h>
#include <Modloader/app/structs/ShardTraderNPC.h>
#include <Modloader/app/structs/ShopkeeperItem.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/SnakeSolver.h>
#include <Modloader/app/structs/SoundManager.h>
#include <Modloader/app/structs/SpellPickupContext.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#include <Modloader/app/structs/SpiritShardPickupContext.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/StatSetting.h>
#include <Modloader/app/structs/StatisticianEntity.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TimelineEventTrigger__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TraversalBehaviour.h>
#include <Modloader/app/structs/UberSwarm.h>
#include <Modloader/app/structs/UpgradeAbilityItem.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#include <Modloader/app/structs/WeaponMasterEntity.h>
#include <Modloader/app/structs/WispPickupContext.h>

namespace app::classes::MoonAssert {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotEmptyString, app::String* str)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsPositive, int32_t val)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsTrue, bool expression, app::String* text)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsFalse, bool expression, app::String* text)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonAssert* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsValidArrayIndex, int32_t index, app::Object__Array* array)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsValidListIndex_1, int32_t index, app::List_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_1, app::Object* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNull_1, app::Object* reference)
    IL2CPP_REGISTER_METHOD(0x01552F10, void, IsNonEmptyArray_1, app::Object__Array* array)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_2, app::MoonTimeline* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_3, app::LocomotionAnimation* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_4, app::GroundEntityLocomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_5, app::DamageSurfacesMap* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_6, app::ILocomotionTurningHandler* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_7, app::Transform* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_8, app::CharacterStatePuppet* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_9, app::GameObject* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_10, app::SoundManager* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_11, app::CageStructureTool* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_12, app::ICarryable* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_13, app::RecordableObjectPuppet* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_14, app::FoxGrabber_Receiver* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_15, app::FrogEntity* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNull_2, app::GameObject__Array* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_16, app::GhostPlayer* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_17, app::IGhostRecorderPlugin* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_18, app::IPuppet* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_19, app::IEntityLocomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_20, app::LineRenderer* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_21, app::SeinController3D* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_22, app::HoldableRigidBody* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_23, app::PlatformMovement* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_24, app::LayeredRenderSettings_LayerParams__Array* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_25, app::Renderer* reference)
    IL2CPP_REGISTER_METHOD(0x01552F10, void, IsNonEmptyArray_2, app::LayeredRenderSettings_LayerParams__Array* array)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_26, app::LeverPuppet* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_27, app::Varying2DSoundProvider* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_28, app::MoonAnimator* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_29, app::AnimationPostprocess* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_30, app::BaseAnimator* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_31, app::AirEntityLocomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_32, app::LocomotionTimelineAnimation* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_33, app::Locomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_34, app::VolumeEntityLocomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_35, app::ReplaySetting* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_36, app::MapmakerItem* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_37, app::MeleeComboMove* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_38, app::SeinComboHandler* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_39, app::SeinCharacter* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_40, app::MeleeWeapon* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_41, app::MeleeWeaponHammer* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_42, app::MeleeComboMoveChainsword* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_43, app::MeleeComboMoveSword* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_44, app::MeleeComboMoveSwordstaff* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_45, app::MeleeComboMoveTorch* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_46, app::MinerNPCEntity* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_47, app::MokiNPCEntity* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_48, app::LocomotionAirMoveBehaviour* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_49, app::EntityLocomotionTask* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_50, app::LocomotionGroundMoveBehaviour* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_51, app::BaseLocomotionTurningBehaviour* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_52, app::CartographerNPC* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_53, app::List_1_Moon_IGizmo_* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_54, app::Component_1* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_55, app::TimelineEventTrigger__Array* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_56, app::ShardTraderNPC* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_57, app::SkeetoAirMoveBehaviour* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_58, app::SkeetoLocomotionIdleBehaviour* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_59, app::SpellPickupContext* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_60, app::SpiritShardPickupContext* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_61, app::WispPickupContext* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsValidListIndex_2, int32_t index, app::List_1_Moon_UI_UIInteractable_* list)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_62, app::TraversalBehaviour* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_63, app::MessageProvider* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_64, app::CharacterSpriteMirror* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_65, app::String* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_66, app::RaceSettings* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_67, app::SnakeSolver* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_68, app::IHoldable* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_69, app::CapsuleCollider* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_70, app::ShardTraderEntity* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_71, app::ShopkeeperItem* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_72, app::MessageBox* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_73, app::SkeetoLocomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_74, app::UpgradeAbilityItem* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_75, app::SpiritShardUIItem* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_76, app::PlayerUberStateShards_Shard* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_77, app::PlayerUberStateInventory_InventoryItem* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_78, app::SpiderlingLocomotion* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_79, app::StatSetting* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_80, app::StatisticianEntity* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_81, app::SpiderBossEntity* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNull_3, app::Task* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_82, app::Task* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNull_4, app::UberSwarm* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_83, app::UberSwarm* reference)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IsNotNull_84, app::WeaponMasterEntity* reference)
} // namespace app::classes::MoonAssert
