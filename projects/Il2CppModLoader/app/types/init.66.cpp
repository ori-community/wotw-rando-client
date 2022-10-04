#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/EnvTopology.h>
#include <Il2CppModLoader/app/types/LizardEntity.h>
#include <Il2CppModLoader/app/types/LizardMovementEffects.h>
#include <Il2CppModLoader/app/types/MaterialBasedLizardMovementEffects__Array.h>
#include <Il2CppModLoader/app/types/LizardAttackEffects.h>
#include <Il2CppModLoader/app/types/MaterialBasedLizardAttackEffects__Array.h>
#include <Il2CppModLoader/app/types/KamikazeLizardEntity.h>
#include <Il2CppModLoader/app/types/LizardDeathReaction_c.h>
#include <Il2CppModLoader/app/types/LizardDodgeEvent.h>
#include <Il2CppModLoader/app/types/LizardEntity_c.h>
#include <Il2CppModLoader/app/types/LizardHitReactionBehaviour_c.h>
#include <Il2CppModLoader/app/types/IEquipableOwner.h>
#include <Il2CppModLoader/app/types/TurtleShell_c.h>
#include <Il2CppModLoader/app/types/WaterPoisonCloud_Blob.h>
#include <Il2CppModLoader/app/types/FoxArmor_HidePiecesTemp_d_12.h>
#include <Il2CppModLoader/app/types/FoxGrabber_Receiver.h>
#include <Il2CppModLoader/app/types/FoxHeadHurtZone_c.h>
#include <Il2CppModLoader/app/types/FoxTailHurtZone_c.h>
#include <Il2CppModLoader/app/types/IPinnable.h>
#include <Il2CppModLoader/app/types/StateMachineBehaviourProxy_IReceiver.h>
#include <Il2CppModLoader/app/types/StateMachineBehaviourProxy_c.h>
#include <Il2CppModLoader/app/types/UberGhostTrail.h>
#include <Il2CppModLoader/app/types/Material__Array__Array.h>
#include <Il2CppModLoader/app/types/UberGhostTrailMeshUpdate_TextureUsage.h>
#include <Il2CppModLoader/app/types/JumpSustainHelper.h>
#include <Il2CppModLoader/app/types/ILaunchable.h>
#include <Il2CppModLoader/app/types/LianaEntity.h>
#include <Il2CppModLoader/app/types/GrabbableRope.h>
#include <Il2CppModLoader/app/types/LianaEntity_TongueJoint__Array.h>
#include <Il2CppModLoader/app/types/AttachPrefabsToLiannaTongue_TonguePoints.h>
#include <Il2CppModLoader/app/types/LianaEntity_WaitReleaseTongue_d_83.h>
#include <Il2CppModLoader/app/types/MessageBox__Array.h>
#include <Il2CppModLoader/app/types/PickupContext.h>
#include <Il2CppModLoader/app/types/WispMessageIcon_Wisp__Enum.h>
#include <Il2CppModLoader/app/types/PhysicsUtils_c.h>
#include <Il2CppModLoader/app/types/BreakablePhysicalSetup.h>
#include <Il2CppModLoader/app/types/BreakablePhysicalSetupHolder.h>
#include <Il2CppModLoader/app/types/CameraPivotZone.h>
#include <Il2CppModLoader/app/types/CameraTarget_TargetLayer.h>
#include <Il2CppModLoader/app/types/BlendFloat.h>
#include <Il2CppModLoader/app/types/CameraOffsetAnimationZone.h>
#include <Il2CppModLoader/app/types/CameraOffsetAnimationZone_OffsetBlend.h>
#include <Il2CppModLoader/app/types/CameraOffsetController_OffsetLayer.h>
#include <Il2CppModLoader/app/types/HitFlash3DNew.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_States.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_FightState.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_IdleState.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_AttackCloseState.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_AttackFarState.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_FarHoldState.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_FarRetreatState.h>
#include <Il2CppModLoader/app/types/NightCrawlerFightController_DefeatRetreatState.h>
#include <Il2CppModLoader/app/types/BaurEntity_c.h>
#include <Il2CppModLoader/app/types/BaurInteractionBehaviour_InteractionStates__Enum.h>
#include <Il2CppModLoader/app/types/IDialogCallbackNotifier.h>
#include <Il2CppModLoader/app/types/BuilderEntity.h>
#include <Il2CppModLoader/app/types/BuilderEntity_c.h>
#include <Il2CppModLoader/app/types/GardenerEntity.h>
#include <Il2CppModLoader/app/types/KwolokNpcEntity_c.h>
#include <Il2CppModLoader/app/types/VerticalSpacer_Item.h>
#include <Il2CppModLoader/app/types/BuyMapUIConfirmationOverlay_c.h>
#include <Il2CppModLoader/app/types/MinerIdle_IdleStates__Enum.h>
#include <Il2CppModLoader/app/types/MinerInteractionBehaviour_InteractionStates__Enum.h>
#include <Il2CppModLoader/app/types/OriLayeredAnimationsController_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/PlayLoopAnimationWisps_c.h>
#include <Il2CppModLoader/app/types/SyncAnimations_c_DisplayClass10_0.h>
#include <Il2CppModLoader/app/types/SpiderInteractionBehaviour_InteractionStates__Enum.h>
#include <Il2CppModLoader/app/types/SpiderNpcEntity.h>
#include <Il2CppModLoader/app/types/SpiderNpcEntity_c.h>
#include <Il2CppModLoader/app/types/StatisticianIdle_IdleStates__Enum.h>
#include <Il2CppModLoader/app/types/StatisticianIdle_IdleStates__Enum__Array.h>
#include <Il2CppModLoader/app/types/StatisticianInteractionBehaviour_InteractionStates__Enum.h>
#include <Il2CppModLoader/app/types/WandererEntity.h>
#include <Il2CppModLoader/app/types/WandererIdleBehaviour.h>
#include <Il2CppModLoader/app/types/WandererTurningBehaviour.h>
#include <Il2CppModLoader/app/types/WandererNPC.h>
#include <Il2CppModLoader/app/types/CartographerEntity.h>
#include <Il2CppModLoader/app/types/CartographerIdleBehaviour_c.h>
#include <Il2CppModLoader/app/types/CartographerTurningBehaviour_c.h>
#include <Il2CppModLoader/app/types/WandererIdleBehaviour_c.h>
#include <Il2CppModLoader/app/types/WandererTurningBehaviour_c.h>
#include <Il2CppModLoader/app/types/WandererNPC_c.h>
#include <Il2CppModLoader/app/types/BuilderIdle_c.h>
#include <Il2CppModLoader/app/types/WeaponMasterEntity.h>
#include <Il2CppModLoader/app/types/WeaponMasterIdle_c.h>
#include <Il2CppModLoader/app/types/AlphabetOptions_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/AudioDeviceOptions_c_DisplayClass4_0.h>
#include <Il2CppModLoader/app/types/CleverMenuItemGroup.h>
#include <Il2CppModLoader/app/types/CleverMenuItemGroupBase_c.h>
#include <Il2CppModLoader/app/types/ControlItem.h>
#include <Il2CppModLoader/app/types/KeybindingCommandMapAsset_CommandBindingEnum__Enum.h>
#include <Il2CppModLoader/app/types/CommandBinding.h>
#include <Il2CppModLoader/app/types/ControlItem_c.h>
#include <Il2CppModLoader/app/types/IButtonInput.h>
#include <Il2CppModLoader/app/types/ControllerSchemeOptions.h>
#include <Il2CppModLoader/app/types/ControlScheme__Enum.h>
#include <Il2CppModLoader/app/types/ControlItemCommand.h>
#include <Il2CppModLoader/app/types/ControlsScreen_ControlListEnum__Enum.h>
#include <Il2CppModLoader/app/types/ControlList_c_DisplayClass12_0.h>
#include <Il2CppModLoader/app/types/ControlList_c.h>

