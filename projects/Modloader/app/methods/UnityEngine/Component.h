#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsStateValidator.h>
#include <Modloader/app/structs/AchievementsUIItem.h>
#include <Modloader/app/structs/AcidBlob.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionMethod__Array.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/ActionSequenceSerializer.h>
#include <Modloader/app/structs/ActionWithDuration.h>
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D.h>
#include <Modloader/app/structs/AnimatedCritter__Array.h>
#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/AnimationMaskNode.h>
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AnimatorController3rdPerson.h>
#include <Modloader/app/structs/Animator__Array.h>
#include <Modloader/app/structs/AreaMapCanvasOverlay__Array.h>
#include <Modloader/app/structs/AreaMapDebugNavigation.h>
#include <Modloader/app/structs/AreaMapIcon.h>
#include <Modloader/app/structs/AreaMapIconManager.h>
#include <Modloader/app/structs/AreaMapNavigation.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Array.h>
#include <Modloader/app/structs/AreaMapUI.h>
#include <Modloader/app/structs/AsymLocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue.h>
#include <Modloader/app/structs/AttachToRope.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/AutoRotate.h>
#include <Modloader/app/structs/BabyCrabEntity.h>
#include <Modloader/app/structs/BabyWormAnimation.h>
#include <Modloader/app/structs/BabyWormDamageDealer.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/BaseInput__Array.h>
#include <Modloader/app/structs/BaseNPC.h>
#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/Beautify.h>
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/Blackboard.h>
#include <Modloader/app/structs/BlockDamageInterruption__Array.h>
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/BoxCollider2D.h>
#include <Modloader/app/structs/BoxCollider__Array.h>
#include <Modloader/app/structs/Brain.h>
#include <Modloader/app/structs/BreakableWallLogic.h>
#include <Modloader/app/structs/BreakableWallVisuals.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BugHornEntity.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CageStructureToolCollider.h>
#include <Modloader/app/structs/CageStructureToolFill.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController.h>
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/CameraLookAheadController.h>
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/CameraShakeAnimator.h>
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/CancelableAnimator.h>
#include <Modloader/app/structs/CancelableAnimator__Array.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/CanvasRenderer.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CapsuleCollider__Array.h>
#include <Modloader/app/structs/CarryableRigidBody.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/CartBody.h>
#include <Modloader/app/structs/CartPlaceholder__Array.h>
#include <Modloader/app/structs/CartPlatformMovement.h>
#include <Modloader/app/structs/CartographerEntity.h>
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Array.h>
#include <Modloader/app/structs/ChangeStateOnCondition.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterBase.h>
#include <Modloader/app/structs/CharacterController.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CheckpointPlugin.h>
#include <Modloader/app/structs/CircleCollider2D.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/CleverMenuItemGroup__Array.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/CleverMenuItemTooltip.h>
#include <Modloader/app/structs/CleverMenuItem__Array.h>
#include <Modloader/app/structs/CollapsingPlatform.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/CollisionEventHandler.h>
#include <Modloader/app/structs/CollisionEventHandler__Array.h>
#include <Modloader/app/structs/CollisionSoundSource.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/ConfigurableJoint__Array.h>
#include <Modloader/app/structs/ContrastVignette.h>
#include <Modloader/app/structs/ControlSettingsItem.h>
#include <Modloader/app/structs/ControllerShakeAnimatorEntity.h>
#include <Modloader/app/structs/CooldownDecorator.h>
#include <Modloader/app/structs/CounterstrikeEffectPositionOverride.h>
#include <Modloader/app/structs/CrabEntity.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour.h>
#include <Modloader/app/structs/CrossSceneReferenceExportData__Array.h>
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry.h>
#include <Modloader/app/structs/CrossSceneReferenceImportData__Array.h>
#include <Modloader/app/structs/CrushPlayer.h>
#include <Modloader/app/structs/CutsceneState.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/DamageTextSpawner.h>
#include <Modloader/app/structs/DealDamageOverTime.h>
#include <Modloader/app/structs/DebugPlayerTeleporter.h>
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum.h>
#include <Modloader/app/structs/Dropdown.h>
#include <Modloader/app/structs/Enemy.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/EnergyOrbPickup.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode__Array.h>
#include <Modloader/app/structs/EntityHealthProvider.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/EntityPlaceholder__Array.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Array.h>
#include <Modloader/app/structs/EntityReactions.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/EntityTargetting__Array.h>
#include <Modloader/app/structs/EntityTask__Array.h>
#include <Modloader/app/structs/Entity__Array.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#include <Modloader/app/structs/EulerRotationAnimator.h>
#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/EventTriggerGameplayAnimator__Array.h>
#include <Modloader/app/structs/ExpOrbPickup.h>
#include <Modloader/app/structs/FPSAiming.h>
#include <Modloader/app/structs/FPSCounter.h>
#include <Modloader/app/structs/FadingSound__Array.h>
#include <Modloader/app/structs/FallingRocksArea__Array.h>
#include <Modloader/app/structs/FixedJoint__Array.h>
#include <Modloader/app/structs/FlameExtinguisher.h>
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/FlipPlantLogic__Array.h>
#include <Modloader/app/structs/FloatCurveAnimator.h>
#include <Modloader/app/structs/FoxGrabber_Receiver.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/GUILayer.h>
#include <Modloader/app/structs/GUIText.h>
#include <Modloader/app/structs/GUITexture.h>
#include <Modloader/app/structs/GameMapObjectiveIcons.h>
#include <Modloader/app/structs/GameMapPins.h>
#include <Modloader/app/structs/GameMapSavePedestals.h>
#include <Modloader/app/structs/GameMapShowObjective.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObjectActivator.h>
#include <Modloader/app/structs/GameplayToCinematicEntity.h>
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour.h>
#include <Modloader/app/structs/GetWorldEventCondition.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/GoThroughPlatform.h>
#include <Modloader/app/structs/GoThroughPlatformHandler.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/GravityToGroundSurface.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/HasAbilityCondition.h>
#include <Modloader/app/structs/HasShardCondition.h>
#include <Modloader/app/structs/HealthBar.h>
#include <Modloader/app/structs/HealthBarSpawner.h>
#include <Modloader/app/structs/HealthController.h>
#include <Modloader/app/structs/HierarchyDebugMenu.h>
#include <Modloader/app/structs/HitReactionBehaviour.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IBehaviourNode__Array.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDamageResolver.h>
#include <Modloader/app/structs/IDashAtackable.h>
#include <Modloader/app/structs/IDialogInteractionTransition__Array.h>
#include <Modloader/app/structs/IDialogNode__Array.h>
#include <Modloader/app/structs/IFlameHandler.h>
#include <Modloader/app/structs/IGhostProximityRecordable.h>
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/IInstantiateObserver__Array.h>
#include <Modloader/app/structs/IInteractionNode__Array.h>
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/IKTargetBehaviour.h>
#include <Modloader/app/structs/IK__Array.h>
#include <Modloader/app/structs/IKuReceiver__Array.h>
#include <Modloader/app/structs/ILaunchable.h>
#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/IModularZoneModifier__Array.h>
#include <Modloader/app/structs/IMontageEventProvider.h>
#include <Modloader/app/structs/IPhysicsAttachable.h>
#include <Modloader/app/structs/IPhysicsTriggerHandler.h>
#include <Modloader/app/structs/IPinnable.h>
#include <Modloader/app/structs/IPlatformMovement.h>
#include <Modloader/app/structs/IPrewarmable__Array.h>
#include <Modloader/app/structs/IPuppet.h>
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/IRecordable__Array.h>
#include <Modloader/app/structs/IRenderPostprocessor__Array.h>
#include <Modloader/app/structs/ISuspendable__Array.h>
#include <Modloader/app/structs/ISwordAttackable.h>
#include <Modloader/app/structs/ITeleportBeaconAttackable.h>
#include <Modloader/app/structs/IThrowable.h>
#include <Modloader/app/structs/ITimeSlicedPostEnableObserver__Array.h>
#include <Modloader/app/structs/ITimelineParentOwner.h>
#include <Modloader/app/structs/ITrapAttackable.h>
#include <Modloader/app/structs/ITrialHandler.h>
#include <Modloader/app/structs/IWaterDashAtackable.h>
#include <Modloader/app/structs/IconPlacementScaler.h>
#include <Modloader/app/structs/IgnoreGoThroughPlatforms.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/Image_1.h>
#include <Modloader/app/structs/Image__Array.h>
#include <Modloader/app/structs/InheritVelocityPlatform.h>
#include <Modloader/app/structs/InputPlugin.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionTarget.h>
#include <Modloader/app/structs/InteractionTarget__Array.h>
#include <Modloader/app/structs/InteractionTrigger.h>
#include <Modloader/app/structs/InteractiveMessageBox.h>
#include <Modloader/app/structs/InventoryAbilityItem.h>
#include <Modloader/app/structs/InventoryItemHelpText.h>
#include <Modloader/app/structs/InventoryScreenItem.h>
#include <Modloader/app/structs/Joint.h>
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour__Array.h>
#include <Modloader/app/structs/KwolokBossEntity.h>
#include <Modloader/app/structs/KwolokBossTendril.h>
#include <Modloader/app/structs/Larva.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShooterMinibossPathMover.h>
#include <Modloader/app/structs/LeaderboardsB.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/LegacyBabySandWorm.h>
#include <Modloader/app/structs/LegacyCollapsingPlatform.h>
#include <Modloader/app/structs/LegacyDamageReciever.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/LegacyEntity__Array.h>
#include <Modloader/app/structs/LegacyGetAbilityPedestal.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator.h>
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger.h>
#include <Modloader/app/structs/LegacyRespawner.h>
#include <Modloader/app/structs/LegacySeinLandOnTrigger.h>
#include <Modloader/app/structs/LegacyTimedTrigger.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/LegacyTranslateAnimator.h>
#include <Modloader/app/structs/LegacyTransparancyAnimator.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/LegacyTrigger.h>
#include <Modloader/app/structs/Light.h>
#include <Modloader/app/structs/LightCanvas__Array.h>
#include <Modloader/app/structs/LightPlatform.h>
#include <Modloader/app/structs/LightTorch.h>
#include <Modloader/app/structs/LimbIK.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/LineMesh.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/ListOfCollidedObjects.h>
#include <Modloader/app/structs/List_1_CheckpointRestrictZone_.h>
#include <Modloader/app/structs/List_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/List_1_IRenderPostprocessor_.h>
#include <Modloader/app/structs/List_1_LaserShieldDamageReceiver_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ShowTextEntity_.h>
#include <Modloader/app/structs/List_1_Moon_Utilities_ObjectDisabler_.h>
#include <Modloader/app/structs/List_1_NewSetupStateController_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_UberWaterControl_.h>
#include <Modloader/app/structs/List_1_UnityEngine_CanvasGroup_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Canvas_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_BaseInputModule_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MeshFilter_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MeshRenderer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rigidbody_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Mask_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_RectMask2D_.h>
#include <Modloader/app/structs/List_1_VerletStructure_.h>
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour.h>
#include <Modloader/app/structs/Locomotion__Array.h>
#include <Modloader/app/structs/LoremasterUISlot.h>
#include <Modloader/app/structs/MantisDeathReactionBehaviour.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour.h>
#include <Modloader/app/structs/MantisGrayboxEntity.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour.h>
#include <Modloader/app/structs/MapmakerUIItem.h>
#include <Modloader/app/structs/Mask_1.h>
#include <Modloader/app/structs/MeleeComboMove__Array.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MemoryUISlot.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/MeshCollider__Array.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MeshFilter__Array.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MinerFallReactionBehaviour.h>
#include <Modloader/app/structs/MinerHitReactionBehaviour.h>
#include <Modloader/app/structs/MistTorch.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimator__Array.h>
#include <Modloader/app/structs/MoonCharacterController.h>
#include <Modloader/app/structs/MoonDoorWithSlots.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal.h>
#include <Modloader/app/structs/MoonIconRenderer__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI.h>
#include <Modloader/app/structs/MoonTextMeshRenderer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/MortarWormEnemy.h>
#include <Modloader/app/structs/MoveEventWindowAnimator__Array.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour.h>
#include <Modloader/app/structs/MudkisserHitReactionBehaviour.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/NPCEventTriggerAnimator__Array.h>
#include <Modloader/app/structs/NPCMessageBox.h>
#include <Modloader/app/structs/NPCMessageBoxModifier.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/NickHitReactionBehaviour.h>
#include <Modloader/app/structs/NightBerry.h>
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger.h>
#include <Modloader/app/structs/NonEdgeClamberble.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/OrbSpawner__Array.h>
#include <Modloader/app/structs/OriHeadIk.h>
#include <Modloader/app/structs/OverlapPlatformActivator.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystemAnimator_1__Array.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlatformMovementPortalVisitor.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/PlayerInventory.h>
#include <Modloader/app/structs/PointerUIBase.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/Polygon_1__Array.h>
#include <Modloader/app/structs/Poser.h>
#include <Modloader/app/structs/PowerFuse__Array.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/ProjectileDamageDealer.h>
#include <Modloader/app/structs/ProjectilePoisonousWaterTrail.h>
#include <Modloader/app/structs/ProtectiveLightRadial.h>
#include <Modloader/app/structs/PushPullBlock.h>
#include <Modloader/app/structs/PushPullBlockTest.h>
#include <Modloader/app/structs/QuestItemReward.h>
#include <Modloader/app/structs/QuestItemUI.h>
#include <Modloader/app/structs/RaceData.h>
#include <Modloader/app/structs/RaceHandler.h>
#include <Modloader/app/structs/RaceMenuScreenUISlot.h>
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/RammingEnemy.h>
#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#include <Modloader/app/structs/Recoil.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/RespawningPlaceholder__Array.h>
#include <Modloader/app/structs/ReverseSceneLoadingZone.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rigidbody2D.h>
#include <Modloader/app/structs/RigidbodyInertiaModifier.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/RotationLimit.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/SandwormHitReaction.h>
#include <Modloader/app/structs/ScaleAnimatorEntity.h>
#include <Modloader/app/structs/ScaleAxisAnimator.h>
#include <Modloader/app/structs/ScaleToTextBox.h>
#include <Modloader/app/structs/ScenarioRoot.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/SeeSeinTrigger.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinController.h>
#include <Modloader/app/structs/SeinController3D.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/SeinDoorHandler.h>
#include <Modloader/app/structs/SeinLandOnTrigger.h>
#include <Modloader/app/structs/SeinLeafParticles.h>
#include <Modloader/app/structs/SeinPlatformMovement.h>
#include <Modloader/app/structs/SendMessageOptions__Enum.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/ShopkeeperUIItem.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity.h>
#include <Modloader/app/structs/SimpleFPSController.h>
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour.h>
#include <Modloader/app/structs/SkeetoHitReaction.h>
#include <Modloader/app/structs/SkeletonGizmo.h>
#include <Modloader/app/structs/SkillItem.h>
#include <Modloader/app/structs/SkillUpgradeShopUIItem.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/SnapTrapEatCounter.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SpellUIBindingItem.h>
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/SphereCollider__Array.h>
#include <Modloader/app/structs/SpiderBatLocomotion.h>
#include <Modloader/app/structs/SpiderBatPlatformMovement.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/SpiderlingFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/SpiritGrenade.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector.h>
#include <Modloader/app/structs/SpiritShardShopUIItem.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket__Array.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/StartLoopEndEffect.h>
#include <Modloader/app/structs/StatUISlot.h>
#include <Modloader/app/structs/StatisticianEntity.h>
#include <Modloader/app/structs/SteepWall.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/SwarmAllowedArea.h>
#include <Modloader/app/structs/SwarmFollowPathBehaviour.h>
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/TentacleEntity.h>
#include <Modloader/app/structs/TentacleHitReaction.h>
#include <Modloader/app/structs/TentacleInterestPoint.h>
#include <Modloader/app/structs/TentaclePhysicsPostprocess.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextMesh.h>
#include <Modloader/app/structs/TextMeshCylinderSettings.h>
#include <Modloader/app/structs/TextMeshCylinderSettings_1.h>
#include <Modloader/app/structs/TextMeshTorusSettings.h>
#include <Modloader/app/structs/TextMeshTorusSettings_1.h>
#include <Modloader/app/structs/Text_1.h>
#include <Modloader/app/structs/TimedActionExecuter__Array.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/Toggle.h>
#include <Modloader/app/structs/TrailPathProvider.h>
#include <Modloader/app/structs/TrailRenderer.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TransformAnimator.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/TriggerEventBroadcaster.h>
#include <Modloader/app/structs/TurbulenceManager.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberExplosionActor.h>
#include <Modloader/app/structs/UberGhostTrail.h>
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/UberPostAnimator.h>
#include <Modloader/app/structs/UberPostProcess.h>
#include <Modloader/app/structs/UberPostProcessAnimator.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/UberShaderComponent__Array.h>
#include <Modloader/app/structs/UberShaderRuntimeRenderOrder.h>
#include <Modloader/app/structs/UberStateVisualizationMenu.h>
#include <Modloader/app/structs/UberStateVolitileOverrideAnimator__Array.h>
#include <Modloader/app/structs/UberTextureSettingsAnimator.h>
#include <Modloader/app/structs/UberTransformFollow.h>
#include <Modloader/app/structs/UberWaterControl.h>
#include <Modloader/app/structs/UberWaterForceActor.h>
#include <Modloader/app/structs/UberWaterTop.h>
#include <Modloader/app/structs/VRInteractionController.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#include <Modloader/app/structs/Vitals.h>
#include <Modloader/app/structs/VitalsHealthProvider.h>
#include <Modloader/app/structs/VolatileDebugMenuLog.h>
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WaterInteraction.h>
#include <Modloader/app/structs/WaterPoisonTrail.h>
#include <Modloader/app/structs/WaterZone.h>
#include <Modloader/app/structs/WeaponMasterEntity.h>
#include <Modloader/app/structs/WindArea.h>
#include <Modloader/app/structs/WorldEventsOnAwake.h>
#include <Modloader/app/structs/WorldMapOverworldArea.h>
#include <Modloader/app/structs/WorldMapOverworldArea__Array.h>
#include <Modloader/app/structs/WormHole__Array.h>
#include <Modloader/app/structs/WriteOutTextBox.h>
#include <Modloader/app/structs/WwiseBootstrapConfiguration.h>

