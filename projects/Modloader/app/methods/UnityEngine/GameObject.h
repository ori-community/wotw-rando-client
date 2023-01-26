#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/AbilitiesPlugin.h>
#include <Modloader/app/structs/AchievementsUIItem.h>
#include <Modloader/app/structs/AcidSlugEnemy.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/ActivateAnimatorSystem.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D.h>
#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/AnimationMaskNode.h>
#include <Modloader/app/structs/AnimationMetaDataBasedSoundPlayer.h>
#include <Modloader/app/structs/AnimationMetaDataDrivenTransform.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AreaMapIcon.h>
#include <Modloader/app/structs/ArmouredRammingEnemy.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArtOptimizer.h>
#include <Modloader/app/structs/AsyncRenderCapture.h>
#include <Modloader/app/structs/AttachToRope.h>
#include <Modloader/app/structs/AttachToTransform.h>
#include <Modloader/app/structs/AttackableSwitch.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/AutoRecorder.h>
#include <Modloader/app/structs/BabyWormSand.h>
#include <Modloader/app/structs/BabyWormWater.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/BaseInput.h>
#include <Modloader/app/structs/BashAttackGame.h>
#include <Modloader/app/structs/BatEnemy.h>
#include <Modloader/app/structs/BinaryProfilerLogMaker.h>
#include <Modloader/app/structs/BowArrow.h>
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/Bubble.h>
#include <Modloader/app/structs/BugHornEntity.h>
#include <Modloader/app/structs/Button.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraPlugin.h>
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/CameraShakeAnimator.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/CanvasGroup.h>
#include <Modloader/app/structs/CanvasRenderer.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CartDamageCheckAction.h>
#include <Modloader/app/structs/CartographerEntity.h>
#include <Modloader/app/structs/ChainLightningController.h>
#include <Modloader/app/structs/ChakramProjectile.h>
#include <Modloader/app/structs/ChakramProjectileEffect.h>
#include <Modloader/app/structs/CharacterJoint.h>
#include <Modloader/app/structs/CharacterPlugin.h>
#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/CharacterThirdPerson.h>
#include <Modloader/app/structs/CheckpointPlugin.h>
#include <Modloader/app/structs/CleanupDebugger.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/ClickMeshBrowserUI.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ColliderAnimatorSystem.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/ColorAnimatorSystem.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/ConfigurableJoint__Array.h>
#include <Modloader/app/structs/ConfigureConfigurableJointAction.h>
#include <Modloader/app/structs/ControlSettingsItem.h>
#include <Modloader/app/structs/ControlUIItem.h>
#include <Modloader/app/structs/CursorRendererOS.h>
#include <Modloader/app/structs/CutsceneState__Array.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/DamageText.h>
#include <Modloader/app/structs/DashOwlEnemy.h>
#include <Modloader/app/structs/DealDamageOverTime.h>
#include <Modloader/app/structs/DeathWisp.h>
#include <Modloader/app/structs/DeathsPlugin.h>
#include <Modloader/app/structs/DebugHub.h>
#include <Modloader/app/structs/DelayedActionManager.h>
#include <Modloader/app/structs/DeltaTimeManager.h>
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/DestroyDetector.h>
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries.h>
#include <Modloader/app/structs/DialogHandler.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/DigZoneHandler.h>
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum.h>
#include <Modloader/app/structs/DrillZone.h>
#include <Modloader/app/structs/DrivableGroup.h>
#include <Modloader/app/structs/DropPickup.h>
#include <Modloader/app/structs/DropSlugEnemy.h>
#include <Modloader/app/structs/Dropdown.h>
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#include <Modloader/app/structs/Enemy.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityDriver.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/EntityPlaceholder__Array.h>
#include <Modloader/app/structs/EntityPlatformingMovement.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/EquipmentUIDetails.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#include <Modloader/app/structs/ExceptionsDebugText.h>
#include <Modloader/app/structs/ExceptionsTest.h>
#include <Modloader/app/structs/ExpOrbPickup.h>
#include <Modloader/app/structs/ExpText.h>
#include <Modloader/app/structs/ExternalTimelineEntity__Array.h>
#include <Modloader/app/structs/FPSBrowserUI.h>
#include <Modloader/app/structs/FPSCursorRenderer.h>
#include <Modloader/app/structs/FPSMonitor.h>
#include <Modloader/app/structs/FPSPlugin.h>
#include <Modloader/app/structs/Fader.h>
#include <Modloader/app/structs/FaderBCustomFadeAction.h>
#include <Modloader/app/structs/FireStick.h>
#include <Modloader/app/structs/Firefly.h>
#include <Modloader/app/structs/FirewhirlBeam.h>
#include <Modloader/app/structs/FishEnemy.h>
#include <Modloader/app/structs/FixedJoint.h>
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/FloatingRockLaserEnemy.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy.h>
#include <Modloader/app/structs/FollowPositionRotation.h>
#include <Modloader/app/structs/FrameCaptureTester.h>
#include <Modloader/app/structs/FrameCounter_1.h>
#include <Modloader/app/structs/FramePerformanceMonitor.h>
#include <Modloader/app/structs/GPUAutoProfiler.h>
#include <Modloader/app/structs/GPUAutoProfilerReportRenderer.h>
#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/GameDVRPerformanceMonitor.h>
#include <Modloader/app/structs/GameObjectActivator.h>
#include <Modloader/app/structs/GameObjectReferenceComponent.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GameSystemsEnabler.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/GenericAttackable.h>
#include <Modloader/app/structs/GenericCastManagerCompleteJobs.h>
#include <Modloader/app/structs/GenericCastManagerScheduleJobs.h>
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/GhostIndicator.h>
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GoThroughPlatform.h>
#include <Modloader/app/structs/GoldenSein.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/GraphicRaycaster.h>
#include <Modloader/app/structs/GrenadeBurst.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/HeatUpPlatform__Array.h>
#include <Modloader/app/structs/HierarchyTestBulkTool.h>
#include <Modloader/app/structs/HierarchyTester.h>
#include <Modloader/app/structs/HitStop.h>
#include <Modloader/app/structs/HoldableRigidBody.h>
#include <Modloader/app/structs/HomingMissile.h>
#include <Modloader/app/structs/HomingProjectile.h>
#include <Modloader/app/structs/HookFlingPlant.h>
#include <Modloader/app/structs/HornBugBossEntity.h>
#include <Modloader/app/structs/IAlignable.h>
#include <Modloader/app/structs/IAnimationMontageEventHandler.h>
#include <Modloader/app/structs/IAnimatorDriver.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IBouncealbeFromCartBouncer.h>
#include <Modloader/app/structs/IBubbleKiller.h>
#include <Modloader/app/structs/ICanActivatePressurePlate.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IEnablingModifier.h>
#include <Modloader/app/structs/IGreanade.h>
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/IKillReciever.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/IMinerThrowable.h>
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#include <Modloader/app/structs/IPooled__Array.h>
#include <Modloader/app/structs/IPuppetBase.h>
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/IRecordableTransform.h>
#include <Modloader/app/structs/IRecordableTransformWithExternalID.h>
#include <Modloader/app/structs/IRecordable__Array.h>
#include <Modloader/app/structs/ISeinReceiver__Array.h>
#include <Modloader/app/structs/IServerRecordableObject.h>
#include <Modloader/app/structs/ISuspendable.h>
#include <Modloader/app/structs/ISuspendable__Array.h>
#include <Modloader/app/structs/ITimeSlicedPostEnableObserver.h>
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver.h>
#include <Modloader/app/structs/ITrapAttackable.h>
#include <Modloader/app/structs/IVirtualTimelineGameObject.h>
#include <Modloader/app/structs/IWindPipeZoneReceiver.h>
#include <Modloader/app/structs/IconPlacementScaler.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/InGameUIEnabler.h>
#include <Modloader/app/structs/InputField.h>
#include <Modloader/app/structs/InputPlugin.h>
#include <Modloader/app/structs/InstantiationHistory.h>
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/JumpShootShark.h>
#include <Modloader/app/structs/JumpShotShield.h>
#include <Modloader/app/structs/JumperEnemy.h>
#include <Modloader/app/structs/KamikazeJumperGroupAgro.h>
#include <Modloader/app/structs/KamikazeLizardExplosion.h>
#include <Modloader/app/structs/KamikazeSootEnemy.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/KuDamageReceiver.h>
#include <Modloader/app/structs/KwolokBossTendril.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>
#include <Modloader/app/structs/LaserShooterHommingMissle.h>
#include <Modloader/app/structs/LaserShooterShockwave.h>
#include <Modloader/app/structs/LayoutElement.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector.h>
#include <Modloader/app/structs/LeashMarkEffect.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/LegacyAttackableSwitch.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/LegacyEntityDamageDealer.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever.h>
#include <Modloader/app/structs/LegacyHealthBar.h>
#include <Modloader/app/structs/LegacySwarmEnemy.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/LegacyTransparancyAnimator.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/LianaEntity.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_InvisibleCheckpoint_.h>
#include <Modloader/app/structs/List_1_LegacyAnimator_.h>
#include <Modloader/app/structs/List_1_LegacyEntityDamageReciever_.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_.h>
#include <Modloader/app/structs/List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_UberShaderComponent_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Canvas_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rigidbody_.h>
#include <Modloader/app/structs/LoadFromMasterAtStart.h>
#include <Modloader/app/structs/LockOnTarget.h>
#include <Modloader/app/structs/LockOnTargetProjectile.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/LoremasterUISlot.h>
#include <Modloader/app/structs/MainThreadDispatcherPlaymode.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger.h>
#include <Modloader/app/structs/MainThreadSleepTester.h>
#include <Modloader/app/structs/MantisJumpAttackDamageDealer.h>
#include <Modloader/app/structs/MapmakerUIDetails.h>
#include <Modloader/app/structs/MapmakerUISubItem.h>
#include <Modloader/app/structs/Mask_1.h>
#include <Modloader/app/structs/MeleeComboMoveSwordAirDown.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MemoryOverlay.h>
#include <Modloader/app/structs/MemoryUISlot.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MeshFilter__Array.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MeshRenderer__Array.h>
#include <Modloader/app/structs/MeshTrail.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MicroProfilerGraph.h>
#include <Modloader/app/structs/MicroProfilerInspector.h>
#include <Modloader/app/structs/Mine.h>
#include <Modloader/app/structs/MinerNPCEntity.h>
#include <Modloader/app/structs/MokiNPCEntity.h>
#include <Modloader/app/structs/MonoBehaviour__Array.h>
#include <Modloader/app/structs/MonoManager.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimatorSystem.h>
#include <Modloader/app/structs/MoonDriver.h>
#include <Modloader/app/structs/MoonDriverSystem.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/MoonTrailSystem.h>
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/MovieTextureControllerB.h>
#include <Modloader/app/structs/MultiplatformVideoPlayer.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/NPCMessageBox.h>
#include <Modloader/app/structs/NanoProfiler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectDisabler.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/OccludeMotionVectors.h>
#include <Modloader/app/structs/OriGhostRigVisuals.h>
#include <Modloader/app/structs/OwlProjectileTest.h>
#include <Modloader/app/structs/P3D_BrushPreview.h>
#include <Modloader/app/structs/P3D_TexturePreview.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystemRenderer.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/PerspectiveRotationSystem.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/PhysicalSystemProfiler.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/PickupBase__Array.h>
#include <Modloader/app/structs/PickupMessageIcon.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/PlaymodeUpdateDelegate.h>
#include <Modloader/app/structs/PointerUIMesh.h>
#include <Modloader/app/structs/PoisonousCloud.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/PositionCheckerPlugin.h>
#include <Modloader/app/structs/PrefabProvider.h>
#include <Modloader/app/structs/PressAnyButtonPrompt.h>
#include <Modloader/app/structs/PrimitiveType__Enum.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain.h>
#include <Modloader/app/structs/ProjectilesStickToThisPlatform.h>
#include <Modloader/app/structs/QuestDetailsUI.h>
#include <Modloader/app/structs/QuestIconUI.h>
#include <Modloader/app/structs/QuestItemPickup.h>
#include <Modloader/app/structs/QuestItemUI.h>
#include <Modloader/app/structs/QuestMessageIcon.h>
#include <Modloader/app/structs/QuestNodeWisps.h>
#include <Modloader/app/structs/QuestsUI.h>
#include <Modloader/app/structs/RaceFinishIcon.h>
#include <Modloader/app/structs/RaceMenuScreenUISlot.h>
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/Rail__Array.h>
#include <Modloader/app/structs/RammingEnemy.h>
#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#include <Modloader/app/structs/RecorderMessageInputUI.h>
#include <Modloader/app/structs/RecorderMessagePlugin.h>
#include <Modloader/app/structs/RecorderPlaybackUITimeline.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/RespawningPlaceholder__Array.h>
#include <Modloader/app/structs/RestoreHealthPickup.h>
#include <Modloader/app/structs/ResumeGameController.h>
#include <Modloader/app/structs/RetaliateShriek.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/RockyEnemy.h>
#include <Modloader/app/structs/SandTrail.h>
#include <Modloader/app/structs/SandTrailParticles.h>
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/SceneFPSTest.h>
#include <Modloader/app/structs/SceneFrameworkDebugger.h>
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor.h>
#include <Modloader/app/structs/SceneInspector.h>
#include <Modloader/app/structs/SceneLayers.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/ScreenshotRecorder.h>
#include <Modloader/app/structs/ScrollRect.h>
#include <Modloader/app/structs/Scrollbar.h>
#include <Modloader/app/structs/SeeSeinTrigger.h>
#include <Modloader/app/structs/SeinBowMark.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinController3D.h>
#include <Modloader/app/structs/SeinCutsceneBlocked.h>
#include <Modloader/app/structs/SeinCutsceneMovement.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/SeinGlowSpell.h>
#include <Modloader/app/structs/SeinLifeAbsorbArm.h>
#include <Modloader/app/structs/SeinNaruComboAnimator.h>
#include <Modloader/app/structs/SelfDestruct.h>
#include <Modloader/app/structs/SendMessageOptions__Enum.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/SetRigidBodyPropertiesAction.h>
#include <Modloader/app/structs/ShardTraderEntity.h>
#include <Modloader/app/structs/ShellSlugShell.h>
#include <Modloader/app/structs/ShootingSpider.h>
#include <Modloader/app/structs/ShopkeeperUIDetails.h>
#include <Modloader/app/structs/ShopkeeperUISubItem.h>
#include <Modloader/app/structs/SimpleFPS.h>
#include <Modloader/app/structs/SinMovement.h>
#include <Modloader/app/structs/SkillUpgradeShopUISubItem.h>
#include <Modloader/app/structs/SkillUpgradeUIUpgradeDetails.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/SlicedRenderSettingsEditor.h>
#include <Modloader/app/structs/Slider.h>
#include <Modloader/app/structs/SnapTrapEntity.h>
#include <Modloader/app/structs/SoulFlame.h>
#include <Modloader/app/structs/SoundCompositionPlayer.h>
#include <Modloader/app/structs/SoundCompositionTransitionHandler.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundManager.h>
#include <Modloader/app/structs/SoundMessage.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Array.h>
#include <Modloader/app/structs/SpellMessageIcon.h>
#include <Modloader/app/structs/SpellPickup.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpellUIExperience.h>
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SpellUIPassiveShards.h>
#include <Modloader/app/structs/SpellUISeeds.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#include <Modloader/app/structs/SpellUIShardListOverlay.h>
#include <Modloader/app/structs/SpellUISpellDetails.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/SpiderBatEntity.h>
#include <Modloader/app/structs/SpikeProjectile.h>
#include <Modloader/app/structs/SpikeSlugEntity.h>
#include <Modloader/app/structs/SpiritCrescent.h>
#include <Modloader/app/structs/SpiritFlameProjectile.h>
#include <Modloader/app/structs/SpiritGrenade.h>
#include <Modloader/app/structs/SpiritGrenadeDamageDealer.h>
#include <Modloader/app/structs/SpiritLeashEffectPoseAnimator.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector.h>
#include <Modloader/app/structs/SpiritSentry.h>
#include <Modloader/app/structs/SpiritShardPickup.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/SpiritShotProjectile.h>
#include <Modloader/app/structs/SpiritTreeTextLocationController.h>
#include <Modloader/app/structs/SpiritTurret.h>
#include <Modloader/app/structs/SpitterEnemy.h>
#include <Modloader/app/structs/SpringSeinAction.h>
#include <Modloader/app/structs/SpriteAnimationPlayer.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#include <Modloader/app/structs/SpriteAnimator__Array.h>
#include <Modloader/app/structs/SpriteRenderer.h>
#include <Modloader/app/structs/StandaloneShutdown.h>
#include <Modloader/app/structs/StarSlugEnemy.h>
#include <Modloader/app/structs/StartLoopEndEffect.h>
#include <Modloader/app/structs/StatUISlot.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy_IReceiver.h>
#include <Modloader/app/structs/StateOverrideSystem.h>
#include <Modloader/app/structs/StatisticianEntity.h>
#include <Modloader/app/structs/SteamManager.h>
#include <Modloader/app/structs/StickyMine.h>
#include <Modloader/app/structs/StompableFloor.h>
#include <Modloader/app/structs/StressTesterCinematicReporter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/SwarmAgent.h>
#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/SwarmNestEntity.h>
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner.h>
#include <Modloader/app/structs/TargetPositionFollower.h>
#include <Modloader/app/structs/TentacleEnemy.h>
#include <Modloader/app/structs/TentacleJoint.h>
#include <Modloader/app/structs/TestRunner.h>
#include <Modloader/app/structs/TesterPlugin.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextBoxMessage.h>
#include <Modloader/app/structs/TextMesh.h>
#include <Modloader/app/structs/TextureTilingAdjuster__Array.h>
#include <Modloader/app/structs/TimesliceDebugger.h>
#include <Modloader/app/structs/TimesliceSpikeReporter.h>
#include <Modloader/app/structs/Toggle.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/TransparencyAnimatorSystem.h>
#include <Modloader/app/structs/Trap.h>
#include <Modloader/app/structs/TriggerEventBroadcaster.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate.h>
#include <Modloader/app/structs/UberPoolGroup.h>
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberShaderAnimatorSystem.h>
#include <Modloader/app/structs/UberShaderBlockTextured.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/UberShaderDetector.h>
#include <Modloader/app/structs/UberShaderRuntimeUpdate.h>
#include <Modloader/app/structs/UberSwarmPOI.h>
#include <Modloader/app/structs/UberTransformFollow.h>
#include <Modloader/app/structs/UnityVideoPlayer.h>
#include <Modloader/app/structs/VRBrowserPanel.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#include <Modloader/app/structs/VerletStructure.h>
#include <Modloader/app/structs/VideoEditor.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#include <Modloader/app/structs/VisualLog.h>
#include <Modloader/app/structs/Vitals.h>
#include <Modloader/app/structs/WaitForTimeTimelineEntity.h>
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WaterPoisonTrail.h>
#include <Modloader/app/structs/WeaponMasterEntity.h>
#include <Modloader/app/structs/WidgetUIHorizontalSelect.h>
#include <Modloader/app/structs/WindCollision.h>
#include <Modloader/app/structs/WindowManager_1.h>
#include <Modloader/app/structs/WispMessageIcon.h>
#include <Modloader/app/structs/WorldMapUI.h>
#include <Modloader/app/structs/WwiseBootstrap.h>
#include <Modloader/app/structs/ZDontSaveGroup.h>
#include <Modloader/app/structs/ZapTrail.h>

