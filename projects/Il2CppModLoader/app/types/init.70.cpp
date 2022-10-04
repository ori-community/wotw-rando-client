#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/AllEnemiesKilledTrigger.h>
#include <Il2CppModLoader/app/types/AutoDamageCollider_AutoDamageColliderEntry.h>
#include <Il2CppModLoader/app/types/AutoDamageCollider_c.h>
#include <Il2CppModLoader/app/types/AutoDamageColliderResolver.h>
#include <Il2CppModLoader/app/types/DamageResultContext.h>
#include <Il2CppModLoader/app/types/Damage_c.h>
#include <Il2CppModLoader/app/types/DamageDealer_c.h>
#include <Il2CppModLoader/app/types/EnemyArenaController_WaveStatus__Enum.h>
#include <Il2CppModLoader/app/types/EnemyArenaController_EnemyWave.h>
#include <Il2CppModLoader/app/types/SpriteAnimator_c.h>
#include <Il2CppModLoader/app/types/SpriteAnimatorWithTransitions_c.h>
#include <Il2CppModLoader/app/types/TextureAnimation_c_DisplayClass15_0.h>
#include <Il2CppModLoader/app/types/TextureAnimator_c.h>
#include <Il2CppModLoader/app/types/DashOwlEnemy_States.h>
#include <Il2CppModLoader/app/types/DashOwlIdleState.h>
#include <Il2CppModLoader/app/types/DashOwlFlyHomeState.h>
#include <Il2CppModLoader/app/types/DashOwlBashedState.h>
#include <Il2CppModLoader/app/types/DashOwlBounceState.h>
#include <Il2CppModLoader/app/types/DashOwlDashState.h>
#include <Il2CppModLoader/app/types/DashOwlDashAlertState.h>
#include <Il2CppModLoader/app/types/DashOwlHurtState.h>
#include <Il2CppModLoader/app/types/DashOwlSpiritLeashedState.h>
#include <Il2CppModLoader/app/types/DashOwlEnemy_c.h>
#include <Il2CppModLoader/app/types/DropSlugAlertState.h>
#include <Il2CppModLoader/app/types/DropSlugEnemy_States.h>
#include <Il2CppModLoader/app/types/DropSlugIdleState.h>
#include <Il2CppModLoader/app/types/DropSlugFallState.h>
#include <Il2CppModLoader/app/types/DropSlugLandState.h>
#include <Il2CppModLoader/app/types/DropSlugThrownState.h>
#include <Il2CppModLoader/app/types/FishAttackState.h>
#include <Il2CppModLoader/app/types/FishEnemy_States.h>
#include <Il2CppModLoader/app/types/FishIdleState.h>
#include <Il2CppModLoader/app/types/FishSwimState.h>
#include <Il2CppModLoader/app/types/FishBashedState.h>
#include <Il2CppModLoader/app/types/FishBounceState.h>
#include <Il2CppModLoader/app/types/FishFlopState.h>
#include <Il2CppModLoader/app/types/FishFallState.h>
#include <Il2CppModLoader/app/types/ChangeDetectorString.h>
#include <Il2CppModLoader/app/types/ChangeDetectorFloat.h>
#include <Il2CppModLoader/app/types/DamageReceiverForwarder_c.h>
#include <Il2CppModLoader/app/types/EnemyStopper.h>
#include <Il2CppModLoader/app/types/EntityControllerSM.h>
#include <Il2CppModLoader/app/types/EntityTargetting_c.h>
#include <Il2CppModLoader/app/types/RockyEnemyAnticipatingState.h>
#include <Il2CppModLoader/app/types/RockyEnemy_States.h>
#include <Il2CppModLoader/app/types/RockyEnemyIdleState.h>
#include <Il2CppModLoader/app/types/RockyEnemyWalkState.h>
#include <Il2CppModLoader/app/types/RockyEnemyChargingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyShootingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyClosingState.h>
#include <Il2CppModLoader/app/types/RockyEnemyClosedState.h>
#include <Il2CppModLoader/app/types/RockyEnemyOpeningState.h>
#include <Il2CppModLoader/app/types/RockyEnemyThrownState.h>
#include <Il2CppModLoader/app/types/LegacyDamageReciever_c_DisplayClass28_0.h>
#include <Il2CppModLoader/app/types/LegacyEntity_c_DisplayClass69_0.h>
#include <Il2CppModLoader/app/types/LegacyEntityDamageReciever_c.h>
#include <Il2CppModLoader/app/types/LegacyRespawner.h>
#include <Il2CppModLoader/app/types/IRespawnReciever.h>
#include <Il2CppModLoader/app/types/EntityPlatformingMovement.h>
#include <Il2CppModLoader/app/types/MovingGroundHelper.h>
#include <Il2CppModLoader/app/types/NewEntityPlatformMovement_KickbackEntry.h>
#include <Il2CppModLoader/app/types/NewEntityPlatformMovement_AirSuspension.h>
#include <Il2CppModLoader/app/types/EnemyZone.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemy_States.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyDropState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyAlertState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyIdleState.h>
#include <Il2CppModLoader/app/types/KamikazeSootEnemyRollingState.h>
#include <Il2CppModLoader/app/types/RammingEnemy_States.h>
#include <Il2CppModLoader/app/types/RammingIdleState.h>
#include <Il2CppModLoader/app/types/RammingAlertState.h>
#include <Il2CppModLoader/app/types/RammingRunningState.h>
#include <Il2CppModLoader/app/types/RammingBrakingState.h>
#include <Il2CppModLoader/app/types/RammingHitWallState.h>
#include <Il2CppModLoader/app/types/RammingStunnedState.h>
#include <Il2CppModLoader/app/types/RammingKnockBackState.h>
#include <Il2CppModLoader/app/types/RammingRetreatState.h>
#include <Il2CppModLoader/app/types/ArmouredRammingEnemy_c.h>
#include <Il2CppModLoader/app/types/FloatingRockLaserEnemy_States.h>
#include <Il2CppModLoader/app/types/FloatingRockTurretEnemy_States.h>
#include <Il2CppModLoader/app/types/JumpShootShark.h>
#include <Il2CppModLoader/app/types/JumpShootShark_States.h>
#include <Il2CppModLoader/app/types/AcidSlugCrawlingState.h>
#include <Il2CppModLoader/app/types/AcidSlugEnemy_States.h>
#include <Il2CppModLoader/app/types/AcidSlugChargingState.h>
#include <Il2CppModLoader/app/types/AcidSlugShootingState.h>
#include <Il2CppModLoader/app/types/AcidSlugEnemy_c.h>
#include <Il2CppModLoader/app/types/SlugDirectionalAnimationPicker.h>
#include <Il2CppModLoader/app/types/StarSlugEnemy_States.h>
#include <Il2CppModLoader/app/types/StarSlugCrawlingState.h>
#include <Il2CppModLoader/app/types/StarSlugChargingState.h>
#include <Il2CppModLoader/app/types/StarSlugShootingState.h>
#include <Il2CppModLoader/app/types/StarSlugEnemy_c.h>
#include <Il2CppModLoader/app/types/ShootingSpider_States.h>
#include <Il2CppModLoader/app/types/LegacySwarmEnemy.h>
#include <Il2CppModLoader/app/types/LegacySwarmEnemy_States.h>
#include <Il2CppModLoader/app/types/LegacySwarmEnemyManager.h>
#include <Il2CppModLoader/app/types/MortarWormEnemy.h>
#include <Il2CppModLoader/app/types/MortarWormEnemy_States.h>
#include <Il2CppModLoader/app/types/MortarWormTrajectoryHelper.h>