namespace app::classes::UnityEngine::Component {
    IL2CPP_REGISTER_METHOD(0x02428DC0, void, ctor, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02428E50, app::Transform*, get_transformNative, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02428EA0, app::GameObject*, get_gameObjectNative, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_transform, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_gameObject, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02428EF0, bool, HasComponent_1, app::Component_1* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02428F50, app::Component_1*, GetComponent_1, app::Component_1* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02429010, void, GetComponentFastPath, app::Component_1* this_ptr, app::Type* type, void* one_further_than_result_value)
    IL2CPP_REGISTER_METHOD(0x02429080, app::Component_1*, GetComponent_2, app::Component_1* this_ptr, app::String* type)
    IL2CPP_REGISTER_METHOD(0x024290E0, app::Component_1*, GetComponentInChildren_1, app::Component_1* this_ptr, app::Type* t, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02429180, app::Component_1*, GetComponentInChildren_2, app::Component_1* this_ptr, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x02429190, app::Component_1__Array*, GetComponentsInChildren_1, app::Component_1* this_ptr, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x02429220, app::Component_1*, GetComponentInParent_1, app::Component_1* this_ptr, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x024292E0, app::Component_1__Array*, GetComponents_1, app::Component_1* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02429370, void, GetComponentsForListInternal, app::Component_1* this_ptr, app::Type* search_type, app::Object* result_list)
    IL2CPP_REGISTER_METHOD(0x024293E0, void, GetComponents_2, app::Component_1* this_ptr, app::Type* type, app::List_1_UnityEngine_Component_* results)
    IL2CPP_REGISTER_METHOD(0x024293F0, app::String*, get_tag, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024294A0, void, set_tag, app::Component_1* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02429560, bool, CompareTag, app::Component_1* this_ptr, app::String* tag)
    IL2CPP_REGISTER_METHOD(0x02429620, void, SendMessage_1, app::Component_1* this_ptr, app::String* method_name, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02429640, void, SendMessage_2, app::Component_1* this_ptr, app::String* method_name)
    IL2CPP_REGISTER_METHOD(
        0x02429660,
        void,
        SendMessage_3,
        app::Component_1* this_ptr,
        app::String* method_name,
        app::Object* value,
        app::SendMessageOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(0x0156A360, bool, HasComponent_2, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Object*, GetComponent_3, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::Object*, GetComponentInChildren_3, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Object*, GetComponentInChildren_4, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Object__Array*, GetComponentsInChildren_2, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E41A0, void, GetComponentsInChildren_3, app::Component_1* this_ptr, bool include_inactive, app::List_1_System_Object_* result)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Object__Array*, GetComponentsInChildren_4, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_5, app::Component_1* this_ptr, app::List_1_System_Object_* results)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::Object*, GetComponentInParent_2, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Object__Array*, GetComponentsInParent_1, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E41A0, void, GetComponentsInParent_2, app::Component_1* this_ptr, bool include_inactive, app::List_1_System_Object_* results)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Object__Array*, GetComponentsInParent_3, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E40C0, void, GetComponents_3, app::Component_1* this_ptr, app::List_1_System_Object_* results)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::Object__Array*, GetComponents_4, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GUILayer*, GetComponent_4, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::CrossSceneReferenceExportData__Array*, GetComponents_5, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::CrossSceneReferenceImportData__Array*, GetComponents_6, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Renderer*, GetComponent_5, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TrailPathProvider*, GetComponent_6, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MeshFilter*, GetComponent_7, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MeshRenderer*, GetComponent_8, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::BaseInput__Array*, GetComponents_7, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::EventSystem*, GetComponent_9, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E40C0, void, GetComponents_8, app::Component_1* this_ptr, app::List_1_UnityEngine_EventSystems_BaseInputModule_* results)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Camera*, GetComponent_10, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RectTransform*, GetComponent_11, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Graphic*, GetComponent_12, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Canvas*, GetComponent_13, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Toggle*, GetComponentInChildren_5, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::Dropdown*, GetComponentInParent_3, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CanvasRenderer*, GetComponent_14, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E40C0, void, GetComponents_9, app::Component_1* this_ptr, app::List_1_UnityEngine_Component_* results)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_6, app::Component_1* this_ptr, app::List_1_UnityEngine_Component_* results)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInParent_4,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_UnityEngine_Canvas_* results
    )
    IL2CPP_REGISTER_METHOD(0x015E40C0, void, GetComponents_10, app::Component_1* this_ptr, app::List_1_UnityEngine_UI_Mask_* results)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInParent_5,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_UnityEngine_UI_RectMask2D_* results
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Mask_1*, GetComponent_15, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Transform*, GetComponent_16, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Animator*, GetComponent_17, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E40C0, void, GetComponents_11, app::Component_1* this_ptr, app::List_1_UnityEngine_CanvasGroup_* results)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Image*, GetComponent_18, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Rigidbody*, GetComponent_19, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Transform__Array*, GetComponentsInChildren_7, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SkinnedMeshRenderer*, GetComponent_20, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AimIK*, GetComponent_21, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::FullBodyBipedIK*, GetComponent_22, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CharacterBase*, GetComponent_23, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Animator*, GetComponentInChildren_6, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Collider*, GetComponent_24, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AnimatorController3rdPerson*, GetComponent_25, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::FPSAiming*, GetComponent_26, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InteractionSystem*, GetComponent_27, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IK*, GetComponent_28, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Recoil*, GetComponent_29, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Poser*, GetComponent_30, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CharacterController*, GetComponent_31, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RotationLimit*, GetComponent_32, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::VRInteractionController*, GetComponent_33, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Image__Array*, GetComponentsInChildren_8, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::FullBodyBipedIK*, GetComponentInParent_4, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::FullBodyBipedIK*, GetComponentInChildren_7, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InteractionTarget*, GetComponent_34, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Collider__Array*, GetComponentsInChildren_9, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::InteractionTarget__Array*, GetComponentsInChildren_10, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InteractionTrigger*, GetComponent_35, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TriggerEventBroadcaster*, GetComponent_36, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::IK__Array*, GetComponentsInChildren_11, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Rigidbody__Array*, GetComponentsInChildren_12, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Joint*, GetComponent_37, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Animation*, GetComponent_38, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Animation*, GetComponentInChildren_8, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonAnimator__Array*, GetComponentsInChildren_13, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Animator__Array*, GetComponentsInChildren_14, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AnimationMaskNode*, GetComponent_39, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LimbIK*, GetComponent_40, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::SkinnedMeshRenderer__Array*, GetComponentsInChildren_15, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MoonAnimator*, GetComponent_41, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::VerletPhysicsAnimationPostprocess*, GetComponent_42, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::MoonTimeline*, GetComponentInParent_5, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ParticleSystem__Array*, GetComponentsInChildren_16, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MoonTimeline*, GetComponent_43, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ITimelineParentOwner*, GetComponent_44, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IBehaviourNode__Array*, GetComponentsInChildren_17, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IBlackboard*, GetComponent_45, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::IBlackboard*, GetComponentInParent_6, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IInteractionNode__Array*, GetComponentsInChildren_18, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ParticleSystem*, GetComponent_46, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MeshCollider*, GetComponent_47, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SoundHost*, GetComponent_48, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WwiseBootstrapConfiguration*, GetComponent_49, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Collider2D*, GetComponent_50, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SphereCollider*, GetComponent_51, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CircleCollider2D*, GetComponent_52, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Rigidbody2D*, GetComponent_53, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AmplifyColorTriggerProxy*, GetComponent_54, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AmplifyColorTriggerProxy2D*, GetComponent_55, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::BoxCollider*, GetComponent_56, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::BoxCollider2D*, GetComponent_57, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Beautify*, GetComponent_58, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AchievementsStateValidator*, GetComponent_59, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CleverMenuItem*, GetComponent_60, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::BaseAnimator*, GetComponent_61, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MessageBox*, GetComponent_62, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::UberShaderRuntimeRenderOrder*, GetComponentInChildren_9, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AchievementsUIItem*, GetComponent_63, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DamageDealer*, GetComponent_64, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::OrbSpawner*, GetComponentInChildren_10, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ActionSequenceSerializer*, GetComponent_65, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::ActionMethod__Array*, GetComponents_12, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ActionSequence*, GetComponent_66, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::GoThroughPlatformHandler*, GetComponentInChildren_11, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::DebugPlayerTeleporter*, GetComponentInParent_7, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::RespawningPlaceholder__Array*, GetComponentsInChildren_19, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::LegacyEntity__Array*, GetComponentsInChildren_20, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::EntityPlaceholder__Array*, GetComponentsInChildren_21, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Entity__Array*, GetComponentsInChildren_22, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::FadingSound__Array*, GetComponentsInChildren_23, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeinController*, GetComponent_67, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AudioSource*, GetComponent_68, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::PlayerInsideZoneChecker*, GetComponentInChildren_12, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::AnimatedCritter__Array*, GetComponentsInChildren_24, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AreaMapUI*, GetComponent_69, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::AreaMapScrollLimit__Array*, GetComponentsInChildren_25, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::AreaMapCanvasOverlay__Array*, GetComponentsInChildren_26, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AreaMapDebugNavigation*, GetComponent_70, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AreaMapNavigation*, GetComponent_71, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AreaMapIconManager*, GetComponent_72, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IconPlacementScaler*, GetComponent_73, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IPhysicsAttachable*, GetComponent_74, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::FixedJoint__Array*, GetComponents_13, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::IDamageReciever__Array*, GetComponents_14, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Renderer__Array*, GetComponentsInChildren_27, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::TrailRenderer*, GetComponentInChildren_13, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CrabEntity*, GetComponent_75, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DamageOwner*, GetComponent_76, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CharacterPlatformMovement*, GetComponent_77, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::BabyWormDamageDealer*, GetComponentInChildren_14, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::DamageReceiver*, GetComponentInChildren_15, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::BabyWormAnimation*, GetComponent_78, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::BaseAnimator__Array*, GetComponents_15, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::NPCMessageBoxModifier*, GetComponent_79, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::Collider*, GetComponentInChildren_16, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::SoundHost*, GetComponentInChildren_17, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_28,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_UnityEngine_Renderer_* result
    )
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::Collider__Array*, GetComponents_16, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IAttackable*, GetComponent_80, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IBowAttackable*, GetComponent_81, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::ConfigurableJoint__Array*, GetComponents_17, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::HealthController*, GetComponent_82, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Collider__Array*, GetComponentsInChildren_29, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::EntityTargetting*, GetComponentInChildren_18, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::DamageReceiver*, GetComponentInChildren_19, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CleverMenuItemSelectionManager*, GetComponent_83, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DigZone*, GetComponent_84, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CageStructureToolCollider*, GetComponent_85, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CageStructureToolFill*, GetComponent_86, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CameraChaseTargetSpeedRatioController*, GetComponent_87, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Camera__Array*, GetComponentsInChildren_30, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CameraController_1*, GetComponent_88, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MoonRenderPipelineDebugUI*, GetComponent_89, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CrushPlayer*, GetComponent_90, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CapsuleCollider*, GetComponent_91, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CarryableRigidBody*, GetComponent_92, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PushPullBlock*, GetComponent_93, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DestroyWhenOutsideActiveBoundaries*, GetComponent_94, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CartBody*, GetComponent_95, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CartAnimation*, GetComponent_96, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CameraLookAheadController*, GetComponent_97, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Rail*, GetComponent_98, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Enemy*, GetComponent_99, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Cart*, GetComponent_100, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CartPlatformMovement*, GetComponent_101, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::CartPlaceholder__Array*, GetComponentsInChildren_31, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::CartographerEntity*, GetComponentInParent_8, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::NPCMessageBox*, GetComponent_102, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Blackboard*, GetComponentInChildren_20, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::AnimationPlayer*, GetComponentInChildren_21, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::CatAndMouseKuroLandZone__Array*, GetComponentsInChildren_32, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TextMeshCylinderSettings*, GetComponent_103, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TextMeshTorusSettings*, GetComponent_104, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::EnemyEntity*, GetComponent_105, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DamageReceiver*, GetComponent_106, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::EntityTargetting*, GetComponent_107, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::CounterstrikeEffectPositionOverride*, GetComponentInChildren_22, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberTransformFollow*, GetComponent_108, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GravityToGroundSurface*, GetComponent_109, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MoonCharacterController*, GetComponent_110, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SteepWall*, GetComponent_111, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Locomotion*, GetComponent_112, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MoveEventWindowAnimator__Array*, GetComponentsInChildren_33, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::MoonAnimator*, GetComponentInChildren_23, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InputPlugin*, GetComponent_113, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TrailRenderer*, GetComponent_114, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Renderer__Array*, GetComponentsInChildren_34, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::CleverMenuItem__Array*, GetComponentsInChildren_35, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CleverMenuItemTooltip*, GetComponent_115, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CleverMenuItemGroup*, GetComponent_116, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::CageStructureTool*, GetComponentInChildren_24, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::DigZone*, GetComponentInChildren_25, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CollapsingPlatform*, GetComponent_117, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GameObjectActivator*, GetComponent_118, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::VisibleOnWorldMap*, GetComponent_119, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ListOfCollidedObjects*, GetComponent_120, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::SceneRoot*, GetComponentInParent_9, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::Component_1__Array*, GetComponents_18, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeinCharacter*, GetComponent_121, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Renderer*, GetComponentInChildren_26, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ControlSettingsItem*, GetComponent_122, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::CrabHitReactionBehaviour*, GetComponentInChildren_27, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ReactionFallingBehaviour*, GetComponentInChildren_28, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_36,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* result
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::BabyCrabEntity*, GetComponent_123, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CutsceneState*, GetComponent_124, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Polygon_1*, GetComponent_125, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PlatformMovement*, GetComponent_126, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::TextBox*, GetComponentInChildren_29, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IDamageReciever*, GetComponent_127, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::UberStateVolitileOverrideAnimator__Array*, GetComponentsInChildren_37, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::HierarchyDebugMenu*, GetComponent_128, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberStateVisualizationMenu*, GetComponent_129, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::VolatileDebugMenuLog*, GetComponent_130, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::DamageDealer*, GetComponentInChildren_30, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PrefabSpawner*, GetComponent_131, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_38, app::Component_1* this_ptr, app::List_1_UnityEngine_Rigidbody_* results)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_39, app::Component_1* this_ptr, app::List_1_UnityEngine_MeshFilter_* results)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_40, app::Component_1* this_ptr, app::List_1_CheckpointRestrictZone_* results)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_41, app::Component_1* this_ptr, app::List_1_VerletStructure_* results)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ActionWithDuration*, GetComponent_132, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ActionMethod*, GetComponent_133, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::DepthOfFieldController*, GetComponentInChildren_31, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IDialogNode__Array*, GetComponentsInChildren_42, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IDialogInteractionTransition__Array*, GetComponentsInChildren_43, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_44, app::Component_1* this_ptr, app::List_1_Moon_Timeline_ShowTextEntity_* results)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeinDamageReciever*, GetComponent_134, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CageStructureTool*, GetComponent_135, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FF5DA0,
        app::UberStateVolitileOverrideAnimator__Array*,
        GetComponentsInChildren_45,
        app::Component_1* this_ptr,
        bool include_inactive
    )
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Collider*, GetComponentInChildren_32, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::LegacyAnimator__Array*, GetComponentsInChildren_46, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::PickupBase*, GetComponentInChildren_33, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeeSeinTrigger*, GetComponent_136, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Vitals*, GetComponent_137, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::Cart*, GetComponentInParent_10, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MoonTimeline__Array*, GetComponentsInChildren_47, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::GroundEntityLocomotion*, GetComponentInChildren_34, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::Vitals*, GetComponentInChildren_35, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::OrbSpawner__Array*, GetComponentsInChildren_48, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DisableGameObjectWhenOutOfFrustrum*, GetComponent_138, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CharacterAnimationSystem*, GetComponent_139, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Sensor*, GetComponentInChildren_36, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::TentaclePhysicsPostprocess*, GetComponentInChildren_37, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::HitReactionBehaviour*, GetComponentInChildren_38, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::EntityReactionBehaviour__Array*, GetComponentsInChildren_49, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Entity*, GetComponent_140, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SceneRoot*, GetComponent_141, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::EquipmentUIInventoryItem*, GetComponent_142, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpellUIBindingItem*, GetComponent_143, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpellUIItem*, GetComponent_144, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GUIText*, GetComponent_145, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GUITexture*, GetComponent_146, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::FallingRocksArea__Array*, GetComponentsInChildren_50, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WaterZone*, GetComponent_147, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WaterInteraction*, GetComponent_148, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyTransparencyAnimator*, GetComponent_149, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IHoldable*, GetComponent_150, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::OrbSpawner*, GetComponent_151, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::SeinCharacter*, GetComponentInParent_11, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::ScaleAxisAnimator*, GetComponentInChildren_39, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpriteAnimator*, GetComponent_152, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::SeeSeinTrigger*, GetComponentInChildren_40, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::Rigidbody__Array*, GetComponents_19, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::FoxGrabber_Receiver*, GetComponentInParent_12, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IPinnable*, GetComponent_153, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::AreaMapIcon*, GetComponentInChildren_41, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::AreaMapUI*, GetComponentInChildren_42, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GameMapShowObjective*, GetComponent_154, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GameMapObjectiveIcons*, GetComponent_155, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GameMapSavePedestals*, GetComponent_156, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GameMapPins*, GetComponent_157, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MoonTextMeshRenderer*, GetComponent_158, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::EnemyEntity*, GetComponentInParent_13, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::BreakableWallLogic*, GetComponentInParent_14, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::BreakableWallVisuals*, GetComponentInParent_15, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GasballAirMoveTimelineBehaviour*, GetComponent_159, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::CharacterAnimationSystem*, GetComponentInChildren_43, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IGhostProximityRecordable*, GetComponent_160, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SpikeSlugFallReactionBehaviour*, GetComponentInChildren_44, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::IPuppet*, GetComponentInParent_16, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IRecordable__Array*, GetComponentsInChildren_51, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LightPlatform*, GetComponent_161, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ICharacter*, GetComponentInChildren_45, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Rope*, GetComponent_162, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AutoRotate*, GetComponent_163, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GoThroughPlatform*, GetComponent_164, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LineRenderer*, GetComponent_165, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::VitalsHealthProvider*, GetComponent_166, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyTimelineSequence*, GetComponent_167, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MeleeWeapon*, GetComponent_168, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LightTorch*, GetComponent_169, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::NightBerry*, GetComponent_170, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MistTorch*, GetComponent_171, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::HornBugHitReactionBehaviour*, GetComponentInChildren_46, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::BugHornEntity*, GetComponent_172, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CooldownDecorator*, GetComponent_173, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IInstantiateObserver__Array*, GetComponentsInChildren_52, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InventoryAbilityItem*, GetComponent_174, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InventoryItemHelpText*, GetComponent_175, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InventoryScreenItem*, GetComponent_176, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::FlipPlantLogic__Array*, GetComponentsInChildren_53, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyTransparancyAnimator*, GetComponent_177, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0156A360, bool, HasComponent_3, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Sensor*, GetComponent_178, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::DamageDealer*, GetComponentInChildren_47, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(
        0x02FF5DA0,
        app::KamikazeSkeetoDiveAttackBehaviour__Array*,
        GetComponentsInChildren_54,
        app::Component_1* this_ptr,
        bool include_inactive
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyTranslateAnimator*, GetComponent_179, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::NewSetupStateController*, GetComponentInChildren_48, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::IDamageReciever*, GetComponentInChildren_49, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IKuReceiver__Array*, GetComponentsInChildren_55, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IDashAtackable*, GetComponent_180, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GoThroughPlatformHandler*, GetComponent_181, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GlowChargeEffect*, GetComponent_182, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CollisionEventHandler*, GetComponent_183, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::KwolokBossEntity*, GetComponent_184, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ProjectilePoisonousWaterTrail*, GetComponent_185, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::OrbSpawner*, GetComponentInChildren_50, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::KwolokBossTendril*, GetComponent_186, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::VerletStructure__Array*, GetComponentsInChildren_56, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ScaleAxisAnimator*, GetComponentInChildren_51, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ScaleAnimatorEntity*, GetComponentInChildren_52, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_57,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_UnityEngine_MeshRenderer_* result
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DamageTextSpawner*, GetComponent_187, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_58,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_LaserShieldDamageReceiver_* result
    )
    IL2CPP_REGISTER_METHOD(0x0157C470, app::DamageOwner*, GetComponentInChildren_53, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::LaserShieldRotationController*, GetComponentInChildren_54, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::LaserShooterMinibossPathMover*, GetComponentInChildren_55, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ProjectileDamageDealer*, GetComponent_188, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ILaunchable*, GetComponent_189, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ILever*, GetComponent_190, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::LegacyAnimator__Array*, GetComponents_20, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyBabySandWorm*, GetComponent_191, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyCollapsingPlatform*, GetComponent_192, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::SeinDoorHandler*, GetComponentInChildren_56, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_59, app::Component_1* this_ptr, app::List_1_Moon_ISuspendable_* results)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::EntityHealthProvider*, GetComponent_193, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberTextureSettingsAnimator*, GetComponent_194, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyMaterialColorGradientAnimator*, GetComponent_195, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::Renderer__Array*, GetComponents_21, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberGhostTrail*, GetComponent_196, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TextMesh*, GetComponent_197, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ConfigurableJoint*, GetComponent_198, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AttachPrefabsToLiannaTongue*, GetComponent_199, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyDamageReciever*, GetComponent_200, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::UberShaderComponent__Array*, GetComponentsInChildren_60, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::Renderer*, GetComponentInChildren_57, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::LightCanvas__Array*, GetComponentsInChildren_61, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::LightCanvas__Array*, GetComponentsInChildren_62, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LineMesh*, GetComponent_201, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::LizardHitReactionBehaviour*, GetComponentInChildren_58, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::AnimationPlayer*, GetComponentInChildren_59, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LizardEntity*, GetComponent_202, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeinPlatformMovement*, GetComponent_203, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::MoonTimeline*, GetComponentInChildren_60, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::EventTriggerAnimator*, GetComponentInChildren_61, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LoremasterUISlot*, GetComponent_204, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MantisFallReactionBehaviour*, GetComponentInChildren_62, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MantisHitReactionBehaviour*, GetComponentInChildren_63, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IgnoreGoThroughPlatforms*, GetComponent_205, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MantisDeathReactionBehaviour*, GetComponentInChildren_64, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::MantisGrayboxEntity*, GetComponentInParent_17, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::PlatformMovement*, GetComponentInChildren_65, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MapmakerUIItem*, GetComponent_206, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SkillUpgradeShopUIItem*, GetComponent_207, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TextBox*, GetComponent_208, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::Entity*, GetComponentInParent_18, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoveEventWindowAnimator__Array*, GetComponentsInChildren_63, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ISwordAttackable*, GetComponent_209, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyEntity*, GetComponent_210, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::NightCrawlerRevealTorchTrigger*, GetComponent_211, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MeleeComboMove__Array*, GetComponentsInChildren_64, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MeleeComboMove__Array*, GetComponentsInChildren_65, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Flammable*, GetComponent_212, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonIconRenderer__Array*, GetComponentsInChildren_66, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::MessageBox*, GetComponentInChildren_66, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InteractiveMessageBox*, GetComponent_213, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WriteOutTextBox*, GetComponent_214, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::TextBox*, GetComponentInChildren_67, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MinerFallReactionBehaviour*, GetComponentInChildren_68, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MinerHitReactionBehaviour*, GetComponentInChildren_69, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::IModularZoneModifier__Array*, GetComponents_22, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::FloatCurveAnimator*, GetComponent_215, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IMontageEventProvider*, GetComponent_216, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::BaseAnimator__Array*, GetComponentsInChildren_67, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_68,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_UnityEngine_ParticleSystem_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_69,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_Moon_Utilities_ObjectDisabler_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_70,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_NewSetupStateController_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_71,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_UberWaterControl_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x015E41A0,
        void,
        GetComponentsInChildren_72,
        app::Component_1* this_ptr,
        bool include_inactive,
        app::List_1_EntityPlaceholder_* result
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeinLeafParticles*, GetComponent_217, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::BlockDamageInterruption__Array*, GetComponentsInChildren_73, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::Brain*, GetComponentInParent_19, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::CancelableAnimator__Array*, GetComponentsInChildren_74, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DealDamageOverTime*, GetComponent_218, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LimitedLifetime*, GetComponent_219, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::PlatformMovement*, GetComponentInParent_20, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::DamageOwner*, GetComponentInChildren_70, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SuspendWhenOutOfFrustrum*, GetComponent_220, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::HealthBarSpawner*, GetComponentInChildren_71, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::HealthBar*, GetComponentInChildren_72, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::Sensor*, GetComponentInChildren_73, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::BehaviourTree*, GetComponentInChildren_74, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Locomotion__Array*, GetComponentsInChildren_75, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::EntityTask__Array*, GetComponentsInChildren_76, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::EntityReactions*, GetComponentInChildren_75, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::BaseNPC*, GetComponentInChildren_76, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::DamageDealer__Array*, GetComponentsInChildren_77, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::EntityBehaviourNode__Array*, GetComponentsInChildren_78, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::IPrewarmable__Array*, GetComponentsInChildren_79, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::FlameExtinguisher*, GetComponent_221, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IFlameHandler*, GetComponent_222, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Projectile*, GetComponent_223, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiritGrenade*, GetComponent_224, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::AsymLocomotionGroundMoveBehaviour*, GetComponentInChildren_77, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(
        0x0157C470,
        app::LocomotionGroundMoveTimelineBehaviour*,
        GetComponentInChildren_78,
        app::Component_1* this_ptr,
        bool include_inactive
    )
    IL2CPP_REGISTER_METHOD(0x0157C350, app::CharacterPlatformMovement*, GetComponentInChildren_79, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::SkinnedMeshRenderer*, GetComponentInChildren_80, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::CancelableAnimator__Array*, GetComponentsInChildren_80, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::PlayerInsideZoneChecker__Array*, GetComponentsInChildren_81, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::IRenderPostprocessor__Array*, GetComponents_23, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E40C0, void, GetComponents_24, app::Component_1* this_ptr, app::List_1_IRenderPostprocessor_* results)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Light*, GetComponent_225, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::LimitedLifetime*, GetComponentInChildren_81, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FF5DA0,
        app::ITimeSlicedPostEnableObserver__Array*,
        GetComponentsInChildren_82,
        app::Component_1* this_ptr,
        bool include_inactive
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PhysicalSystemManager*, GetComponent_226, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::DamageOwner*, GetComponentInParent_21, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IKTargetBehaviour*, GetComponent_227, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonTimeline__Array*, GetComponentsInChildren_83, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonTimeline__Array*, GetComponentsInParent_6, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MoonTextMeshRenderer*, GetComponentInChildren_82, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::ScaleToTextBox*, GetComponentInChildren_83, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MoonTimeline__Array*, GetComponentsInParent_7, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Image_1*, GetComponentInChildren_84, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Text_1*, GetComponentInChildren_85, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Text_1*, GetComponent_228, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TextMeshCylinderSettings_1*, GetComponent_229, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TextMeshTorusSettings_1*, GetComponent_230, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberShaderComponent*, GetComponent_231, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::DamageReceiver__Array*, GetComponentsInChildren_84, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SkinnedMeshRenderer__Array*, GetComponentsInChildren_85, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::EntityPlaceholderScalingLink*, GetComponent_232, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Flammable*, GetComponentInChildren_86, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonTrail__Array*, GetComponentsInChildren_86, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AcidBlob*, GetComponent_233, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::SpriteAnimator*, GetComponentInChildren_87, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::InheritVelocityPlatform*, GetComponent_234, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MudkisserFallReactionBehaviour*, GetComponentInChildren_88, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MudkisserHitReactionBehaviour*, GetComponentInChildren_89, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::CancelableAnimator*, GetComponentInChildren_90, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MeshFilter__Array*, GetComponentsInChildren_87, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MeshCollider__Array*, GetComponentsInChildren_88, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::SphereCollider__Array*, GetComponentsInChildren_89, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::BoxCollider__Array*, GetComponentsInChildren_90, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::CapsuleCollider__Array*, GetComponentsInChildren_91, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::NickHitReactionBehaviour*, GetComponentInChildren_91, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::Animator*, GetComponentInChildren_92, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyPlayerCollisionTrigger*, GetComponent_235, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::LeaderboardsB*, GetComponentInParent_22, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::CleverMenuItemGroup__Array*, GetComponentsInChildren_92, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::EnergyOrbPickup*, GetComponentInChildren_93, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::OverlapPlatformActivator*, GetComponent_236, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::FPSCounter*, GetComponent_237, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PetrifiedOwlBossEntity*, GetComponent_238, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AnimationPostprocess*, GetComponent_239, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PetrifiedOwlFeedingGroundHideZone*, GetComponent_240, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RigidbodyInertiaModifier*, GetComponent_241, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::ICameraFrustumSuspendable__Array*, GetComponentsInChildren_93, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IPushable*, GetComponent_242, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Larva*, GetComponent_243, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PlayerInsideZoneChecker*, GetComponent_244, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::PowerFuse__Array*, GetComponentsInChildren_94, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::CollisionEventHandler__Array*, GetComponentsInChildren_95, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyTimedTrigger*, GetComponent_245, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CollisionSoundSource*, GetComponent_246, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::Rigidbody*, GetComponentInParent_23, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::QuestItemUI*, GetComponent_247, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::NPCEntity*, GetComponentInParent_24, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ShowFixedTimeTextEntity*, GetComponentInChildren_94, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::QuestItemReward*, GetComponent_248, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::NPCEventTriggerAnimator__Array*, GetComponentsInChildren_96, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ExpOrbPickup*, GetComponent_249, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RaceMenuScreenUISlot*, GetComponent_250, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::MemoryUISlot*, GetComponent_251, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ITrialHandler*, GetComponentInChildren_95, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::SoundHost*, GetComponentInParent_25, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RammingEnemy*, GetComponent_252, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CheckpointPlugin*, GetComponent_253, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::DestroyOnRestoreCheckpoint*, GetComponent_254, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MessageBox*, GetComponentInChildren_96, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacyTrigger*, GetComponent_255, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PushPullBlockTest*, GetComponent_256, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SandwormHitReaction*, GetComponentInChildren_97, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::VerletPhysicsAnimationPostprocess*, GetComponentInChildren_98, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::DamageDealer*, GetComponentInParent_26, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WaterPoisonTrail*, GetComponent_257, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SandWormLocomotion*, GetComponent_258, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GetWorldEventCondition*, GetComponent_259, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::RaceData*, GetComponentInParent_27, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SceneSettingsComponent*, GetComponent_260, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CrossSceneReferenceExportRegistry*, GetComponent_261, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::LegacyRespawner*, GetComponentInChildren_99, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Rigidbody*, GetComponentInChildren_100, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::EntityTargetting__Array*, GetComponentsInChildren_97, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CameraShake*, GetComponent_262, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PlatformMovementPortalVisitor*, GetComponent_263, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::SeinController3D*, GetComponentInChildren_101, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PerspectiveRotationAdjustment*, GetComponent_264, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::OriHeadIk*, GetComponentInChildren_102, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IPhysicsTriggerHandler*, GetComponent_265, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::ReverseSceneLoadingZone*, GetComponentInChildren_103, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SeinLandOnTrigger*, GetComponent_266, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::LegacySeinLandOnTrigger*, GetComponent_267, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::NonEdgeClamberble*, GetComponent_268, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::ProtectiveLightRadial*, GetComponentInChildren_104, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::StartLoopEndEffect*, GetComponent_269, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GrabbableSurface*, GetComponent_270, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IThrowable*, GetComponent_271, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WorldEventsOnAwake*, GetComponent_272, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::GrabbableSurface*, GetComponentInParent_28, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::EulerRotationAnimator*, GetComponentInParent_29, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::CameraShakeAnimator*, GetComponentInChildren_105, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::ControllerShakeAnimatorEntity*, GetComponentInChildren_106, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IWaterDashAtackable*, GetComponent_273, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ISuspendable__Array*, GetComponentsInChildren_98, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::EventTriggerAnimator*, GetComponentInChildren_107, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::TimelineEventTrigger*, GetComponentInChildren_108, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::AttachToRope*, GetComponent_274, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ShopkeeperUIItem*, GetComponent_275, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::ParticleSystemAnimator_1__Array*, GetComponents_25, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SkeetoFallingReactionBehaviour*, GetComponentInChildren_109, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SkeetoHitReaction*, GetComponentInChildren_110, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SkillItem*, GetComponent_276, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::Transform__Array*, GetComponentsInChildren_99, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(
        0x02FF5DA0,
        app::EventTriggerGameplayAnimator__Array*,
        GetComponentsInChildren_100,
        app::Component_1* this_ptr,
        bool include_inactive
    )
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ScenarioRoot*, GetComponent_277, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SnapTrapEatCounter*, GetComponent_278, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SneezeSlugHitReactionBehaviour*, GetComponentInChildren_111, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IPlatformMovement*, GetComponent_279, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MoonGetAbilityPedestal*, GetComponentInChildren_112, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::LegacyGetAbilityPedestal*, GetComponentInChildren_113, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiritShardUIItem*, GetComponent_280, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiritShardShopUIItem*, GetComponent_281, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::HasAbilityCondition*, GetComponent_282, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpiritShardUIShardSocket__Array*, GetComponentsInChildren_101, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiritShardUIShardSocket*, GetComponent_283, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiderBatPlatformMovement*, GetComponent_284, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SpiderBatLocomotion*, GetComponentInChildren_114, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ReactionFallingBehaviour*, GetComponent_285, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::SpiderBossBaseBehaviour__Array*, GetComponentsInChildren_102, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiderBossEntity*, GetComponent_286, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SpiderlingFallReactionBehaviour*, GetComponentInChildren_115, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SpikeSlugHitReactionBehaviour*, GetComponentInChildren_116, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::ParticleSystem__Array*, GetComponentsInChildren_103, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::MoonTrail__Array*, GetComponentsInChildren_104, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::SpiritGrenade*, GetComponentInParent_30, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::IDamageReciever__Array*, GetComponentsInChildren_105, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SpiritLightRadialVisualAffector*, GetComponent_287, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::HasShardCondition*, GetComponent_288, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::TransformAnimator*, GetComponentInChildren_117, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::RaceData*, GetComponentInChildren_118, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::RaceHandler*, GetComponentInChildren_119, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::StatisticianEntity*, GetComponentInParent_31, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::StatUISlot*, GetComponent_289, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::UberPostAnimator*, GetComponentInChildren_120, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::UberPostProcessAnimator*, GetComponentInChildren_121, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::IDamageResolver*, GetComponent_290, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SwarmSuspendWhenOutOfFrustrum*, GetComponent_291, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SwarmFollowPathBehaviour*, GetComponentInChildren_122, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SwarmAllowedArea*, GetComponent_292, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ITeleportBeaconAttackable*, GetComponent_293, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::TentacleHitReaction*, GetComponentInChildren_123, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::DamageDealer__Array*, GetComponentsInChildren_106, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::CapsuleCollider__Array*, GetComponentsInChildren_107, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TentacleEntity*, GetComponent_294, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::SkeletonGizmo*, GetComponentInChildren_124, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TentacleInterestPoint*, GetComponent_295, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5D10, app::TimedActionExecuter__Array*, GetComponents_26, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ITrapAttackable*, GetComponent_296, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::TurbulenceManager*, GetComponent_297, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberExplosionActor*, GetComponent_298, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ContrastVignette*, GetComponent_299, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberPostProcess*, GetComponent_300, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberShaderBlock*, GetComponent_301, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberWaterControl*, GetComponent_302, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberWaterTop*, GetComponent_303, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::UberInteractionActor*, GetComponentInChildren_125, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::UberWaterForceActor*, GetComponent_304, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::CollectablePlaceholder*, GetComponent_305, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PickupBase*, GetComponent_306, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::NewSetupStateController*, GetComponent_307, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::ChangeStateOnCondition*, GetComponent_308, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RaceData*, GetComponent_309, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::MoonDoorWithSlots*, GetComponentInChildren_126, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::WandererEntity*, GetComponentInParent_32, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::AimIK*, GetComponentInChildren_127, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::EventTriggerAnimator__Array*, GetComponentsInChildren_108, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Polygon_1__Array*, GetComponentsInChildren_109, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::WeaponMasterEntity*, GetComponentInParent_33, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WindArea*, GetComponent_310, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MoonAnimator*, GetComponentInChildren_128, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C470, app::MoonTimeline*, GetComponentInChildren_129, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::WorldMapOverworldArea*, GetComponent_311, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF5DA0, app::WorldMapOverworldArea__Array*, GetComponentsInChildren_110, app::Component_1* this_ptr, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::MortarWormEnemy*, GetComponentInChildren_130, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::WormHole__Array*, GetComponentsInChildren_111, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PlayerInventory*, GetComponent_312, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::Browser*, GetComponent_313, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::PointerUIBase*, GetComponent_314, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Browser*, GetComponentInChildren_131, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::RawImage*, GetComponent_315, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C5A0, app::BaseRaycaster*, GetComponentInParent_34, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::SimpleFPSController*, GetComponent_316, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C350, app::Camera*, GetComponentInChildren_132, app::Component_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157C230, app::GameplayToCinematicEntity*, GetComponent_317, app::Component_1* this_ptr)
} // namespace app::classes::UnityEngine::Component