namespace app::classes::UnityEngine::GameObject {
    IL2CPP_REGISTER_METHOD(0x02527110, void, ctor_1, (app::GameObject * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02527200, void, ctor_2, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025272E0, void, ctor_3, (app::GameObject * this_ptr, app::String* name, app::Type__Array* components))
    IL2CPP_REGISTER_METHOD(0x02527460, app::GameObject*, CreatePrimitive, (app::PrimitiveType__Enum type))
    IL2CPP_REGISTER_METHOD(0x025274B0, bool, HasComponent_1, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527510, app::Component_1*, GetComponent_1, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527570, void, GetComponentFastPath, (app::GameObject * this_ptr, app::Type* type, void* one_further_than_result_value))
    IL2CPP_REGISTER_METHOD(0x025275E0, app::Component_1*, GetComponentByName, (app::GameObject * this_ptr, app::String* type))
    IL2CPP_REGISTER_METHOD(0x025275E0, app::Component_1*, GetComponent_2, (app::GameObject * this_ptr, app::String* type))
    IL2CPP_REGISTER_METHOD(0x02527640, app::Component_1*, GetComponentInChildren_1, (app::GameObject * this_ptr, app::Type* type, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x025276C0, app::Component_1*, GetComponentInChildren_2, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527730, app::Component_1*, GetComponentInParent_1, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527790, app::Array*, GetComponentsInternal, (app::GameObject * this_ptr, app::Type* type, bool use_search_type_as_array_return_type, bool recursive, bool include_inactive, bool reverse, app::Object* result_list))
    IL2CPP_REGISTER_METHOD(0x02527830, app::Component_1__Array*, GetComponents_1, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527940, void, GetComponents_2, (app::GameObject * this_ptr, app::Type* type, app::List_1_UnityEngine_Component_* results))
    IL2CPP_REGISTER_METHOD(0x025279D0, app::Component_1__Array*, GetComponentsInChildren_1, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x025279E0, app::Component_1__Array*, GetComponentsInChildren_2, (app::GameObject * this_ptr, app::Type* type, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x02527B00, app::Component_1__Array*, GetComponentsInParent_1, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527C10, app::Component_1__Array*, GetComponentsInParent_2, (app::GameObject * this_ptr, app::Type* type, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x02527D30, bool, TryGetComponent_1, (app::GameObject * this_ptr, app::Type* type, app::Component_1** component))
    IL2CPP_REGISTER_METHOD(0x02527E30, app::Component_1*, TryGetComponentInternal, (app::GameObject * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02527E90, void, TryGetComponentFastPath, (app::GameObject * this_ptr, app::Type* type, void* one_further_than_result_value))
    IL2CPP_REGISTER_METHOD(0x02527F00, app::GameObject*, FindWithTag, (app::String * tag))
    IL2CPP_REGISTER_METHOD(0x02527F50, void, SendMessageUpwards_1, (app::GameObject * this_ptr, app::String* method_name, app::SendMessageOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02527F70, void, SendMessage_1, (app::GameObject * this_ptr, app::String* method_name, app::SendMessageOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02527F90, void, BroadcastMessage_1, (app::GameObject * this_ptr, app::String* method_name, app::SendMessageOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02527FB0, app::Component_1*, AddComponentInternal, (app::GameObject * this_ptr, app::String* class_name))
    IL2CPP_REGISTER_METHOD(0x02528010, app::Component_1*, Internal_AddComponentWithType, (app::GameObject * this_ptr, app::Type* component_type))
    IL2CPP_REGISTER_METHOD(0x02528010, app::Component_1*, AddComponent_1, (app::GameObject * this_ptr, app::Type* component_type))
    IL2CPP_REGISTER_METHOD(0x02528070, app::Transform*, get_transform, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025280C0, int32_t, get_layer, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02528110, void, set_layer, (app::GameObject * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02528170, bool, get_active, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025281C0, void, set_active, (app::GameObject * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02528220, void, SetActive, (app::GameObject * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02528280, bool, get_activeSelf, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025282D0, bool, get_activeInHierarchy, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02528320, void, SetActiveRecursively, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x02528380, bool, get_isStatic, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025283D0, void, set_isStatic, (app::GameObject * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02528430, bool, get_isStaticBatchable, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02528480, uint32_t, get_moonFlags, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025284D0, void, set_moonFlags, (app::GameObject * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x02528530, bool, get_moonReady, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02528580, void, set_moonReady, (app::GameObject * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x025285E0, void, AddMoonFlagToHierarchy, (app::GameObject * this_ptr, uint32_t flag))
    IL2CPP_REGISTER_METHOD(0x02528640, void, RemoveMoonFlagFromHierarchy, (app::GameObject * this_ptr, uint32_t flag))
    IL2CPP_REGISTER_METHOD(0x025286A0, void, SetMoonReadyToHierarchy, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x02528700, void, SetMoonHiddenToHierarchy, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x02528760, void, SetMoonHidden2ToHierarchy, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x025287C0, void, SetMoonHidden3ToHierarchy, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x02528820, void, SetDisableSimulation, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x02528880, void, SetDisableSimulationToHierarchy, (app::GameObject * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x025288E0, app::String*, get_tag, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02528930, void, set_tag, (app::GameObject * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02528990, bool, CompareTag, (app::GameObject * this_ptr, app::String* tag))
    IL2CPP_REGISTER_METHOD(0x02527F00, app::GameObject*, FindGameObjectWithTag, (app::String * tag))
    IL2CPP_REGISTER_METHOD(0x025289F0, app::GameObject__Array*, FindGameObjectsWithTag, (app::String * tag))
    IL2CPP_REGISTER_METHOD(0x02528A40, void, SendMessageUpwards_2, (app::GameObject * this_ptr, app::String* method_name, app::Object* value, app::SendMessageOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02528AC0, void, SendMessageUpwards_3, (app::GameObject * this_ptr, app::String* method_name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02528AE0, void, SendMessageUpwards_4, (app::GameObject * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x02528B00, void, SendMessage_2, (app::GameObject * this_ptr, app::String* method_name, app::Object* value, app::SendMessageOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02528B80, void, SendMessage_3, (app::GameObject * this_ptr, app::String* method_name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02528BA0, void, SendMessage_4, (app::GameObject * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x02528BC0, void, BroadcastMessage_2, (app::GameObject * this_ptr, app::String* method_name, app::Object* parameter, app::SendMessageOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02528C40, void, BroadcastMessage_3, (app::GameObject * this_ptr, app::String* method_name, app::Object* parameter))
    IL2CPP_REGISTER_METHOD(0x02528C60, void, BroadcastMessage_4, (app::GameObject * this_ptr, app::String* method_name))
    IL2CPP_REGISTER_METHOD(0x02528C80, void, Internal_CreateGameObject, (app::GameObject * self, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02528CE0, app::GameObject*, Find, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x02528D30, app::Scene, get_scene, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D4F0, app::GameObject*, get_gameObject, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02528DA0, void, get_scene_Injected, (app::GameObject * this_ptr, app::Scene* ret))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_2, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Object*, GetComponent_3, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Object*, GetComponentInChildren_3, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::Object*, GetComponentInChildren_4, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::Object*, GetComponentInParent_2, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::Object__Array*, GetComponents_3, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E56B0, void, GetComponents_4, (app::GameObject * this_ptr, app::List_1_System_Object_* results))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::Object__Array*, GetComponentsInChildren_3, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_4, (app::GameObject * this_ptr, bool include_inactive, app::List_1_System_Object_* results))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Object__Array*, GetComponentsInChildren_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_6, (app::GameObject * this_ptr, app::List_1_System_Object_* results))
    IL2CPP_REGISTER_METHOD(0x015E5900, void, GetComponentsInParent_3, (app::GameObject * this_ptr, bool include_inactive, app::List_1_System_Object_* results))
    IL2CPP_REGISTER_METHOD(0x02FF6150, app::Object__Array*, GetComponentsInParent_4, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Object__Array*, GetComponentsInParent_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AC00, bool, TryGetComponent_2, (app::GameObject * this_ptr, app::Object** component))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Object*, AddComponent_2, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Camera*, GetComponent_4, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MoonTrailSystem*, AddComponent_3, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ZDontSaveGroup*, AddComponent_4, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ISuspendable__Array*, GetComponentsInChildren_7, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_8, (app::GameObject * this_ptr, bool include_inactive, app::List_1_Moon_ISuspendable_* results))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::BaseInput*, AddComponent_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpriteRenderer*, GetComponent_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::RectTransform*, AddComponent_6, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RectTransform*, GetComponent_6, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Image*, AddComponent_7, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Button*, AddComponent_8, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Text*, AddComponent_9, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::RawImage*, AddComponent_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Slider*, AddComponent_11, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Scrollbar*, AddComponent_12, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Toggle*, AddComponent_13, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::InputField*, AddComponent_14, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Scrollbar*, GetComponent_7, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ScrollRect*, AddComponent_15, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Mask_1*, AddComponent_16, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Dropdown*, AddComponent_17, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Dropdown_DropdownItem*, AddComponent_18, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E5900, void, GetComponentsInParent_6, (app::GameObject * this_ptr, bool include_inactive, app::List_1_UnityEngine_Canvas_* results))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Dropdown_DropdownItem*, GetComponentInChildren_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Canvas*, AddComponent_19, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Canvas*, GetComponent_8, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GraphicRaycaster*, AddComponent_20, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CanvasGroup*, GetComponent_9, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CanvasRenderer*, GetComponent_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::LayoutElement*, AddComponent_21, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MoonDriver*, AddComponent_22, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MoonDriverSystem*, AddComponent_23, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FixedJoint*, AddComponent_24, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CharacterThirdPerson*, GetComponent_11, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TriggerEventBroadcaster*, AddComponent_25, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ActivateAnimatorSystem*, AddComponent_26, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MoonAnimator*, GetComponent_12, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AnimationMaskNode*, AddComponent_27, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Animator*, AddComponent_28, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MoonAnimator*, AddComponent_29, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Animator*, GetComponent_13, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MoonAnimatorSystem*, AddComponent_30, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IPassiveStateDescriptor*, GetComponent_14, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Rigidbody*, GetComponent_15, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::StateOverrideSystem*, AddComponent_31, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::AnimationPostprocess*, GetComponent_16, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_9, (app::GameObject * this_ptr, bool include_inactive, app::List_1_UnityEngine_Renderer_* results))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Renderer*, GetComponent_17, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ExternalTimelineEntity__Array*, GetComponentsInChildren_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MoonTimeline*, GetComponent_18, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IVirtualTimelineGameObject*, GetComponent_19, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MeshFilter*, GetComponent_20, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TestRunner*, AddComponent_32, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::Component_1__Array*, GetComponentsInChildren_11, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MainThreadDispatcherPlaymode*, AddComponent_33, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PlaymodeUpdateDelegate*, AddComponent_34, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AmplifyColorTriggerProxy2D*, AddComponent_35, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AmplifyColorTriggerProxy*, AddComponent_36, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::AchievementsUIItem*, GetComponent_21, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CleverMenuItem*, GetComponent_22, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FollowPositionRotation*, GetComponent_23, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::UberTransformFollow*, GetComponent_24, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberTransformFollow*, AddComponent_37, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Collider*, GetComponent_25, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Projectile*, GetComponent_26, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::AcidSlugEnemy*, GetComponent_27, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GameObjectActivator*, GetComponent_28, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Rail*, GetComponent_29, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Rail__Array*, GetComponentsInChildren_12, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PlayerInsideZoneChecker*, AddComponent_38, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Transform__Array*, GetComponentsInChildren_13, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::LegacyAnimator__Array*, GetComponents_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::LegacyAnimator__Array*, GetComponentsInChildren_14, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MessageBox*, GetComponent_30, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IconPlacementScaler*, GetComponent_31, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MeshRenderer*, GetComponent_32, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RammingEnemy*, GetComponent_33, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DestroyOnRestoreCheckpoint*, AddComponent_39, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ConfigurableJoint*, AddComponent_40, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PressAnyButtonPrompt*, GetComponent_34, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Polygon_1*, AddComponent_41, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DamageDealer*, AddComponent_42, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BabyWormSand*, GetComponent_35, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BabyWormWater*, GetComponent_36, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::IAnimatorDriver*, GetComponentInChildren_6, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::WaitForTimeTimelineEntity*, AddComponent_43, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::BaseAnimator__Array*, GetComponents_6, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::BaseAnimator__Array*, GetComponentsInChildren_15, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinGlowSpell*, GetComponent_37, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberSwarmPOI*, AddComponent_44, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BatEnemy*, GetComponent_38, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::BinaryProfilerLogMaker*, AddComponent_45, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::TextureTilingAdjuster__Array*, GetComponentsInChildren_16, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SoundHost*, AddComponent_46, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_17, (app::GameObject * this_ptr, app::List_1_UnityEngine_ParticleSystem_* results))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ParticleSystem__Array*, GetComponentsInChildren_18, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpeedBasedEmissionRateMultiplier__Array*, GetComponentsInChildren_19, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_3, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ParticleSystem*, GetComponent_39, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DamageReceiver*, GetComponent_40, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LimitedLifetime*, GetComponent_41, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::LegacyTransparancyAnimator*, AddComponent_47, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::WindCollision*, GetComponent_42, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IBubbleKiller*, GetComponent_43, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Bubble*, GetComponent_44, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::DamageDealer*, GetComponentInChildren_7, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::VideoEditor*, GetComponent_45, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpellUISeeds*, GetComponentInChildren_8, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MeshRenderer__Array*, GetComponentsInChildren_20, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CameraShakeAnimator*, AddComponent_48, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SceneInspector*, GetComponent_46, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::NanoProfiler*, GetComponent_47, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MicroProfilerGraph*, GetComponent_48, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MicroProfilerInspector*, GetComponent_49, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DebugHub*, GetComponent_50, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SlicedRenderSettingsEditor*, GetComponent_51, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SimpleFPS*, GetComponent_52, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MemoryOverlay*, GetComponent_53, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ExceptionsDebugText*, GetComponent_54, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SceneInspector*, AddComponent_49, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::NanoProfiler*, AddComponent_50, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MicroProfilerGraph*, AddComponent_51, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MicroProfilerInspector*, AddComponent_52, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DebugHub*, AddComponent_53, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SlicedRenderSettingsEditor*, AddComponent_54, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SimpleFPS*, AddComponent_55, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MemoryOverlay*, AddComponent_56, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ExceptionsDebugText*, AddComponent_57, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AnimationMetaDataDrivenTransform*, AddComponent_58, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpriteAnimatorWithTransitions*, GetComponent_55, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Collider__Array*, GetComponentsInChildren_21, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IBouncealbeFromCartBouncer*, GetComponent_56, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Cart*, GetComponent_57, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonTrail__Array*, GetComponentsInChildren_22, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonTimeline*, GetComponentInChildren_9, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BuyMapUIConfirmationOverlay*, GetComponent_58, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CartographerEntity*, GetComponent_59, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Fader*, GetComponent_60, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ChakramProjectileEffect*, GetComponent_61, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::EntityTargetting*, GetComponentInParent_3, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PickupBase*, GetComponent_62, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CollectablePlaceholder*, GetComponent_63, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::AnimationMetaDataBasedSoundPlayer*, GetComponentInChildren_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::LoadFromMasterAtStart*, AddComponent_59, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonAnimator*, GetComponentInChildren_11, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CharacterStatePuppet*, GetComponent_64, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CameraShake*, GetComponent_65, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CleanupDebugger*, AddComponent_60, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::Renderer__Array*, GetComponentsInChildren_23, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MessageBox*, GetComponentInChildren_12, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::DigZone*, GetComponentInChildren_13, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DisableGameObjectWhenOutOfFrustrum*, GetComponent_66, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DisableGameObjectWhenOutOfFrustrum*, AddComponent_61, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::EntityTargetting*, GetComponent_67, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::EntityTargetting*, AddComponent_62, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DamageReceiver*, AddComponent_63, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DestroyOnRestoreCheckpoint*, GetComponent_68, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::VisibleOnWorldMap*, GetComponent_69, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::PickupBase*, GetComponentInChildren_14, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ColliderAnimatorSystem*, AddComponent_64, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_4, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SoundHost*, GetComponent_70, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Enemy*, GetComponent_71, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::ConfigurableJoint__Array*, GetComponents_7, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ConfigurableJoint*, GetComponent_72, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ControlUIItem*, GetComponent_73, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ControlSettingsItem*, GetComponent_74, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SoundManager*, GetComponent_75, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SoundPlayer*, GetComponent_76, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Camera*, AddComponent_65, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::CutsceneState__Array*, GetComponentsInChildren_24, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::IDamageReciever__Array*, GetComponents_8, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritFlameProjectile*, GetComponent_77, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IDamageReciever*, GetComponent_78, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinDamageReciever*, GetComponent_79, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::KuDamageReceiver*, GetComponent_80, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritGrenadeDamageDealer*, GetComponent_81, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CartDamageCheckAction*, GetComponent_82, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PlatformMovement*, GetComponent_83, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DashOwlEnemy*, GetComponent_84, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FollowPositionRotation*, AddComponent_66, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DeathWisp*, GetComponent_85, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GhostRecorder*, GetComponent_86, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GhostRecorder*, AddComponent_67, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_25, (app::GameObject * this_ptr, bool include_inactive, app::List_1_UnityEngine_Collider_* results))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_26, (app::GameObject * this_ptr, app::List_1_InvisibleCheckpoint_* results))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_27, (app::GameObject * this_ptr, app::List_1_UnityEngine_Rigidbody_* results))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DelayedActionManager*, AddComponent_68, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::DamageDealer__Array*, GetComponentsInChildren_28, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IEnablingModifier*, GetComponent_87, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ITimeSlicedPostEnableObserver*, GetComponent_88, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ITimeSlicedPreDisableObserver*, GetComponent_89, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::Collider__Array*, GetComponentsInChildren_29, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DropSlugEnemy*, GetComponent_90, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::DamageDealer*, GetComponentInChildren_15, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ZapTrail*, GetComponent_91, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RecordableObjectPuppet*, GetComponent_92, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DamageDealer*, GetComponent_93, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::EntityDriver*, AddComponent_69, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::Entity*, GetComponentInChildren_16, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Entity*, GetComponentInChildren_17, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::Locomotion*, GetComponentInChildren_18, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::PlatformMovement*, GetComponentInChildren_19, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::IPooled__Array*, GetComponentsInChildren_30, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::Vitals*, GetComponentInChildren_20, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::Sensor*, GetComponentInChildren_21, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::ILocomotionTurningHandler*, GetComponentInChildren_22, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::EntityPlaceholderScalingLink*, GetComponentInChildren_23, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SuspendWhenOutOfFrustrum*, GetComponent_94, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::EquipmentUIInventoryItem*, GetComponent_95, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUIItem*, GetComponent_96, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::EquipmentUIDetails*, GetComponent_97, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CleverMenuItemSelectionManager*, GetComponent_98, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LegacyTransparencyAnimator*, GetComponent_99, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TextBox*, GetComponent_100, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ExceptionsTest*, AddComponent_70, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FPSMonitor*, AddComponent_71, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Flammable*, GetComponent_101, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FireStick*, GetComponent_102, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TargetPositionFollower*, AddComponent_72, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Firefly*, GetComponent_103, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FirewhirlBeam*, GetComponent_104, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FishEnemy*, GetComponent_105, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FloatingRockLaserEnemy*, GetComponent_106, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SeeSeinTrigger*, GetComponentInChildren_24, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FloatingRockTurretEnemy*, GetComponent_107, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FrameCaptureTester*, AddComponent_73, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FrameCaptureTester*, GetComponent_108, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FramePerformanceMonitor*, AddComponent_74, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DamageText*, GetComponent_109, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ExpText*, GetComponent_110, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DeltaTimeManager*, GetComponent_111, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DeltaTimeManager*, AddComponent_75, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GameDVRPerformanceMonitor*, AddComponent_76, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::LegacyTransparencyAnimator*, GetComponentInChildren_25, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::QuestsUI*, GetComponent_112, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GameObjectReferenceComponent*, GetComponent_113, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GameObjectReferenceComponent*, AddComponent_77, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GameController*, GetComponent_114, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::GameSystemsEnabler*, GetComponentInChildren_26, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::InGameUIEnabler*, GetComponentInChildren_27, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::WorldMapUI*, GetComponentInChildren_28, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::StressTesterCinematicReporter*, AddComponent_78, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::PickupBase__Array*, GetComponentsInChildren_31, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GhostIndicator*, GetComponent_115, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Renderer__Array*, GetComponentsInChildren_32, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GhostPlayer*, GetComponent_116, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::OriGhostRigVisuals*, GetComponent_117, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IPuppetBase*, GetComponent_118, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::IRecordable__Array*, GetComponentsInChildren_33, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IServerRecordableObject*, GetComponent_119, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IRecordableTransform*, GetComponent_120, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::IRecordable__Array*, GetComponentsInChildren_34, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::IRecordableTransformWithExternalID*, GetComponentInChildren_29, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Entity*, GetComponent_121, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::IRecordable__Array*, GetComponents_9, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::IAttackable*, GetComponentInParent_4, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SeinDamageReciever*, GetComponentInChildren_30, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::HeatUpPlatform__Array*, GetComponentsInChildren_35, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FaderBCustomFadeAction*, AddComponent_79, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SceneRoot*, GetComponent_122, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::Component_1__Array*, GetComponents_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::HoldableRigidBody*, GetComponent_123, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::EntityPlaceholderScalingLink*, AddComponent_80, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MeleeComboMoveSwordAirDown*, GetComponent_124, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BugHornEntity*, GetComponent_125, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritLightRadialVisualAffector*, GetComponent_126, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::InstantiationHistory*, AddComponent_81, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Varying2DSoundProvider*, GetComponent_127, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::BoxCollider*, AddComponent_82, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CapsuleCollider*, AddComponent_83, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::JumpShootShark*, GetComponent_128, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinCharacter*, GetComponent_129, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::JumperEnemy*, GetComponent_130, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::KamikazeJumperGroupAgro*, GetComponent_131, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::KamikazeSootEnemy*, GetComponent_132, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Ku*, GetComponent_133, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::AttachToTransform*, GetComponent_134, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ProjectilesStickToThisPlatform*, GetComponent_135, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::KwolokBossTendril*, GetComponent_136, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritGrenade*, GetComponent_137, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::MoonTimeline*, GetComponentInChildren_31, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LaserShieldPieceProjectile*, GetComponent_138, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LaserShooterShockwave*, GetComponent_139, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LaserShooterHommingMissle*, GetComponent_140, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::OccludeMotionVectors*, GetComponent_141, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::LeakedSceneObjectDetector*, AddComponent_84, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SandTrailParticles*, GetComponent_142, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SinMovement*, GetComponentInChildren_32, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DealDamageOverTime*, GetComponent_143, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DealDamageOverTime*, AddComponent_85, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ICanActivatePressurePlate*, GetComponent_144, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IPushable*, GetComponent_145, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LegacyEntityDamageReciever*, GetComponent_146, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::EnemyEntity*, GetComponent_147, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LegacyEntityDamageDealer*, GetComponent_148, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LegacySwarmEnemy*, GetComponent_149, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DestroyWhenOutsideActiveBoundaries*, GetComponent_150, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BaseAnimator*, GetComponent_151, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LianaEntity*, GetComponent_152, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::KamikazeLizardExplosion*, GetComponent_153, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LoremasterUISlot*, GetComponent_154, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MainThreadLoadingDebugger*, AddComponent_86, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MainThreadSleepTester*, AddComponent_87, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MantisJumpAttackDamageDealer*, GetComponent_155, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MapmakerUIDetails*, GetComponent_156, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpellUIExperience*, GetComponentInChildren_33, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MapmakerUISubItem*, GetComponent_157, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AutoRecorder*, AddComponent_88, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::HammerTrail*, GetComponent_158, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpriteAnimator*, GetComponentInChildren_34, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::HornBugBossEntity*, GetComponentInParent_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ResumeGameController*, GetComponent_159, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MeshTrail*, GetComponent_160, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MeshTrail*, AddComponent_89, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::QuestMessageIcon*, GetComponent_161, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::WispMessageIcon*, GetComponent_162, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellMessageIcon*, GetComponent_163, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PickupMessageIcon*, GetComponent_164, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RaceFinishIcon*, GetComponent_165, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::NPCMessageBox*, GetComponent_166, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FrameCounter_1*, AddComponent_90, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MinerNPCEntity*, GetComponentInChildren_35, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IMinerThrowable*, GetComponent_167, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::VisualLog*, AddComponent_91, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MokiNPCEntity*, GetComponentInChildren_36, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IAnimationMontageEventHandler*, GetComponent_168, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ArtOptimizer*, AddComponent_92, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E5900, void, GetComponentsInParent_7, (app::GameObject * this_ptr, bool include_inactive, app::List_1_UnityEngine_Component_* results))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ParticleSystemRenderer*, GetComponent_169, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::UberShaderComponent*, GetComponent_170, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_36, (app::GameObject * this_ptr, app::List_1_UberShaderComponent_* results))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ChainLightningController*, GetComponent_171, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::HierarchyTestBulkTool*, AddComponent_93, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::HierarchyTester*, AddComponent_94, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::HitStop*, GetComponent_172, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::HitStop*, AddComponent_95, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_37, (app::GameObject * this_ptr, app::List_1_Moon_ISuspendable_* results))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IHoldable*, GetComponent_173, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::DamageReceiver*, GetComponentInChildren_37, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GPUAutoProfiler*, AddComponent_96, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GPUAutoProfilerReportRenderer*, AddComponent_97, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PhysicalSystemManager*, GetComponent_174, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ISuspendable*, GetComponent_175, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::DamageReceiver__Array*, GetComponentsInChildren_38, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::SeinController3D*, GetComponentInChildren_38, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ColorAnimatorSystem*, AddComponent_98, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MoonTimeline__Array*, GetComponentsInChildren_39, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Animator*, GetComponentInChildren_39, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GenericPuppet*, GetComponent_176, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpriteAnimationPlayer*, GetComponent_177, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TransparencyAnimatorSystem*, AddComponent_99, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberShaderAnimatorSystem*, AddComponent_100, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::WindowManager_1*, AddComponent_101, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::LimitedLifetime*, AddComponent_102, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LineRenderer*, GetComponent_178, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberShaderComponent*, AddComponent_103, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PrefabProvider*, GetComponent_179, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::StompableFloor*, GetComponentInParent_6, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::UnityVideoPlayer*, GetComponent_180, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MultiplatformVideoPlayer*, GetComponent_181, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::NPCEntity*, GetComponent_182, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::InteractionGraph*, GetComponentInChildren_40, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::Animator*, GetComponentInChildren_41, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::QuestNodeWisps*, GetComponentInChildren_42, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ScaleAnimator*, GetComponent_183, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinCutsceneBlocked*, GetComponent_184, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinCutsceneMovement*, GetComponent_185, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::RestoreHealthPickup*, GetComponentInChildren_43, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::ExpOrbPickup*, GetComponentInChildren_44, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DropPickup*, GetComponent_186, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PerspectiveRotationSystem*, AddComponent_104, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_40, (app::GameObject * this_ptr, bool include_inactive, app::List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_* results))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_41, (app::GameObject * this_ptr, bool include_inactive, app::List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_* results))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PhysicalSystemProfiler*, AddComponent_105, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GrabbableSurface*, GetComponent_187, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MovieTextureControllerB*, GetComponent_188, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MeshCollider*, AddComponent_106, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MeshFilter*, AddComponent_107, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SoundHost*, GetComponentInChildren_45, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::LegacyAttackableSwitch*, GetComponentInChildren_46, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LegacyEntity*, GetComponent_189, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::WaterPoisonTrail*, GetComponent_190, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::QuestIconUI*, GetComponentInChildren_47, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::QuestItemPickup*, GetComponentInChildren_48, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::QuestItemUI*, GetComponent_191, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::QuestDetailsUI*, GetComponent_192, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RaceMenuScreenUISlot*, GetComponent_193, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MemoryUISlot*, GetComponent_194, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ArmouredRammingEnemy*, GetComponent_195, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CheckpointPlugin*, GetComponent_196, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::InputPlugin*, GetComponent_197, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CharacterPlugin*, GetComponent_198, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CameraPlugin*, GetComponent_199, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RecorderMessagePlugin*, GetComponent_200, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DeathsPlugin*, GetComponent_201, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::AbilitiesPlugin*, GetComponent_202, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CheckpointPlugin*, AddComponent_108, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::InputPlugin*, AddComponent_109, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CharacterPlugin*, AddComponent_110, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CameraPlugin*, AddComponent_111, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::RecorderMessagePlugin*, AddComponent_112, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DeathsPlugin*, AddComponent_113, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AbilitiesPlugin*, AddComponent_114, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FPSPlugin*, AddComponent_115, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TesterPlugin*, AddComponent_116, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PositionCheckerPlugin*, AddComponent_117, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FPSPlugin*, GetComponent_203, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TesterPlugin*, GetComponent_204, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PositionCheckerPlugin*, GetComponent_205, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RecorderPlaybackUITimeline*, GetComponent_206, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Camera*, GetComponentInChildren_49, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RecorderMessageInputUI*, GetComponent_207, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AsyncRenderCapture*, AddComponent_118, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::RespawningPlaceholder__Array*, GetComponentsInChildren_42, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DestroyWhenOutsideActiveBoundaries*, AddComponent_119, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Rigidbody__Array*, GetComponentsInChildren_43, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GoThroughPlatform*, GetComponent_208, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RockyEnemy*, GetComponent_209, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ActionMethod*, GetComponent_210, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::RockyEnemy*, GetComponentInChildren_50, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_5, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Rigidbody*, AddComponent_120, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::AreaMapIcon*, GetComponent_211, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CharacterJoint*, AddComponent_121, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SandTrail*, GetComponent_212, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SceneFPSTest*, AddComponent_122, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SceneFrameworkDebugger*, AddComponent_123, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SceneFrameworkPerformanceMonitor*, AddComponent_124, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SceneLayers*, AddComponent_125, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ObjectDisabler*, GetComponent_213, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BashAttackGame*, GetComponent_214, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::EnemyEntity*, GetComponentInParent_7, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E57D0, void, GetComponentsInChildren_44, (app::GameObject * this_ptr, bool include_inactive, app::List_1_UnityEngine_ParticleSystem_* results))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::BowArrow*, GetComponent_215, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinBowMark*, GetComponent_216, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ChakramProjectile*, GetComponent_217, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::ISeinReceiver__Array*, GetComponentsInChildren_45, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x015E4260, void, GetComponentsInChildren_46, (app::GameObject * this_ptr, app::List_1_LegacyAnimator_* results))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritShotProjectile*, GetComponent_218, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Transform*, GetComponent_219, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MeleeWeapon*, GetComponent_220, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_6, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_7, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CapsuleCollider*, GetComponent_221, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DigZoneHandler*, AddComponent_126, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::DrillZone*, GetComponentInChildren_51, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::GoldenSein*, GetComponentInChildren_52, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GrenadeBurst*, GetComponent_222, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IGreanade*, GetComponent_223, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::StartLoopEndEffect*, GetComponent_224, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TargetPositionFollower*, GetComponent_225, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::HomingMissile*, GetComponent_226, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LockOnTarget*, GetComponent_227, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IKillReciever*, GetComponent_228, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::JumpShotShield*, GetComponent_229, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinLifeAbsorbArm*, GetComponent_230, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LockOnTargetProjectile*, GetComponent_231, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Polygon_1*, GetComponent_232, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Mine*, GetComponent_233, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ParticleSystem*, GetComponentInChildren_53, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::EntityPlatformingMovement*, GetComponentInParent_8, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SoulFlame*, GetComponent_234, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritCrescent*, GetComponent_235, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AC00, bool, TryGetComponent_3, (app::GameObject * this_ptr, app::GrabbableSurface** component))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritLeashEffectPoseAnimator*, GetComponent_236, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LeashMarkEffect*, GetComponent_237, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::HookFlingPlant*, GetComponentInChildren_54, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritSentry*, GetComponent_238, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpikeProjectile*, GetComponent_239, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::StickyMine*, GetComponent_240, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Trap*, GetComponent_241, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritTurret*, GetComponent_242, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ActionSequence*, AddComponent_127, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ConfigureConfigurableJointAction*, AddComponent_128, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GenericAttackable*, AddComponent_129, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::GoThroughPlatform*, AddComponent_130, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::MeshCollider*, GetComponent_243, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::OwlProjectileTest*, AddComponent_131, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PhysicalSystemManager*, AddComponent_132, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MeshRenderer*, AddComponent_133, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ProjectileSpawnerPinkPlantBrain*, AddComponent_134, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SetRigidBodyPropertiesAction*, AddComponent_135, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SphereCollider*, AddComponent_136, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::LegacyTimelineSequence*, AddComponent_137, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::ShardTraderEntity*, GetComponentInChildren_55, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ShootingSpider*, GetComponent_244, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ShopkeeperUIDetails*, GetComponent_245, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUIShardEquipStatus*, GetComponent_246, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ShopkeeperUISubItem*, GetComponent_247, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SoundSource*, GetComponent_248, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::TextBox*, GetComponentInChildren_56, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpiritTreeTextLocationController*, GetComponentInChildren_57, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::TextBoxMessage*, GetComponentInChildren_58, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::CollectablePlaceholder*, GetComponentInChildren_59, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::HomingProjectile*, GetComponent_249, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SkillUpgradeUIUpgradeDetails*, GetComponent_250, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SkillUpgradeShopUISubItem*, GetComponent_251, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::SkinnedMeshRenderer__Array*, GetComponentsInChildren_47, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpikeSlugEntity*, GetComponent_252, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::Rigidbody*, GetComponentInChildren_60, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SnapTrapEntity*, GetComponent_253, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::PoisonousCloud*, GetComponent_254, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SoundCompositionTransitionHandler*, AddComponent_138, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SoundCompositionPlayer*, AddComponent_139, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SoundMessage*, AddComponent_140, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TextBoxMessage*, GetComponent_255, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::LegacyBabyWaterWorm*, GetComponent_256, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpellPickup*, GetComponentInChildren_61, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUISpellDetails*, GetComponent_257, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::EquipmentUIInventoryGrid*, GetComponentInChildren_62, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritShardUIShardDetails*, GetComponent_258, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::WidgetUIHorizontalSelect*, GetComponent_259, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUIExperience*, GetComponent_260, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUIShardListOverlay*, GetComponent_261, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUIConfirmationOverlay*, GetComponent_262, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpellUIPassiveShards*, GetComponent_263, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritShardUIShardSocket*, GetComponent_264, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SphereCollider*, GetComponent_265, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiderBatEntity*, GetComponent_266, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::RetaliateShriek*, GetComponent_267, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SelfDestruct*, GetComponent_268, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::EntityPlaceholder__Array*, GetComponentsInChildren_48, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ShellSlugShell*, GetComponent_269, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E56B0, void, GetComponents_11, (app::GameObject * this_ptr, app::List_1_LegacyEntityDamageReciever_* results))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::MoonTrail__Array*, GetComponentsInChildren_49, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x02FF5FD0, app::ParticleSystem__Array*, GetComponentsInChildren_50, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::SpiritGrenade*, GetComponentInParent_9, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CD90, app::AttackableSwitch*, GetComponentInParent_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::AttachToRope*, GetComponentInChildren_63, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpiritShardPickup*, GetComponentInChildren_64, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritShardUIItem*, GetComponent_270, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpiritShardUIItem*, GetComponentInChildren_65, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpiritShardUIConfirmationOverlay*, GetComponent_271, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpriteAnimator__Array*, GetComponentsInChildren_51, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpitterEnemy*, GetComponent_272, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::SpringSeinAction*, GetComponentInChildren_66, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::StarSlugEnemy*, GetComponent_273, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::StateMachineBehaviourProxy_IReceiver*, GetComponent_274, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::StateMachineBehaviourProxy*, GetComponent_275, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::StatisticianEntity*, GetComponentInChildren_67, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::StatUISlot*, GetComponent_276, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SteamManager*, AddComponent_141, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SwarmAgent*, GetComponent_277, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SwarmNestEntity*, GetComponent_278, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SwarmEntity*, GetComponent_279, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::SystemIntegrationMainThreadRunner*, AddComponent_142, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Browser*, GetComponent_280, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IAttackable*, GetComponent_281, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::LegacyHealthBar*, GetComponentInChildren_68, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_8, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TentacleJoint*, GetComponent_282, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_9, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TentacleEnemy*, GetComponent_283, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0156AB00, bool, HasComponent_10, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC60, app::MoonAnimator*, GetComponentInChildren_69, (app::GameObject * this_ptr, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TimesliceDebugger*, AddComponent_143, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TimesliceSpikeReporter*, AddComponent_144, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::ITrapAttackable*, GetComponent_284, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::CageStructureTool*, GetComponent_285, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::UberGhostTrailMeshUpdate*, GetComponent_286, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SpriteAnimator*, GetComponent_287, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SeinNaruComboAnimator*, GetComponent_288, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberPoolGroup*, AddComponent_145, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberPoolPerfTest*, AddComponent_146, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::TextMesh*, GetComponent_289, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberShaderBlockTextured*, AddComponent_147, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberShaderDetector*, AddComponent_148, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::UberShaderRuntimeUpdate*, AddComponent_149, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::AudioSource*, AddComponent_150, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::Animation*, GetComponent_290, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::TextMesh*, AddComponent_151, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MeshFilter__Array*, GetComponentsInChildren_52, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::VerletStructure*, GetComponent_291, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::IAlignable*, GetComponent_292, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::WandererEntity*, GetComponent_293, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::WeaponMasterEntity*, GetComponentInChildren_70, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::IWindPipeZoneReceiver*, GetComponentInChildren_71, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SceneSettingsComponent*, GetComponent_294, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::WwiseBootstrap*, GetComponent_295, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::Browser*, AddComponent_152, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::PointerUIMesh*, AddComponent_153, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::CursorRendererOS*, AddComponent_154, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ClickMeshBrowserUI*, AddComponent_155, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DialogHandler*, AddComponent_156, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::FPSBrowserUI*, GetComponent_296, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FPSBrowserUI*, AddComponent_157, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::FPSCursorRenderer*, AddComponent_158, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::StandaloneShutdown*, AddComponent_159, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DestroyDetector*, AddComponent_160, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::VRBrowserPanel*, GetComponent_297, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GameWorldArea*, GetComponent_298, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::DepthOfFieldController*, GetComponent_299, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::ScreenshotRecorder*, AddComponent_161, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::MonoManager*, AddComponent_162, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::P3D_BrushPreview*, AddComponent_163, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::SkinnedMeshRenderer*, GetComponent_300, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::P3D_TexturePreview*, AddComponent_164, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157C980, app::DrivableGroup*, AddComponent_165, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E56B0, void, GetComponents_12, (app::GameObject * this_ptr, app::List_1_UnityEngine_Component_* results))
    IL2CPP_REGISTER_METHOD(0x02FF5E50, app::MonoBehaviour__Array*, GetComponents_13, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CC30, app::MonoBehaviour__Array*, GetComponentsInChildren_53, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GenericCastManagerCompleteJobs*, GetComponent_301, (app::GameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157CB10, app::GenericCastManagerScheduleJobs*, GetComponent_302, (app::GameObject * this_ptr))
} // namespace app::classes::UnityEngine::GameObject