namespace app::classes::types {
    namespace EnvTopology { IL2CPP_MODLOADER_DLLEXPORT ::app::EnvTopology__Class** type_info = (::app::EnvTopology__Class**)(modloader::win::memory::resolve_rva(0x0477A5E0)); }
    namespace LizardEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardEntity__Class** type_info = (::app::LizardEntity__Class**)(modloader::win::memory::resolve_rva(0x0477BD20)); }
    namespace LizardMovementEffects { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardMovementEffects__Class** type_info = (::app::LizardMovementEffects__Class**)(modloader::win::memory::resolve_rva(0x0470B540)); }
    namespace MaterialBasedLizardMovementEffects__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedLizardMovementEffects__Array__Class** type_info = (::app::MaterialBasedLizardMovementEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04745898)); }
    namespace LizardAttackEffects { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardAttackEffects__Class** type_info = (::app::LizardAttackEffects__Class**)(modloader::win::memory::resolve_rva(0x04781EF8)); }
    namespace MaterialBasedLizardAttackEffects__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedLizardAttackEffects__Array__Class** type_info = (::app::MaterialBasedLizardAttackEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x0476B458)); }
    namespace KamikazeLizardEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::KamikazeLizardEntity__Class** type_info = (::app::KamikazeLizardEntity__Class**)(modloader::win::memory::resolve_rva(0x04798F98)); }
    namespace LizardDeathReaction_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardDeathReaction_c__Class** type_info = (::app::LizardDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04732078)); }
    namespace LizardDodgeEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardDodgeEvent__Class** type_info = (::app::LizardDodgeEvent__Class**)(modloader::win::memory::resolve_rva(0x0470B798)); }
    namespace LizardEntity_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardEntity_c__Class** type_info = (::app::LizardEntity_c__Class**)(modloader::win::memory::resolve_rva(0x0471F6C8)); }
    namespace LizardHitReactionBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LizardHitReactionBehaviour_c__Class** type_info = (::app::LizardHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0476F708)); }
    namespace IEquipableOwner { IL2CPP_MODLOADER_DLLEXPORT ::app::IEquipableOwner__Class** type_info = (::app::IEquipableOwner__Class**)(modloader::win::memory::resolve_rva(0x04705E10)); }
    namespace TurtleShell_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TurtleShell_c__Class** type_info = (::app::TurtleShell_c__Class**)(modloader::win::memory::resolve_rva(0x0471F008)); }
    namespace WaterPoisonCloud_Blob { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterPoisonCloud_Blob__Class** type_info = (::app::WaterPoisonCloud_Blob__Class**)(modloader::win::memory::resolve_rva(0x047157B0)); }
    namespace FoxArmor_HidePiecesTemp_d_12 { IL2CPP_MODLOADER_DLLEXPORT ::app::FoxArmor_HidePiecesTemp_d_12__Class** type_info = (::app::FoxArmor_HidePiecesTemp_d_12__Class**)(modloader::win::memory::resolve_rva(0x04759CE8)); }
    namespace FoxGrabber_Receiver { IL2CPP_MODLOADER_DLLEXPORT ::app::FoxGrabber_Receiver__Class** type_info = (::app::FoxGrabber_Receiver__Class**)(modloader::win::memory::resolve_rva(0x04706500)); }
    namespace FoxHeadHurtZone_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FoxHeadHurtZone_c__Class** type_info = (::app::FoxHeadHurtZone_c__Class**)(modloader::win::memory::resolve_rva(0x0477BE30)); }
    namespace FoxTailHurtZone_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FoxTailHurtZone_c__Class** type_info = (::app::FoxTailHurtZone_c__Class**)(modloader::win::memory::resolve_rva(0x04707DE8)); }
    namespace IPinnable { IL2CPP_MODLOADER_DLLEXPORT ::app::IPinnable__Class** type_info = (::app::IPinnable__Class**)(modloader::win::memory::resolve_rva(0x04740580)); }
    namespace StateMachineBehaviourProxy_IReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachineBehaviourProxy_IReceiver__Class** type_info = (::app::StateMachineBehaviourProxy_IReceiver__Class**)(modloader::win::memory::resolve_rva(0x04708E80)); }
    namespace StateMachineBehaviourProxy_c { IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachineBehaviourProxy_c__Class** type_info = (::app::StateMachineBehaviourProxy_c__Class**)(modloader::win::memory::resolve_rva(0x04795D38)); }
    namespace UberGhostTrail { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGhostTrail__Class** type_info = (::app::UberGhostTrail__Class**)(modloader::win::memory::resolve_rva(0x047763C8)); }
    namespace Material__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Material__Array__Array__Class** type_info = (::app::Material__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04705C90)); }
    namespace UberGhostTrailMeshUpdate_TextureUsage { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGhostTrailMeshUpdate_TextureUsage__Class** type_info = (::app::UberGhostTrailMeshUpdate_TextureUsage__Class**)(modloader::win::memory::resolve_rva(0x04798BE0)); }
    namespace JumpSustainHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::JumpSustainHelper__Class** type_info = (::app::JumpSustainHelper__Class**)(modloader::win::memory::resolve_rva(0x0471C188)); }
    namespace ILaunchable { IL2CPP_MODLOADER_DLLEXPORT ::app::ILaunchable__Class** type_info = (::app::ILaunchable__Class**)(modloader::win::memory::resolve_rva(0x04781B98)); }
    namespace LianaEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::LianaEntity__Class** type_info = (::app::LianaEntity__Class**)(modloader::win::memory::resolve_rva(0x04739F88)); }
    namespace GrabbableRope { IL2CPP_MODLOADER_DLLEXPORT ::app::GrabbableRope__Class** type_info = (::app::GrabbableRope__Class**)(modloader::win::memory::resolve_rva(0x04782EF8)); }
    namespace LianaEntity_TongueJoint__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::LianaEntity_TongueJoint__Array__Class** type_info = (::app::LianaEntity_TongueJoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04780958)); }
    namespace AttachPrefabsToLiannaTongue_TonguePoints { IL2CPP_MODLOADER_DLLEXPORT ::app::AttachPrefabsToLiannaTongue_TonguePoints__Class** type_info = (::app::AttachPrefabsToLiannaTongue_TonguePoints__Class**)(modloader::win::memory::resolve_rva(0x04780E80)); }
    namespace LianaEntity_WaitReleaseTongue_d_83 { IL2CPP_MODLOADER_DLLEXPORT ::app::LianaEntity_WaitReleaseTongue_d_83__Class** type_info = (::app::LianaEntity_WaitReleaseTongue_d_83__Class**)(modloader::win::memory::resolve_rva(0x0476BC30)); }
    namespace MessageBox__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageBox__Array__Class** type_info = (::app::MessageBox__Array__Class**)(modloader::win::memory::resolve_rva(0x0478B198)); }
    namespace PickupContext { IL2CPP_MODLOADER_DLLEXPORT ::app::PickupContext__Class** type_info = (::app::PickupContext__Class**)(modloader::win::memory::resolve_rva(0x0471C6B8)); }
    namespace WispMessageIcon_Wisp__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::WispMessageIcon_Wisp__Enum__Class** type_info = (::app::WispMessageIcon_Wisp__Enum__Class**)(modloader::win::memory::resolve_rva(0x047501B0)); }
    namespace PhysicsUtils_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsUtils_c__Class** type_info = (::app::PhysicsUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04709120)); }
    namespace BreakablePhysicalSetup { IL2CPP_MODLOADER_DLLEXPORT ::app::BreakablePhysicalSetup__Class** type_info = (::app::BreakablePhysicalSetup__Class**)(modloader::win::memory::resolve_rva(0x04786820)); }
    namespace BreakablePhysicalSetupHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::BreakablePhysicalSetupHolder__Class** type_info = (::app::BreakablePhysicalSetupHolder__Class**)(modloader::win::memory::resolve_rva(0x0476CCF8)); }
    namespace CameraPivotZone { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPivotZone__Class** type_info = (::app::CameraPivotZone__Class**)(modloader::win::memory::resolve_rva(0x0472AEB8)); }
    namespace CameraTarget_TargetLayer { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraTarget_TargetLayer__Class** type_info = (::app::CameraTarget_TargetLayer__Class**)(modloader::win::memory::resolve_rva(0x04706738)); }
    namespace BlendFloat { IL2CPP_MODLOADER_DLLEXPORT ::app::BlendFloat__Class** type_info = (::app::BlendFloat__Class**)(modloader::win::memory::resolve_rva(0x04714D88)); }
    namespace CameraOffsetAnimationZone { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetAnimationZone__Class** type_info = (::app::CameraOffsetAnimationZone__Class**)(modloader::win::memory::resolve_rva(0x04765078)); }
    namespace CameraOffsetAnimationZone_OffsetBlend { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetAnimationZone_OffsetBlend__Class** type_info = (::app::CameraOffsetAnimationZone_OffsetBlend__Class**)(modloader::win::memory::resolve_rva(0x04773088)); }
    namespace CameraOffsetController_OffsetLayer { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetController_OffsetLayer__Class** type_info = (::app::CameraOffsetController_OffsetLayer__Class**)(modloader::win::memory::resolve_rva(0x04734A78)); }
    namespace HitFlash3DNew { IL2CPP_MODLOADER_DLLEXPORT ::app::HitFlash3DNew__Class** type_info = (::app::HitFlash3DNew__Class**)(modloader::win::memory::resolve_rva(0x047770A8)); }
    namespace NightCrawlerFightController_States { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_States__Class** type_info = (::app::NightCrawlerFightController_States__Class**)(modloader::win::memory::resolve_rva(0x04734018)); }
    namespace NightCrawlerFightController_FightState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_FightState__Class** type_info = (::app::NightCrawlerFightController_FightState__Class**)(modloader::win::memory::resolve_rva(0x04783A20)); }
    namespace NightCrawlerFightController_IdleState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_IdleState__Class** type_info = (::app::NightCrawlerFightController_IdleState__Class**)(modloader::win::memory::resolve_rva(0x0478B280)); }
    namespace NightCrawlerFightController_AttackCloseState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_AttackCloseState__Class** type_info = (::app::NightCrawlerFightController_AttackCloseState__Class**)(modloader::win::memory::resolve_rva(0x04776E50)); }
    namespace NightCrawlerFightController_AttackFarState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_AttackFarState__Class** type_info = (::app::NightCrawlerFightController_AttackFarState__Class**)(modloader::win::memory::resolve_rva(0x0476A6E8)); }
    namespace NightCrawlerFightController_FarHoldState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_FarHoldState__Class** type_info = (::app::NightCrawlerFightController_FarHoldState__Class**)(modloader::win::memory::resolve_rva(0x047584B8)); }
    namespace NightCrawlerFightController_FarRetreatState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_FarRetreatState__Class** type_info = (::app::NightCrawlerFightController_FarRetreatState__Class**)(modloader::win::memory::resolve_rva(0x04783848)); }
    namespace NightCrawlerFightController_DefeatRetreatState { IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerFightController_DefeatRetreatState__Class** type_info = (::app::NightCrawlerFightController_DefeatRetreatState__Class**)(modloader::win::memory::resolve_rva(0x0477DBB8)); }
    namespace BaurEntity_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BaurEntity_c__Class** type_info = (::app::BaurEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04790BA8)); }
    namespace BaurInteractionBehaviour_InteractionStates__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::BaurInteractionBehaviour_InteractionStates__Enum__Class** type_info = (::app::BaurInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474AE00)); }
    namespace IDialogCallbackNotifier { IL2CPP_MODLOADER_DLLEXPORT ::app::IDialogCallbackNotifier__Class** type_info = (::app::IDialogCallbackNotifier__Class**)(modloader::win::memory::resolve_rva(0x04713B00)); }
    namespace BuilderEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderEntity__Class** type_info = (::app::BuilderEntity__Class**)(modloader::win::memory::resolve_rva(0x04761AB0)); }
    namespace BuilderEntity_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderEntity_c__Class** type_info = (::app::BuilderEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047542A8)); }
    namespace GardenerEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::GardenerEntity__Class** type_info = (::app::GardenerEntity__Class**)(modloader::win::memory::resolve_rva(0x0475A918)); }
    namespace KwolokNpcEntity_c { IL2CPP_MODLOADER_DLLEXPORT ::app::KwolokNpcEntity_c__Class** type_info = (::app::KwolokNpcEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04765468)); }
    namespace VerticalSpacer_Item { IL2CPP_MODLOADER_DLLEXPORT ::app::VerticalSpacer_Item__Class** type_info = (::app::VerticalSpacer_Item__Class**)(modloader::win::memory::resolve_rva(0x0473CCF8)); }
    namespace BuyMapUIConfirmationOverlay_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BuyMapUIConfirmationOverlay_c__Class** type_info = (::app::BuyMapUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x0477EE78)); }
    namespace MinerIdle_IdleStates__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MinerIdle_IdleStates__Enum__Class** type_info = (::app::MinerIdle_IdleStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714130)); }
    namespace MinerInteractionBehaviour_InteractionStates__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MinerInteractionBehaviour_InteractionStates__Enum__Class** type_info = (::app::MinerInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478E718)); }
    namespace OriLayeredAnimationsController_c_DisplayClass17_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::OriLayeredAnimationsController_c_DisplayClass17_0__Class** type_info = (::app::OriLayeredAnimationsController_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x0473C4B8)); }
    namespace PlayLoopAnimationWisps_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayLoopAnimationWisps_c__Class** type_info = (::app::PlayLoopAnimationWisps_c__Class**)(modloader::win::memory::resolve_rva(0x047261B0)); }
    namespace SyncAnimations_c_DisplayClass10_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SyncAnimations_c_DisplayClass10_0__Class** type_info = (::app::SyncAnimations_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x0477C760)); }
    namespace SpiderInteractionBehaviour_InteractionStates__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiderInteractionBehaviour_InteractionStates__Enum__Class** type_info = (::app::SpiderInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x04779E30)); }
    namespace SpiderNpcEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiderNpcEntity__Class** type_info = (::app::SpiderNpcEntity__Class**)(modloader::win::memory::resolve_rva(0x04708F40)); }
    namespace SpiderNpcEntity_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiderNpcEntity_c__Class** type_info = (::app::SpiderNpcEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04795CB0)); }
    namespace StatisticianIdle_IdleStates__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticianIdle_IdleStates__Enum__Class** type_info = (::app::StatisticianIdle_IdleStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x047563A8)); }
    namespace StatisticianIdle_IdleStates__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticianIdle_IdleStates__Enum__Array__Class** type_info = (::app::StatisticianIdle_IdleStates__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04770668)); }
    namespace StatisticianInteractionBehaviour_InteractionStates__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class** type_info = (::app::StatisticianInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476FE68)); }
    namespace WandererEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererEntity__Class** type_info = (::app::WandererEntity__Class**)(modloader::win::memory::resolve_rva(0x04725B28)); }
    namespace WandererIdleBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererIdleBehaviour__Class** type_info = (::app::WandererIdleBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04780178)); }
    namespace WandererTurningBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererTurningBehaviour__Class** type_info = (::app::WandererTurningBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472DF20)); }
    namespace WandererNPC { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererNPC__Class** type_info = (::app::WandererNPC__Class**)(modloader::win::memory::resolve_rva(0x04747888)); }
    namespace CartographerEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::CartographerEntity__Class** type_info = (::app::CartographerEntity__Class**)(modloader::win::memory::resolve_rva(0x0472D770)); }
    namespace CartographerIdleBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CartographerIdleBehaviour_c__Class** type_info = (::app::CartographerIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04773398)); }
    namespace CartographerTurningBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CartographerTurningBehaviour_c__Class** type_info = (::app::CartographerTurningBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0474ACA8)); }
    namespace WandererIdleBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererIdleBehaviour_c__Class** type_info = (::app::WandererIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04767490)); }
    namespace WandererTurningBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererTurningBehaviour_c__Class** type_info = (::app::WandererTurningBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04788320)); }
    namespace WandererNPC_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WandererNPC_c__Class** type_info = (::app::WandererNPC_c__Class**)(modloader::win::memory::resolve_rva(0x04786620)); }
    namespace BuilderIdle_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderIdle_c__Class** type_info = (::app::BuilderIdle_c__Class**)(modloader::win::memory::resolve_rva(0x04792FD0)); }
    namespace WeaponMasterEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponMasterEntity__Class** type_info = (::app::WeaponMasterEntity__Class**)(modloader::win::memory::resolve_rva(0x0470BE88)); }
    namespace WeaponMasterIdle_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponMasterIdle_c__Class** type_info = (::app::WeaponMasterIdle_c__Class**)(modloader::win::memory::resolve_rva(0x0471F810)); }
    namespace AlphabetOptions_c_DisplayClass11_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AlphabetOptions_c_DisplayClass11_0__Class** type_info = (::app::AlphabetOptions_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x0475CA70)); }
    namespace AudioDeviceOptions_c_DisplayClass4_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioDeviceOptions_c_DisplayClass4_0__Class** type_info = (::app::AudioDeviceOptions_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04779F10)); }
    namespace CleverMenuItemGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemGroup__Class** type_info = (::app::CleverMenuItemGroup__Class**)(modloader::win::memory::resolve_rva(0x04738A10)); }
    namespace CleverMenuItemGroupBase_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemGroupBase_c__Class** type_info = (::app::CleverMenuItemGroupBase_c__Class**)(modloader::win::memory::resolve_rva(0x04753968)); }
    namespace ControlItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlItem__Class** type_info = (::app::ControlItem__Class**)(modloader::win::memory::resolve_rva(0x04712AF8)); }
    namespace KeybindingCommandMapAsset_CommandBindingEnum__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class** type_info = (::app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475B640)); }
    namespace CommandBinding { IL2CPP_MODLOADER_DLLEXPORT ::app::CommandBinding__Class** type_info = (::app::CommandBinding__Class**)(modloader::win::memory::resolve_rva(0x04764A10)); }
    namespace ControlItem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlItem_c__Class** type_info = (::app::ControlItem_c__Class**)(modloader::win::memory::resolve_rva(0x047832F8)); }
    namespace IButtonInput { IL2CPP_MODLOADER_DLLEXPORT ::app::IButtonInput__Class** type_info = (::app::IButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04780F50)); }
    namespace ControllerSchemeOptions { IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerSchemeOptions__Class** type_info = (::app::ControllerSchemeOptions__Class**)(modloader::win::memory::resolve_rva(0x0475E750)); }
    namespace ControlScheme__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlScheme__Enum__Class** type_info = (::app::ControlScheme__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C348)); }
    namespace ControlItemCommand { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlItemCommand__Class** type_info = (::app::ControlItemCommand__Class**)(modloader::win::memory::resolve_rva(0x04701A58)); }
    namespace ControlsScreen_ControlListEnum__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlsScreen_ControlListEnum__Enum__Class** type_info = (::app::ControlsScreen_ControlListEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x04777EB0)); }
    namespace ControlList_c_DisplayClass12_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlList_c_DisplayClass12_0__Class** type_info = (::app::ControlList_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x04775A20)); }
    namespace ControlList_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlList_c__Class** type_info = (::app::ControlList_c__Class**)(modloader::win::memory::resolve_rva(0x047499E0)); }
}