namespace app::classes::types {
    namespace AllEnemiesKilledTrigger { IL2CPP_MODLOADER_DLLEXPORT ::app::AllEnemiesKilledTrigger__Class** type_info = (::app::AllEnemiesKilledTrigger__Class**)(modloader::win::memory::resolve_rva(0x047560E8)); }
    namespace AutoDamageCollider_AutoDamageColliderEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::AutoDamageCollider_AutoDamageColliderEntry__Class** type_info = (::app::AutoDamageCollider_AutoDamageColliderEntry__Class**)(modloader::win::memory::resolve_rva(0x04790E50)); }
    namespace AutoDamageCollider_c { IL2CPP_MODLOADER_DLLEXPORT ::app::AutoDamageCollider_c__Class** type_info = (::app::AutoDamageCollider_c__Class**)(modloader::win::memory::resolve_rva(0x04791D90)); }
    namespace AutoDamageColliderResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::AutoDamageColliderResolver__Class** type_info = (::app::AutoDamageColliderResolver__Class**)(modloader::win::memory::resolve_rva(0x04710E48)); }
    namespace DamageResultContext { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageResultContext__Class** type_info = (::app::DamageResultContext__Class**)(modloader::win::memory::resolve_rva(0x04705EB8)); }
    namespace Damage_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Damage_c__Class** type_info = (::app::Damage_c__Class**)(modloader::win::memory::resolve_rva(0x0473FCB0)); }
    namespace DamageDealer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageDealer_c__Class** type_info = (::app::DamageDealer_c__Class**)(modloader::win::memory::resolve_rva(0x0477D1D0)); }
    namespace EnemyArenaController_WaveStatus__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyArenaController_WaveStatus__Enum__Class** type_info = (::app::EnemyArenaController_WaveStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04726CC0)); }
    namespace EnemyArenaController_EnemyWave { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyArenaController_EnemyWave__Class** type_info = (::app::EnemyArenaController_EnemyWave__Class**)(modloader::win::memory::resolve_rva(0x04732F50)); }
    namespace SpriteAnimator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpriteAnimator_c__Class** type_info = (::app::SpriteAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04755828)); }
    namespace SpriteAnimatorWithTransitions_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpriteAnimatorWithTransitions_c__Class** type_info = (::app::SpriteAnimatorWithTransitions_c__Class**)(modloader::win::memory::resolve_rva(0x04752D58)); }
    namespace TextureAnimation_c_DisplayClass15_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TextureAnimation_c_DisplayClass15_0__Class** type_info = (::app::TextureAnimation_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x04790CB8)); }
    namespace TextureAnimator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TextureAnimator_c__Class** type_info = (::app::TextureAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0475B798)); }
    namespace DashOwlEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlEnemy_States__Class** type_info = (::app::DashOwlEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0477B468)); }
    namespace DashOwlIdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlIdleState__Class** type_info = (::app::DashOwlIdleState__Class**)(modloader::win::memory::resolve_rva(0x04736100)); }
    namespace DashOwlFlyHomeState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlFlyHomeState__Class** type_info = (::app::DashOwlFlyHomeState__Class**)(modloader::win::memory::resolve_rva(0x047979A8)); }
    namespace DashOwlBashedState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlBashedState__Class** type_info = (::app::DashOwlBashedState__Class**)(modloader::win::memory::resolve_rva(0x0474EEE0)); }
    namespace DashOwlBounceState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlBounceState__Class** type_info = (::app::DashOwlBounceState__Class**)(modloader::win::memory::resolve_rva(0x04723580)); }
    namespace DashOwlDashState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlDashState__Class** type_info = (::app::DashOwlDashState__Class**)(modloader::win::memory::resolve_rva(0x047096D0)); }
    namespace DashOwlDashAlertState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlDashAlertState__Class** type_info = (::app::DashOwlDashAlertState__Class**)(modloader::win::memory::resolve_rva(0x04736340)); }
    namespace DashOwlHurtState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlHurtState__Class** type_info = (::app::DashOwlHurtState__Class**)(modloader::win::memory::resolve_rva(0x0478B268)); }
    namespace DashOwlSpiritLeashedState { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlSpiritLeashedState__Class** type_info = (::app::DashOwlSpiritLeashedState__Class**)(modloader::win::memory::resolve_rva(0x04704B30)); }
    namespace DashOwlEnemy_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DashOwlEnemy_c__Class** type_info = (::app::DashOwlEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04702AF8)); }
    namespace DropSlugAlertState { IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugAlertState__Class** type_info = (::app::DropSlugAlertState__Class**)(modloader::win::memory::resolve_rva(0x0471F140)); }
    namespace DropSlugEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugEnemy_States__Class** type_info = (::app::DropSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x047109B0)); }
    namespace DropSlugIdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugIdleState__Class** type_info = (::app::DropSlugIdleState__Class**)(modloader::win::memory::resolve_rva(0x0472A818)); }
    namespace DropSlugFallState { IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugFallState__Class** type_info = (::app::DropSlugFallState__Class**)(modloader::win::memory::resolve_rva(0x04789100)); }
    namespace DropSlugLandState { IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugLandState__Class** type_info = (::app::DropSlugLandState__Class**)(modloader::win::memory::resolve_rva(0x04715A88)); }
    namespace DropSlugThrownState { IL2CPP_MODLOADER_DLLEXPORT ::app::DropSlugThrownState__Class** type_info = (::app::DropSlugThrownState__Class**)(modloader::win::memory::resolve_rva(0x04778EC8)); }
    namespace FishAttackState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishAttackState__Class** type_info = (::app::FishAttackState__Class**)(modloader::win::memory::resolve_rva(0x04709300)); }
    namespace FishEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::FishEnemy_States__Class** type_info = (::app::FishEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0472F1D8)); }
    namespace FishIdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishIdleState__Class** type_info = (::app::FishIdleState__Class**)(modloader::win::memory::resolve_rva(0x04736348)); }
    namespace FishSwimState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishSwimState__Class** type_info = (::app::FishSwimState__Class**)(modloader::win::memory::resolve_rva(0x04756D38)); }
    namespace FishBashedState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishBashedState__Class** type_info = (::app::FishBashedState__Class**)(modloader::win::memory::resolve_rva(0x04778798)); }
    namespace FishBounceState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishBounceState__Class** type_info = (::app::FishBounceState__Class**)(modloader::win::memory::resolve_rva(0x047890F0)); }
    namespace FishFlopState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishFlopState__Class** type_info = (::app::FishFlopState__Class**)(modloader::win::memory::resolve_rva(0x04706100)); }
    namespace FishFallState { IL2CPP_MODLOADER_DLLEXPORT ::app::FishFallState__Class** type_info = (::app::FishFallState__Class**)(modloader::win::memory::resolve_rva(0x0476AFC0)); }
    namespace ChangeDetectorString { IL2CPP_MODLOADER_DLLEXPORT ::app::ChangeDetectorString__Class** type_info = (::app::ChangeDetectorString__Class**)(modloader::win::memory::resolve_rva(0x0473E9B8)); }
    namespace ChangeDetectorFloat { IL2CPP_MODLOADER_DLLEXPORT ::app::ChangeDetectorFloat__Class** type_info = (::app::ChangeDetectorFloat__Class**)(modloader::win::memory::resolve_rva(0x04744858)); }
    namespace DamageReceiverForwarder_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiverForwarder_c__Class** type_info = (::app::DamageReceiverForwarder_c__Class**)(modloader::win::memory::resolve_rva(0x047371C0)); }
    namespace EnemyStopper { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyStopper__Class** type_info = (::app::EnemyStopper__Class**)(modloader::win::memory::resolve_rva(0x04726A60)); }
    namespace EntityControllerSM { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityControllerSM__Class** type_info = (::app::EntityControllerSM__Class**)(modloader::win::memory::resolve_rva(0x0470ED20)); }
    namespace EntityTargetting_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityTargetting_c__Class** type_info = (::app::EntityTargetting_c__Class**)(modloader::win::memory::resolve_rva(0x0475B658)); }
    namespace RockyEnemyAnticipatingState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyAnticipatingState__Class** type_info = (::app::RockyEnemyAnticipatingState__Class**)(modloader::win::memory::resolve_rva(0x047320C8)); }
    namespace RockyEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemy_States__Class** type_info = (::app::RockyEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0474B258)); }
    namespace RockyEnemyIdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyIdleState__Class** type_info = (::app::RockyEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x047738F0)); }
    namespace RockyEnemyWalkState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyWalkState__Class** type_info = (::app::RockyEnemyWalkState__Class**)(modloader::win::memory::resolve_rva(0x04777B40)); }
    namespace RockyEnemyChargingState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyChargingState__Class** type_info = (::app::RockyEnemyChargingState__Class**)(modloader::win::memory::resolve_rva(0x0475F1A0)); }
    namespace RockyEnemyShootingState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyShootingState__Class** type_info = (::app::RockyEnemyShootingState__Class**)(modloader::win::memory::resolve_rva(0x0472E0A0)); }
    namespace RockyEnemyClosingState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyClosingState__Class** type_info = (::app::RockyEnemyClosingState__Class**)(modloader::win::memory::resolve_rva(0x047653B8)); }
    namespace RockyEnemyClosedState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyClosedState__Class** type_info = (::app::RockyEnemyClosedState__Class**)(modloader::win::memory::resolve_rva(0x0475B870)); }
    namespace RockyEnemyOpeningState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyOpeningState__Class** type_info = (::app::RockyEnemyOpeningState__Class**)(modloader::win::memory::resolve_rva(0x0474FDB8)); }
    namespace RockyEnemyThrownState { IL2CPP_MODLOADER_DLLEXPORT ::app::RockyEnemyThrownState__Class** type_info = (::app::RockyEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04796C68)); }
    namespace LegacyDamageReciever_c_DisplayClass28_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyDamageReciever_c_DisplayClass28_0__Class** type_info = (::app::LegacyDamageReciever_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x047120A8)); }
    namespace LegacyEntity_c_DisplayClass69_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyEntity_c_DisplayClass69_0__Class** type_info = (::app::LegacyEntity_c_DisplayClass69_0__Class**)(modloader::win::memory::resolve_rva(0x0470B640)); }
    namespace LegacyEntityDamageReciever_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyEntityDamageReciever_c__Class** type_info = (::app::LegacyEntityDamageReciever_c__Class**)(modloader::win::memory::resolve_rva(0x04780610)); }
    namespace LegacyRespawner { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyRespawner__Class** type_info = (::app::LegacyRespawner__Class**)(modloader::win::memory::resolve_rva(0x04717EF8)); }
    namespace IRespawnReciever { IL2CPP_MODLOADER_DLLEXPORT ::app::IRespawnReciever__Class** type_info = (::app::IRespawnReciever__Class**)(modloader::win::memory::resolve_rva(0x04796AC0)); }
    namespace EntityPlatformingMovement { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlatformingMovement__Class** type_info = (::app::EntityPlatformingMovement__Class**)(modloader::win::memory::resolve_rva(0x04797510)); }
    namespace MovingGroundHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::MovingGroundHelper__Class** type_info = (::app::MovingGroundHelper__Class**)(modloader::win::memory::resolve_rva(0x04787870)); }
    namespace NewEntityPlatformMovement_KickbackEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::NewEntityPlatformMovement_KickbackEntry__Class** type_info = (::app::NewEntityPlatformMovement_KickbackEntry__Class**)(modloader::win::memory::resolve_rva(0x04717840)); }
    namespace NewEntityPlatformMovement_AirSuspension { IL2CPP_MODLOADER_DLLEXPORT ::app::NewEntityPlatformMovement_AirSuspension__Class** type_info = (::app::NewEntityPlatformMovement_AirSuspension__Class**)(modloader::win::memory::resolve_rva(0x047437E8)); }
    namespace EnemyZone { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyZone__Class** type_info = (::app::EnemyZone__Class**)(modloader::win::memory::resolve_rva(0x0474B998)); }
    namespace KamikazeSootEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemy_States__Class** type_info = (::app::KamikazeSootEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0476EE98)); }
    namespace KamikazeSootEnemyDropState { IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyDropState__Class** type_info = (::app::KamikazeSootEnemyDropState__Class**)(modloader::win::memory::resolve_rva(0x047157C8)); }
    namespace KamikazeSootEnemyAlertState { IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyAlertState__Class** type_info = (::app::KamikazeSootEnemyAlertState__Class**)(modloader::win::memory::resolve_rva(0x04796D80)); }
    namespace KamikazeSootEnemyIdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyIdleState__Class** type_info = (::app::KamikazeSootEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x04715580)); }
    namespace KamikazeSootEnemyRollingState { IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeSootEnemyRollingState__Class** type_info = (::app::KamikazeSootEnemyRollingState__Class**)(modloader::win::memory::resolve_rva(0x047088B8)); }
    namespace RammingEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingEnemy_States__Class** type_info = (::app::RammingEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04714E20)); }
    namespace RammingIdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingIdleState__Class** type_info = (::app::RammingIdleState__Class**)(modloader::win::memory::resolve_rva(0x0478E618)); }
    namespace RammingAlertState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingAlertState__Class** type_info = (::app::RammingAlertState__Class**)(modloader::win::memory::resolve_rva(0x0470BA78)); }
    namespace RammingRunningState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingRunningState__Class** type_info = (::app::RammingRunningState__Class**)(modloader::win::memory::resolve_rva(0x0475AC10)); }
    namespace RammingBrakingState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingBrakingState__Class** type_info = (::app::RammingBrakingState__Class**)(modloader::win::memory::resolve_rva(0x0473A580)); }
    namespace RammingHitWallState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingHitWallState__Class** type_info = (::app::RammingHitWallState__Class**)(modloader::win::memory::resolve_rva(0x04766F20)); }
    namespace RammingStunnedState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingStunnedState__Class** type_info = (::app::RammingStunnedState__Class**)(modloader::win::memory::resolve_rva(0x0474FCA8)); }
    namespace RammingKnockBackState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingKnockBackState__Class** type_info = (::app::RammingKnockBackState__Class**)(modloader::win::memory::resolve_rva(0x04745240)); }
    namespace RammingRetreatState { IL2CPP_MODLOADER_DLLEXPORT ::app::RammingRetreatState__Class** type_info = (::app::RammingRetreatState__Class**)(modloader::win::memory::resolve_rva(0x047994E0)); }
    namespace ArmouredRammingEnemy_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ArmouredRammingEnemy_c__Class** type_info = (::app::ArmouredRammingEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x0472E410)); }
    namespace FloatingRockLaserEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatingRockLaserEnemy_States__Class** type_info = (::app::FloatingRockLaserEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04753A58)); }
    namespace FloatingRockTurretEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatingRockTurretEnemy_States__Class** type_info = (::app::FloatingRockTurretEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04799640)); }
    namespace JumpShootShark { IL2CPP_MODLOADER_DLLEXPORT ::app::JumpShootShark__Class** type_info = (::app::JumpShootShark__Class**)(modloader::win::memory::resolve_rva(0x047685A0)); }
    namespace JumpShootShark_States { IL2CPP_MODLOADER_DLLEXPORT ::app::JumpShootShark_States__Class** type_info = (::app::JumpShootShark_States__Class**)(modloader::win::memory::resolve_rva(0x04741FB8)); }
    namespace AcidSlugCrawlingState { IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugCrawlingState__Class** type_info = (::app::AcidSlugCrawlingState__Class**)(modloader::win::memory::resolve_rva(0x0477A500)); }
    namespace AcidSlugEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugEnemy_States__Class** type_info = (::app::AcidSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04734E40)); }
    namespace AcidSlugChargingState { IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugChargingState__Class** type_info = (::app::AcidSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x04783E90)); }
    namespace AcidSlugShootingState { IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugShootingState__Class** type_info = (::app::AcidSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04771390)); }
    namespace AcidSlugEnemy_c { IL2CPP_MODLOADER_DLLEXPORT ::app::AcidSlugEnemy_c__Class** type_info = (::app::AcidSlugEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04779168)); }
    namespace SlugDirectionalAnimationPicker { IL2CPP_MODLOADER_DLLEXPORT ::app::SlugDirectionalAnimationPicker__Class** type_info = (::app::SlugDirectionalAnimationPicker__Class**)(modloader::win::memory::resolve_rva(0x0473B670)); }
    namespace StarSlugEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugEnemy_States__Class** type_info = (::app::StarSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x047761D8)); }
    namespace StarSlugCrawlingState { IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugCrawlingState__Class** type_info = (::app::StarSlugCrawlingState__Class**)(modloader::win::memory::resolve_rva(0x04788608)); }
    namespace StarSlugChargingState { IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugChargingState__Class** type_info = (::app::StarSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x0471C9B8)); }
    namespace StarSlugShootingState { IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugShootingState__Class** type_info = (::app::StarSlugShootingState__Class**)(modloader::win::memory::resolve_rva(0x04745670)); }
    namespace StarSlugEnemy_c { IL2CPP_MODLOADER_DLLEXPORT ::app::StarSlugEnemy_c__Class** type_info = (::app::StarSlugEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x0473F040)); }
    namespace ShootingSpider_States { IL2CPP_MODLOADER_DLLEXPORT ::app::ShootingSpider_States__Class** type_info = (::app::ShootingSpider_States__Class**)(modloader::win::memory::resolve_rva(0x04727CE0)); }
    namespace LegacySwarmEnemy { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacySwarmEnemy__Class** type_info = (::app::LegacySwarmEnemy__Class**)(modloader::win::memory::resolve_rva(0x0477B870)); }
    namespace LegacySwarmEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacySwarmEnemy_States__Class** type_info = (::app::LegacySwarmEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0471C7C8)); }
    namespace LegacySwarmEnemyManager { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacySwarmEnemyManager__Class** type_info = (::app::LegacySwarmEnemyManager__Class**)(modloader::win::memory::resolve_rva(0x04761540)); }
    namespace MortarWormEnemy { IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemy__Class** type_info = (::app::MortarWormEnemy__Class**)(modloader::win::memory::resolve_rva(0x04797B08)); }
    namespace MortarWormEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemy_States__Class** type_info = (::app::MortarWormEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0470B8A8)); }
    namespace MortarWormTrajectoryHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormTrajectoryHelper__Class** type_info = (::app::MortarWormTrajectoryHelper__Class**)(modloader::win::memory::resolve_rva(0x04733A50)); }
}
