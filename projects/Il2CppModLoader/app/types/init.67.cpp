#include <Il2CppModLoader/app/types/AbilityBasedSetting.h>
#include <Il2CppModLoader/app/types/AcidSlugChargingState.h>
#include <Il2CppModLoader/app/types/AcidSlugCrawlingState.h>
#include <Il2CppModLoader/app/types/AcidSlugEnemy_States.h>
#include <Il2CppModLoader/app/types/AcidSlugEnemy_c.h>
#include <Il2CppModLoader/app/types/AcidSlugShootingState.h>
#include <Il2CppModLoader/app/types/ArmouredRammingEnemy_c.h>
#include <Il2CppModLoader/app/types/CameraAdditiveSettings.h>
#include <Il2CppModLoader/app/types/CameraGoThroughScrollLocks.h>
#include <Il2CppModLoader/app/types/CameraOffsetController.h>
#include <Il2CppModLoader/app/types/CameraPostProcessing.h>
#include <Il2CppModLoader/app/types/CameraPuppetController.h>
#include <Il2CppModLoader/app/types/CameraScrollLockConstraint.h>
#include <Il2CppModLoader/app/types/CameraShakeLogic.h>
#include <Il2CppModLoader/app/types/CameraTarget.h>
#include <Il2CppModLoader/app/types/ChangeDetectorFloat.h>
#include <Il2CppModLoader/app/types/ChangeDetectorString.h>
#include <Il2CppModLoader/app/types/ControllerShakeLogic.h>
#include <Il2CppModLoader/app/types/DamageReceiverForwarder_c.h>
#include <Il2CppModLoader/app/types/DropSlugFallState.h>
#include <Il2CppModLoader/app/types/DropSlugLandState.h>
#include <Il2CppModLoader/app/types/DropSlugThrownState.h>
#include <Il2CppModLoader/app/types/DynamicCameraTargetting.h>
#include <Il2CppModLoader/app/types/EnemyStopper.h>
#include <Il2CppModLoader/app/types/EnemyZone.h>
#include <Il2CppModLoader/app/types/EntityControllerSM.h>
#include <Il2CppModLoader/app/types/EntityPlatformingMovement.h>
#include <Il2CppModLoader/app/types/EntitySettings.h>
#include <Il2CppModLoader/app/types/EntityTargetting_c.h>
#include <Il2CppModLoader/app/types/FaderBrightnessContrastSettings.h>
#include <Il2CppModLoader/app/types/FishAttackState.h>
#include <Il2CppModLoader/app/types/FishBashedState.h>
#include <Il2CppModLoader/app/types/FishBounceState.h>
#include <Il2CppModLoader/app/types/FishEnemy_States.h>
#include <Il2CppModLoader/app/types/FishFallState.h>
#include <Il2CppModLoader/app/types/FishFlopState.h>
#include <Il2CppModLoader/app/types/FishIdleState.h>
#include <Il2CppModLoader/app/types/FishSwimState.h>
#include <Il2CppModLoader/app/types/FloatProviderZone__Array.h>
#include <Il2CppModLoader/app/types/FloatingRockLaserEnemy_States.h>
#include <Il2CppModLoader/app/types/FloatingRockTurretEnemy_States.h>
#include <Il2CppModLoader/app/types/InterestSettings.h>
#include <Il2CppModLoader/app/types/JumpShootShark.h>
#include <Il2CppModLoader/app/types/JumpShootShark_States.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyAlertState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyDropState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyIdleState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyRollingState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemy_States.h>
#include <Il2CppModLoader/app/types/LegacyDamageReciever_c_DisplayClass28_0.h>
#include <Il2CppModLoader/app/types/LegacyEntityDamageReciever_c.h>
#include <Il2CppModLoader/app/types/LegacyEntity_c_DisplayClass69_0.h>
#include <Il2CppModLoader/app/types/LegacyRespawner.h>
#include <Il2CppModLoader/app/types/LegacySwarmEnemy.h>
#include <Il2CppModLoader/app/types/LegacySwarmEnemyManager.h>
#include <Il2CppModLoader/app/types/LegacySwarmEnemy_States.h>
#include <Il2CppModLoader/app/types/MortarWormChargingState.h>
#include <Il2CppModLoader/app/types/MortarWormEnemy.h>
#include <Il2CppModLoader/app/types/MortarWormEnemyDeath_Start_d_4.h>
#include <Il2CppModLoader/app/types/MortarWormEnemy_States.h>
#include <Il2CppModLoader/app/types/MortarWormEnemy_c.h>
#include <Il2CppModLoader/app/types/MortarWormIdleState.h>
#include <Il2CppModLoader/app/types/MortarWormTrajectoryHelper.h>
#include <Il2CppModLoader/app/types/MovingGroundHelper.h>
#include <Il2CppModLoader/app/types/NewEntityPlatformMovement_AirSuspension.h>
#include <Il2CppModLoader/app/types/NewEntityPlatformMovement_KickbackEntry.h>
#include <Il2CppModLoader/app/types/RammingAlertState.h>
#include <Il2CppModLoader/app/types/RammingBrakingState.h>
#include <Il2CppModLoader/app/types/RammingEnemy_States.h>
#include <Il2CppModLoader/app/types/RammingHitWallState.h>
#include <Il2CppModLoader/app/types/RammingIdleState.h>
#include <Il2CppModLoader/app/types/RammingKnockBackState.h>
#include <Il2CppModLoader/app/types/RammingRetreatState.h>
#include <Il2CppModLoader/app/types/RammingRunningState.h>
#include <Il2CppModLoader/app/types/RammingStunnedState.h>
#include <Il2CppModLoader/app/types/Ray__Array.h>
#include <Il2CppModLoader/app/types/RespawningPlaceholder_c.h>
#include <Il2CppModLoader/app/types/RockyEnemyAnticipatingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyChargingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyClosedState.h>
#include <Il2CppModLoader/app/types/RockyEnemyClosingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyIdleState.h>
#include <Il2CppModLoader/app/types/RockyEnemyOpeningState.h>
#include <Il2CppModLoader/app/types/RockyEnemyShootingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyThrownState.h>
#include <Il2CppModLoader/app/types/RockyEnemyWalkState.h>
#include <Il2CppModLoader/app/types/RockyEnemy_States.h>
#include <Il2CppModLoader/app/types/SceneDefaultSettingsHelper.h>
#include <Il2CppModLoader/app/types/ShootingSpider_States.h>
#include <Il2CppModLoader/app/types/SlugDirectionalAnimationPicker.h>
#include <Il2CppModLoader/app/types/StarSlugChargingState.h>
#include <Il2CppModLoader/app/types/StarSlugCrawlingState.h>
#include <Il2CppModLoader/app/types/StarSlugEnemy_States.h>
#include <Il2CppModLoader/app/types/StarSlugEnemy_c.h>
#include <Il2CppModLoader/app/types/StarSlugShootingState.h>
#include <Il2CppModLoader/app/types/UberPostProcess.h>
#include <Il2CppModLoader/app/types/WormEmergingState.h>
#include <Il2CppModLoader/app/types/WormHiddenState.h>
#include <Il2CppModLoader/app/types/WormHidingState.h>
#include <Il2CppModLoader/app/types/WormMortarShootingState.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugFallState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugFallState__Class** type_info = (::app::DropSlugFallState__Class**)(modloader::win::memory::resolve_rva(0x04789100));
    }
    namespace DropSlugLandState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugLandState__Class** type_info = (::app::DropSlugLandState__Class**)(modloader::win::memory::resolve_rva(0x04715A88));
    }
    namespace DropSlugThrownState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugThrownState__Class** type_info = (::app::DropSlugThrownState__Class**)(modloader::win::memory::resolve_rva(0x04778EC8));
    }
    namespace FishAttackState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishAttackState__Class** type_info = (::app::FishAttackState__Class**)(modloader::win::memory::resolve_rva(0x04709300));
    }
    namespace FishEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishEnemy_States__Class** type_info = (::app::FishEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0472F1D8));
    }
    namespace FishIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishIdleState__Class** type_info = (::app::FishIdleState__Class**)(modloader::win::memory::resolve_rva(0x04736348));
    }
    namespace FishSwimState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishSwimState__Class** type_info = (::app::FishSwimState__Class**)(modloader::win::memory::resolve_rva(0x04756D38));
    }
    namespace FishBashedState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishBashedState__Class** type_info = (::app::FishBashedState__Class**)(modloader::win::memory::resolve_rva(0x04778798));
    }
    namespace FishBounceState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishBounceState__Class** type_info = (::app::FishBounceState__Class**)(modloader::win::memory::resolve_rva(0x047890F0));
    }
    namespace FishFlopState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishFlopState__Class** type_info = (::app::FishFlopState__Class**)(modloader::win::memory::resolve_rva(0x04706100));
    }
    namespace FishFallState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FishFallState__Class** type_info = (::app::FishFallState__Class**)(modloader::win::memory::resolve_rva(0x0476AFC0));
    }
    namespace ChangeDetectorString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChangeDetectorString__Class** type_info = (::app::ChangeDetectorString__Class**)(modloader::win::memory::resolve_rva(0x0473E9B8));
    }
    namespace ChangeDetectorFloat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChangeDetectorFloat__Class** type_info = (::app::ChangeDetectorFloat__Class**)(modloader::win::memory::resolve_rva(0x04744858));
    }
    namespace DamageReceiverForwarder_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiverForwarder_c__Class** type_info = (::app::DamageReceiverForwarder_c__Class**)(modloader::win::memory::resolve_rva(0x047371C0));
    }
    namespace EnemyStopper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyStopper__Class** type_info = (::app::EnemyStopper__Class**)(modloader::win::memory::resolve_rva(0x04726A60));
    }
    namespace EntityControllerSM {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityControllerSM__Class** type_info = (::app::EntityControllerSM__Class**)(modloader::win::memory::resolve_rva(0x0470ED20));
    }
    namespace EntityTargetting_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityTargetting_c__Class** type_info = (::app::EntityTargetting_c__Class**)(modloader::win::memory::resolve_rva(0x0475B658));
    }
    namespace RockyEnemyAnticipatingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyAnticipatingState__Class** type_info = (::app::RockyEnemyAnticipatingState__Class**)(modloader::win::memory::resolve_rva(0x047320C8));
    }
    namespace RockyEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemy_States__Class** type_info = (::app::RockyEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0474B258));
    }
    namespace RockyEnemyIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyIdleState__Class** type_info = (::app::RockyEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x047738F0));
    }
    namespace RockyEnemyWalkState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyWalkState__Class** type_info = (::app::RockyEnemyWalkState__Class**)(modloader::win::memory::resolve_rva(0x04777B40));
    }
    namespace RockyEnemyChargingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyChargingState__Class** type_info = (::app::RockyEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0475F1A0));
    }
    namespace RockyEnemyShootingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyShootingState__Class** type_info = (::app::RockyEnemyShootingState__Class**)(modloader::win::memory::resolve_rva(0x0472E0A0));
    }
    namespace RockyEnemyClosingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyClosingState__Class** type_info = (::app::RockyEnemyClosingState__Class**)(modloader::win::memory::resolve_rva(0x047653B8));
    }
    namespace RockyEnemyClosedState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyClosedState__Class** type_info = (::app::RockyEnemyClosedState__Class**)(modloader::win::memory::resolve_rva(0x0475B870));
    }
    namespace RockyEnemyOpeningState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyOpeningState__Class** type_info = (::app::RockyEnemyOpeningState__Class**)(modloader::win::memory::resolve_rva(0x0474FDB8));
    }
    namespace RockyEnemyThrownState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyThrownState__Class** type_info = (::app::RockyEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04796C68));
    }
    namespace LegacyDamageReciever_c_DisplayClass28_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyDamageReciever_c_DisplayClass28_0__Class** type_info = (::app::LegacyDamageReciever_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x047120A8));
    }
    namespace LegacyEntity_c_DisplayClass69_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyEntity_c_DisplayClass69_0__Class** type_info = (::app::LegacyEntity_c_DisplayClass69_0__Class**)(modloader::win::memory::resolve_rva(0x0470B640));
    }
    namespace LegacyEntityDamageReciever_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyEntityDamageReciever_c__Class** type_info = (::app::LegacyEntityDamageReciever_c__Class**)(modloader::win::memory::resolve_rva(0x04780610));
    }
    namespace LegacyRespawner {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyRespawner__Class** type_info = (::app::LegacyRespawner__Class**)(modloader::win::memory::resolve_rva(0x04717EF8));
    }
    namespace EntityPlatformingMovement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlatformingMovement__Class** type_info = (::app::EntityPlatformingMovement__Class**)(modloader::win::memory::resolve_rva(0x04797510));
    }
    namespace MovingGroundHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MovingGroundHelper__Class** type_info = (::app::MovingGroundHelper__Class**)(modloader::win::memory::resolve_rva(0x04787870));
    }
    namespace NewEntityPlatformMovement_KickbackEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewEntityPlatformMovement_KickbackEntry__Class** type_info = (::app::NewEntityPlatformMovement_KickbackEntry__Class**)(modloader::win::memory::resolve_rva(0x04717840));
    }
    namespace NewEntityPlatformMovement_AirSuspension {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewEntityPlatformMovement_AirSuspension__Class** type_info = (::app::NewEntityPlatformMovement_AirSuspension__Class**)(modloader::win::memory::resolve_rva(0x047437E8));
    }
    namespace EnemyZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyZone__Class** type_info = (::app::EnemyZone__Class**)(modloader::win::memory::resolve_rva(0x0474B998));
    }
    namespace KamikazeSootEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemy_States__Class** type_info = (::app::KamikazeSootEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0476EE98));
    }
    namespace KamikazeSootEnemyDropState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyDropState__Class** type_info = (::app::KamikazeSootEnemyDropState__Class**)(modloader::win::memory::resolve_rva(0x047157C8));
    }
    namespace KamikazeSootEnemyAlertState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyAlertState__Class** type_info = (::app::KamikazeSootEnemyAlertState__Class**)(modloader::win::memory::resolve_rva(0x04796D80));
    }
    namespace KamikazeSootEnemyIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyIdleState__Class** type_info = (::app::KamikazeSootEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x04715580));
    }
    namespace KamikazeSootEnemyRollingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyRollingState__Class** type_info = (::app::KamikazeSootEnemyRollingState__Class**)(modloader::win::memory::resolve_rva(0x047088B8));
    }
    namespace RammingEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingEnemy_States__Class** type_info = (::app::RammingEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04714E20));
    }
    namespace RammingIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingIdleState__Class** type_info = (::app::RammingIdleState__Class**)(modloader::win::memory::resolve_rva(0x0478E618));
    }
    namespace RammingAlertState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingAlertState__Class** type_info = (::app::RammingAlertState__Class**)(modloader::win::memory::resolve_rva(0x0470BA78));
    }
    namespace RammingRunningState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingRunningState__Class** type_info = (::app::RammingRunningState__Class**)(modloader::win::memory::resolve_rva(0x0475AC10));
    }
    namespace RammingBrakingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBrakingState__Class** type_info = (::app::RammingBrakingState__Class**)(modloader::win::memory::resolve_rva(0x0473A580));
    }
    namespace RammingHitWallState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingHitWallState__Class** type_info = (::app::RammingHitWallState__Class**)(modloader::win::memory::resolve_rva(0x04766F20));
    }
    namespace RammingStunnedState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingStunnedState__Class** type_info = (::app::RammingStunnedState__Class**)(modloader::win::memory::resolve_rva(0x0474FCA8));
    }
    namespace RammingKnockBackState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingKnockBackState__Class** type_info = (::app::RammingKnockBackState__Class**)(modloader::win::memory::resolve_rva(0x04745240));
    }
    namespace RammingRetreatState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RammingRetreatState__Class** type_info = (::app::RammingRetreatState__Class**)(modloader::win::memory::resolve_rva(0x047994E0));
    }
    namespace ArmouredRammingEnemy_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArmouredRammingEnemy_c__Class** type_info = (::app::ArmouredRammingEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x0472E410));
    }
    namespace FloatingRockLaserEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatingRockLaserEnemy_States__Class** type_info = (::app::FloatingRockLaserEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04753A58));
    }
    namespace FloatingRockTurretEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatingRockTurretEnemy_States__Class** type_info = (::app::FloatingRockTurretEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04799640));
    }
    namespace JumpShootShark {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JumpShootShark__Class** type_info = (::app::JumpShootShark__Class**)(modloader::win::memory::resolve_rva(0x047685A0));
    }
    namespace JumpShootShark_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JumpShootShark_States__Class** type_info = (::app::JumpShootShark_States__Class**)(modloader::win::memory::resolve_rva(0x04741FB8));
    }
    namespace AcidSlugCrawlingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugCrawlingState__Class** type_info = (::app::AcidSlugCrawlingState__Class**)(modloader::win::memory::resolve_rva(0x0477A500));
    }
    namespace AcidSlugEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugEnemy_States__Class** type_info = (::app::AcidSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04734E40));
    }
    namespace AcidSlugChargingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugChargingState__Class** type_info = (::app::AcidSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x04783E90));
    }
    namespace AcidSlugShootingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugShootingState__Class** type_info = (::app::AcidSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04771390));
    }
    namespace AcidSlugEnemy_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugEnemy_c__Class** type_info = (::app::AcidSlugEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04779168));
    }
    namespace SlugDirectionalAnimationPicker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SlugDirectionalAnimationPicker__Class** type_info = (::app::SlugDirectionalAnimationPicker__Class**)(modloader::win::memory::resolve_rva(0x0473B670));
    }
    namespace StarSlugEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugEnemy_States__Class** type_info = (::app::StarSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x047761D8));
    }
    namespace StarSlugCrawlingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugCrawlingState__Class** type_info = (::app::StarSlugCrawlingState__Class**)(modloader::win::memory::resolve_rva(0x04788608));
    }
    namespace StarSlugChargingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugChargingState__Class** type_info = (::app::StarSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x0471C9B8));
    }
    namespace StarSlugShootingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugShootingState__Class** type_info = (::app::StarSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04745670));
    }
    namespace StarSlugEnemy_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugEnemy_c__Class** type_info = (::app::StarSlugEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x0473F040));
    }
    namespace ShootingSpider_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShootingSpider_States__Class** type_info = (::app::ShootingSpider_States__Class**)(modloader::win::memory::resolve_rva(0x04727CE0));
    }
    namespace LegacySwarmEnemy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacySwarmEnemy__Class** type_info = (::app::LegacySwarmEnemy__Class**)(modloader::win::memory::resolve_rva(0x0477B870));
    }
    namespace LegacySwarmEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacySwarmEnemy_States__Class** type_info = (::app::LegacySwarmEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0471C7C8));
    }
    namespace LegacySwarmEnemyManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacySwarmEnemyManager__Class** type_info = (::app::LegacySwarmEnemyManager__Class**)(modloader::win::memory::resolve_rva(0x04761540));
    }
    namespace MortarWormEnemy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemy__Class** type_info = (::app::MortarWormEnemy__Class**)(modloader::win::memory::resolve_rva(0x04797B08));
    }
    namespace MortarWormEnemy_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemy_States__Class** type_info = (::app::MortarWormEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0470B8A8));
    }
    namespace MortarWormTrajectoryHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormTrajectoryHelper__Class** type_info = (::app::MortarWormTrajectoryHelper__Class**)(modloader::win::memory::resolve_rva(0x04733A50));
    }
    namespace MortarWormEnemy_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemy_c__Class** type_info = (::app::MortarWormEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04750C58));
    }
    namespace MortarWormEnemyDeath_Start_d_4 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemyDeath_Start_d_4__Class** type_info = (::app::MortarWormEnemyDeath_Start_d_4__Class**)(modloader::win::memory::resolve_rva(0x0471E4E0));
    }
    namespace RespawningPlaceholder_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RespawningPlaceholder_c__Class** type_info = (::app::RespawningPlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04798B30));
    }
    namespace MortarWormIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormIdleState__Class** type_info = (::app::MortarWormIdleState__Class**)(modloader::win::memory::resolve_rva(0x047095C0));
    }
    namespace MortarWormChargingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormChargingState__Class** type_info = (::app::MortarWormChargingState__Class**)(modloader::win::memory::resolve_rva(0x047883A8));
    }
    namespace WormEmergingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormEmergingState__Class** type_info = (::app::WormEmergingState__Class**)(modloader::win::memory::resolve_rva(0x0470CCF0));
    }
    namespace WormHiddenState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormHiddenState__Class** type_info = (::app::WormHiddenState__Class**)(modloader::win::memory::resolve_rva(0x04759558));
    }
    namespace WormHidingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormHidingState__Class** type_info = (::app::WormHidingState__Class**)(modloader::win::memory::resolve_rva(0x04753728));
    }
    namespace WormMortarShootingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormMortarShootingState__Class** type_info = (::app::WormMortarShootingState__Class**)(modloader::win::memory::resolve_rva(0x0476FE40));
    }
    namespace CameraPostProcessing {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPostProcessing__Class** type_info = (::app::CameraPostProcessing__Class**)(modloader::win::memory::resolve_rva(0x0472E620));
    }
    namespace UberPostProcess {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPostProcess__Class** type_info = (::app::UberPostProcess__Class**)(modloader::win::memory::resolve_rva(0x04781B50));
    }
    namespace FaderBrightnessContrastSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FaderBrightnessContrastSettings__Class** type_info = (::app::FaderBrightnessContrastSettings__Class**)(modloader::win::memory::resolve_rva(0x047297A0));
    }
    namespace CameraAdditiveSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraAdditiveSettings__Class** type_info = (::app::CameraAdditiveSettings__Class**)(modloader::win::memory::resolve_rva(0x047816E8));
    }
    namespace SceneDefaultSettingsHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneDefaultSettingsHelper__Class** type_info = (::app::SceneDefaultSettingsHelper__Class**)(modloader::win::memory::resolve_rva(0x0476C8D0));
    }
    namespace CameraPuppetController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPuppetController__Class** type_info = (::app::CameraPuppetController__Class**)(modloader::win::memory::resolve_rva(0x04773108));
    }
    namespace FloatProviderZone__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatProviderZone__Array__Class** type_info = (::app::FloatProviderZone__Array__Class**)(modloader::win::memory::resolve_rva(0x047391C0));
    }
    namespace CameraShakeLogic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraShakeLogic__Class** type_info = (::app::CameraShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x0473BB38));
    }
    namespace CameraTarget {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraTarget__Class** type_info = (::app::CameraTarget__Class**)(modloader::win::memory::resolve_rva(0x047630E0));
    }
    namespace CameraOffsetController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetController__Class** type_info = (::app::CameraOffsetController__Class**)(modloader::win::memory::resolve_rva(0x0474F1F0));
    }
    namespace CameraScrollLockConstraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraScrollLockConstraint__Class** type_info = (::app::CameraScrollLockConstraint__Class**)(modloader::win::memory::resolve_rva(0x0477D3D0));
    }
    namespace Ray__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Ray__Array__Class** type_info = (::app::Ray__Array__Class**)(modloader::win::memory::resolve_rva(0x04719160));
    }
    namespace DynamicCameraTargetting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicCameraTargetting__Class** type_info = (::app::DynamicCameraTargetting__Class**)(modloader::win::memory::resolve_rva(0x04708260));
    }
    namespace InterestSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InterestSettings__Class** type_info = (::app::InterestSettings__Class**)(modloader::win::memory::resolve_rva(0x0474D1A0));
    }
    namespace EntitySettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntitySettings__Class** type_info = (::app::EntitySettings__Class**)(modloader::win::memory::resolve_rva(0x0472B7B0));
    }
    namespace AbilityBasedSetting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityBasedSetting__Class** type_info = (::app::AbilityBasedSetting__Class**)(modloader::win::memory::resolve_rva(0x0471AF90));
    }
    namespace CameraGoThroughScrollLocks {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraGoThroughScrollLocks__Class** type_info = (::app::CameraGoThroughScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04754D68));
    }
    namespace ControllerShakeLogic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerShakeLogic__Class** type_info = (::app::ControllerShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x04778C58));
    }
} // namespace app::classes::types
