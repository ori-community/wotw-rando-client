#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/P3D_Triangle.h>
#include <Il2CppModLoader/app/types/P3D_Node.h>
#include <Il2CppModLoader/app/types/P3D_Painter.h>
#include <Il2CppModLoader/app/types/P3D_Result.h>
#include <Il2CppModLoader/app/types/P3D_TexturePreview.h>
#include <Il2CppModLoader/app/types/P3D_Tree.h>
#include <Il2CppModLoader/app/types/IMoonTypeEditableResolver.h>
#include <Il2CppModLoader/app/types/IMoonTypeResolveGetter.h>
#include <Il2CppModLoader/app/types/CustomAttributeTypedArgument__Array.h>
#include <Il2CppModLoader/app/types/XmlAtomicValue__Array.h>
#include <Il2CppModLoader/app/types/BeforeRenderHelper_OrderBlock.h>
#include <Il2CppModLoader/app/types/IEdge.h>
#include <Il2CppModLoader/app/types/GennadiysDice_DiceEvents__Enum.h>
#include <Il2CppModLoader/app/types/TimelineHelper_ConstraintWrapper.h>
#include <Il2CppModLoader/app/types/IVirtualTimelineGameObject.h>
#include <Il2CppModLoader/app/types/IPlayFabTransportPlugin.h>
#include <Il2CppModLoader/app/types/IBubbleKiller.h>
#include <Il2CppModLoader/app/types/IBouncealbeFromCartBouncer.h>
#include <Il2CppModLoader/app/types/IEnablingModifier.h>
#include <Il2CppModLoader/app/types/IPickupCollector.h>
#include <Il2CppModLoader/app/types/WaterPoison_IDamageDealer.h>
#include <Il2CppModLoader/app/types/IGhostProximityRecordable.h>
#include <Il2CppModLoader/app/types/IRecordingContext.h>
#include <Il2CppModLoader/app/types/ITimelineContext.h>
#include <Il2CppModLoader/app/types/IRecordableTransform.h>
#include <Il2CppModLoader/app/types/IRecordableTransformWithExternalID.h>
#include <Il2CppModLoader/app/types/IKuReceiver.h>
#include <Il2CppModLoader/app/types/IDashAtackable.h>
#include <Il2CppModLoader/app/types/ISwordAttackable.h>
#include <Il2CppModLoader/app/types/XalService_AsyncBlock.h>
#include <Il2CppModLoader/app/types/IPrewarmable.h>
#include <Il2CppModLoader/app/types/IFlameHandler.h>
#include <Il2CppModLoader/app/types/INightBerrySpiritRingReciever.h>
#include <Il2CppModLoader/app/types/IProjectileDetonatable.h>
#include <Il2CppModLoader/app/types/IReflectable.h>
#include <Il2CppModLoader/app/types/IRelatedReflectable.h>
#include <Il2CppModLoader/app/types/ISeinReceiver.h>
#include <Il2CppModLoader/app/types/IPhysicsTriggerHandler.h>
#include <Il2CppModLoader/app/types/IKillReciever.h>
#include <Il2CppModLoader/app/types/IWaterDashAtackable.h>
#include <Il2CppModLoader/app/types/ServerBoxCollider_BoxColliderData.h>
#include <Il2CppModLoader/app/types/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#include <Il2CppModLoader/app/types/ServerConfigurableJoint_ConfigurableJointData.h>
#include <Il2CppModLoader/app/types/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData.h>
#include <Il2CppModLoader/app/types/ServerInstantiateAction_InstantiateActionData.h>
#include <Il2CppModLoader/app/types/ServerMeshCollider_MeshColliderData.h>
#include <Il2CppModLoader/app/types/ServerOwlProjectileTest_OwlProjectileTestData.h>
#include <Il2CppModLoader/app/types/ServerPhysicalSystemManager_RigidbodyStateData.h>
#include <Il2CppModLoader/app/types/ServerPhysicalSystemManager_PhysicalManagerData.h>
#include <Il2CppModLoader/app/types/ServerPolygon_PolygonData.h>
#include <Il2CppModLoader/app/types/ServerProjectile_ServerProjectileData.h>
#include <Il2CppModLoader/app/types/ServerProjectileSpawner_ProjectileSpawnerData.h>
#include <Il2CppModLoader/app/types/ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData.h>
#include <Il2CppModLoader/app/types/ServerAnimatorHelper_SequenceEntryData__Array.h>
#include <Il2CppModLoader/app/types/ServerRigidbody_RigidbodyData.h>
#include <Il2CppModLoader/app/types/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData.h>
#include <Il2CppModLoader/app/types/ServerSpawnOnKill_SpawnOnKillData.h>
#include <Il2CppModLoader/app/types/ServerSphereCollider_SphereColliderData.h>
#include <Il2CppModLoader/app/types/ServerTransform_TransformData.h>
#include <Il2CppModLoader/app/types/SneezeSlugBurrowBehaviour_UnburrowPointRate.h>
#include <Il2CppModLoader/app/types/IPlatformMovement.h>
#include <Il2CppModLoader/app/types/Task_1_SystemIntegration_Races_RaceRequestResultEntry___Array.h>
#include <Il2CppModLoader/app/types/ITrapAttackable.h>
#include <Il2CppModLoader/app/types/IWindPipeZoneReceiver.h>
#include <Il2CppModLoader/app/types/Int32Enum__Enum.h>
#include <Il2CppModLoader/app/types/ByteEnum__Enum.h>
#include <Il2CppModLoader/app/types/PlayableBinding.h>
#include <Il2CppModLoader/app/types/PlayableBinding__Array.h>
#include <Il2CppModLoader/app/types/EmptyStruct.h>
#include <Il2CppModLoader/app/types/AtlassingSetting__Array.h>
#include <Il2CppModLoader/app/types/FPSTestFields_FieldDef__Array.h>
#include <Il2CppModLoader/app/types/ArraySegment_1_Byte___Array.h>
#include <Il2CppModLoader/app/types/InternalCodePageDataItem__Array.h>
#include <Il2CppModLoader/app/types/InternalEncodingDataItem__Array.h>
#include <Il2CppModLoader/app/types/Socket_WSABUF__Array.h>
#include <Il2CppModLoader/app/types/GCHandle__Array.h>
#include <Il2CppModLoader/app/types/SendMouseEvents_HitInfo__Array.h>
#include <Il2CppModLoader/app/types/ADP.h>
#include <Il2CppModLoader/app/types/GC_1.h>
#include <Il2CppModLoader/app/types/Convert.h>
#include <Il2CppModLoader/app/types/ShaderID_AVProWindowsMediaFormatConverter.h>
#include <Il2CppModLoader/app/types/Mathf.h>
#include <Il2CppModLoader/app/types/Graphics.h>
#include <Il2CppModLoader/app/types/GUI.h>
#include <Il2CppModLoader/app/types/AVProWindowsMediaMovie__Array.h>
#include <Il2CppModLoader/app/types/ShaderKeyword_AVProWindowsMediaManager.h>
#include <Il2CppModLoader/app/types/Debug_1.h>
#include <Il2CppModLoader/app/types/Path.h>
#include <Il2CppModLoader/app/types/Marshal.h>
#include <Il2CppModLoader/app/types/IComparable.h>
#include <Il2CppModLoader/app/types/AchievementUploader.h>
#include <Il2CppModLoader/app/types/UI.h>
#include <Il2CppModLoader/app/types/UI_Hints.h>
#include <Il2CppModLoader/app/types/SuspensionManager.h>
#include <Il2CppModLoader/app/types/Checkpoint_Events.h>
#include <Il2CppModLoader/app/types/UberShaderAPI.h>
#include <Il2CppModLoader/app/types/Input_Cmd.h>
#include <Il2CppModLoader/app/types/Targets.h>
#include <Il2CppModLoader/app/types/PhysicsHelper.h>
#include <Il2CppModLoader/app/types/UI_Cameras.h>

namespace app::classes::types {
    namespace P3D_Triangle { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Triangle__Class** type_info = (::app::P3D_Triangle__Class**)(modloader::win::memory::resolve_rva(0x0472A720)); }
    namespace P3D_Node { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Node__Class** type_info = (::app::P3D_Node__Class**)(modloader::win::memory::resolve_rva(0x0478C090)); }
    namespace P3D_Painter { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Painter__Class** type_info = (::app::P3D_Painter__Class**)(modloader::win::memory::resolve_rva(0x04767EE8)); }
    namespace P3D_Result { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Result__Class** type_info = (::app::P3D_Result__Class**)(modloader::win::memory::resolve_rva(0x0478B438)); }
    namespace P3D_TexturePreview { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_TexturePreview__Class** type_info = (::app::P3D_TexturePreview__Class**)(modloader::win::memory::resolve_rva(0x04727B98)); }
    namespace P3D_Tree { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Tree__Class** type_info = (::app::P3D_Tree__Class**)(modloader::win::memory::resolve_rva(0x0472B758)); }
    namespace IMoonTypeEditableResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonTypeEditableResolver__Class** type_info = (::app::IMoonTypeEditableResolver__Class**)(modloader::win::memory::resolve_rva(0x04799448)); }
    namespace IMoonTypeResolveGetter { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonTypeResolveGetter__Class** type_info = (::app::IMoonTypeResolveGetter__Class**)(modloader::win::memory::resolve_rva(0x0478D060)); }
    namespace CustomAttributeTypedArgument__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CustomAttributeTypedArgument__Array__Class** type_info = (::app::CustomAttributeTypedArgument__Array__Class**)(modloader::win::memory::resolve_rva(0x0478FCB8)); }
    namespace XmlAtomicValue__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlAtomicValue__Array__Class** type_info = (::app::XmlAtomicValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04776018)); }
    namespace BeforeRenderHelper_OrderBlock { IL2CPP_MODLOADER_DLLEXPORT ::app::BeforeRenderHelper_OrderBlock__Class** type_info = (::app::BeforeRenderHelper_OrderBlock__Class**)(modloader::win::memory::resolve_rva(0x047464C0)); }
    namespace IEdge { IL2CPP_MODLOADER_DLLEXPORT ::app::IEdge__Class** type_info = (::app::IEdge__Class**)(modloader::win::memory::resolve_rva(0x0477B708)); }
    namespace GennadiysDice_DiceEvents__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::GennadiysDice_DiceEvents__Enum__Class** type_info = (::app::GennadiysDice_DiceEvents__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730470)); }
    namespace TimelineHelper_ConstraintWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper_ConstraintWrapper__Class** type_info = (::app::TimelineHelper_ConstraintWrapper__Class**)(modloader::win::memory::resolve_rva(0x04789DD8)); }
    namespace IVirtualTimelineGameObject { IL2CPP_MODLOADER_DLLEXPORT ::app::IVirtualTimelineGameObject__Class** type_info = (::app::IVirtualTimelineGameObject__Class**)(modloader::win::memory::resolve_rva(0x04791F08)); }
    namespace IPlayFabTransportPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::IPlayFabTransportPlugin__Class** type_info = (::app::IPlayFabTransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04727898)); }
    namespace IBubbleKiller { IL2CPP_MODLOADER_DLLEXPORT ::app::IBubbleKiller__Class** type_info = (::app::IBubbleKiller__Class**)(modloader::win::memory::resolve_rva(0x047383E8)); }
    namespace IBouncealbeFromCartBouncer { IL2CPP_MODLOADER_DLLEXPORT ::app::IBouncealbeFromCartBouncer__Class** type_info = (::app::IBouncealbeFromCartBouncer__Class**)(modloader::win::memory::resolve_rva(0x0473DA80)); }
    namespace IEnablingModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::IEnablingModifier__Class** type_info = (::app::IEnablingModifier__Class**)(modloader::win::memory::resolve_rva(0x04751A00)); }
    namespace IPickupCollector { IL2CPP_MODLOADER_DLLEXPORT ::app::IPickupCollector__Class** type_info = (::app::IPickupCollector__Class**)(modloader::win::memory::resolve_rva(0x047044B0)); }
    namespace WaterPoison_IDamageDealer { IL2CPP_MODLOADER_DLLEXPORT ::app::WaterPoison_IDamageDealer__Class** type_info = (::app::WaterPoison_IDamageDealer__Class**)(modloader::win::memory::resolve_rva(0x047952C8)); }
    namespace IGhostProximityRecordable { IL2CPP_MODLOADER_DLLEXPORT ::app::IGhostProximityRecordable__Class** type_info = (::app::IGhostProximityRecordable__Class**)(modloader::win::memory::resolve_rva(0x047021E0)); }
    namespace IRecordingContext { IL2CPP_MODLOADER_DLLEXPORT ::app::IRecordingContext__Class** type_info = (::app::IRecordingContext__Class**)(modloader::win::memory::resolve_rva(0x04725070)); }
    namespace ITimelineContext { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineContext__Class** type_info = (::app::ITimelineContext__Class**)(modloader::win::memory::resolve_rva(0x04715F58)); }
    namespace IRecordableTransform { IL2CPP_MODLOADER_DLLEXPORT ::app::IRecordableTransform__Class** type_info = (::app::IRecordableTransform__Class**)(modloader::win::memory::resolve_rva(0x04733748)); }
    namespace IRecordableTransformWithExternalID { IL2CPP_MODLOADER_DLLEXPORT ::app::IRecordableTransformWithExternalID__Class** type_info = (::app::IRecordableTransformWithExternalID__Class**)(modloader::win::memory::resolve_rva(0x04767CD8)); }
    namespace IKuReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::IKuReceiver__Class** type_info = (::app::IKuReceiver__Class**)(modloader::win::memory::resolve_rva(0x0475EAB8)); }
    namespace IDashAtackable { IL2CPP_MODLOADER_DLLEXPORT ::app::IDashAtackable__Class** type_info = (::app::IDashAtackable__Class**)(modloader::win::memory::resolve_rva(0x0478ACE8)); }
    namespace ISwordAttackable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISwordAttackable__Class** type_info = (::app::ISwordAttackable__Class**)(modloader::win::memory::resolve_rva(0x04797838)); }
    namespace XalService_AsyncBlock { IL2CPP_MODLOADER_DLLEXPORT ::app::XalService_AsyncBlock__Class** type_info = (::app::XalService_AsyncBlock__Class**)(modloader::win::memory::resolve_rva(0x0473CCD8)); }
    namespace IPrewarmable { IL2CPP_MODLOADER_DLLEXPORT ::app::IPrewarmable__Class** type_info = (::app::IPrewarmable__Class**)(modloader::win::memory::resolve_rva(0x0475C378)); }
    namespace IFlameHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IFlameHandler__Class** type_info = (::app::IFlameHandler__Class**)(modloader::win::memory::resolve_rva(0x0470CF60)); }
    namespace INightBerrySpiritRingReciever { IL2CPP_MODLOADER_DLLEXPORT ::app::INightBerrySpiritRingReciever__Class** type_info = (::app::INightBerrySpiritRingReciever__Class**)(modloader::win::memory::resolve_rva(0x04736F38)); }
    namespace IProjectileDetonatable { IL2CPP_MODLOADER_DLLEXPORT ::app::IProjectileDetonatable__Class** type_info = (::app::IProjectileDetonatable__Class**)(modloader::win::memory::resolve_rva(0x04728AB8)); }
    namespace IReflectable { IL2CPP_MODLOADER_DLLEXPORT ::app::IReflectable__Class** type_info = (::app::IReflectable__Class**)(modloader::win::memory::resolve_rva(0x04758FC8)); }
    namespace IRelatedReflectable { IL2CPP_MODLOADER_DLLEXPORT ::app::IRelatedReflectable__Class** type_info = (::app::IRelatedReflectable__Class**)(modloader::win::memory::resolve_rva(0x047897A0)); }
    namespace ISeinReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::ISeinReceiver__Class** type_info = (::app::ISeinReceiver__Class**)(modloader::win::memory::resolve_rva(0x04725F48)); }
    namespace IPhysicsTriggerHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPhysicsTriggerHandler__Class** type_info = (::app::IPhysicsTriggerHandler__Class**)(modloader::win::memory::resolve_rva(0x0475DE68)); }
    namespace IKillReciever { IL2CPP_MODLOADER_DLLEXPORT ::app::IKillReciever__Class** type_info = (::app::IKillReciever__Class**)(modloader::win::memory::resolve_rva(0x04704E10)); }
    namespace IWaterDashAtackable { IL2CPP_MODLOADER_DLLEXPORT ::app::IWaterDashAtackable__Class** type_info = (::app::IWaterDashAtackable__Class**)(modloader::win::memory::resolve_rva(0x0478F580)); }
    namespace ServerBoxCollider_BoxColliderData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerBoxCollider_BoxColliderData__Class** type_info = (::app::ServerBoxCollider_BoxColliderData__Class**)(modloader::win::memory::resolve_rva(0x0475FAB0)); }
    namespace ServerBreakablePhysicalSetup_BreakablePhysicalSetupData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class** type_info = (::app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData__Class**)(modloader::win::memory::resolve_rva(0x0473D440)); }
    namespace ServerConfigurableJoint_ConfigurableJointData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerConfigurableJoint_ConfigurableJointData__Class** type_info = (::app::ServerConfigurableJoint_ConfigurableJointData__Class**)(modloader::win::memory::resolve_rva(0x04765688)); }
    namespace ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class** type_info = (::app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class**)(modloader::win::memory::resolve_rva(0x04719CA0)); }
    namespace ServerInstantiateAction_InstantiateActionData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerInstantiateAction_InstantiateActionData__Class** type_info = (::app::ServerInstantiateAction_InstantiateActionData__Class**)(modloader::win::memory::resolve_rva(0x04701C60)); }
    namespace ServerMeshCollider_MeshColliderData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerMeshCollider_MeshColliderData__Class** type_info = (::app::ServerMeshCollider_MeshColliderData__Class**)(modloader::win::memory::resolve_rva(0x04774630)); }
    namespace ServerOwlProjectileTest_OwlProjectileTestData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerOwlProjectileTest_OwlProjectileTestData__Class** type_info = (::app::ServerOwlProjectileTest_OwlProjectileTestData__Class**)(modloader::win::memory::resolve_rva(0x04759670)); }
    namespace ServerPhysicalSystemManager_RigidbodyStateData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerPhysicalSystemManager_RigidbodyStateData__Class** type_info = (::app::ServerPhysicalSystemManager_RigidbodyStateData__Class**)(modloader::win::memory::resolve_rva(0x0477B9C0)); }
    namespace ServerPhysicalSystemManager_PhysicalManagerData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerPhysicalSystemManager_PhysicalManagerData__Class** type_info = (::app::ServerPhysicalSystemManager_PhysicalManagerData__Class**)(modloader::win::memory::resolve_rva(0x04701018)); }
    namespace ServerPolygon_PolygonData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerPolygon_PolygonData__Class** type_info = (::app::ServerPolygon_PolygonData__Class**)(modloader::win::memory::resolve_rva(0x04759498)); }
    namespace ServerProjectile_ServerProjectileData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerProjectile_ServerProjectileData__Class** type_info = (::app::ServerProjectile_ServerProjectileData__Class**)(modloader::win::memory::resolve_rva(0x04710660)); }
    namespace ServerProjectileSpawner_ProjectileSpawnerData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerProjectileSpawner_ProjectileSpawnerData__Class** type_info = (::app::ServerProjectileSpawner_ProjectileSpawnerData__Class**)(modloader::win::memory::resolve_rva(0x0474C130)); }
    namespace ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class** type_info = (::app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class**)(modloader::win::memory::resolve_rva(0x04713C90)); }
    namespace ServerAnimatorHelper_SequenceEntryData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerAnimatorHelper_SequenceEntryData__Array__Class** type_info = (::app::ServerAnimatorHelper_SequenceEntryData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478C600)); }
    namespace ServerRigidbody_RigidbodyData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerRigidbody_RigidbodyData__Class** type_info = (::app::ServerRigidbody_RigidbodyData__Class**)(modloader::win::memory::resolve_rva(0x04794820)); }
    namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class** type_info = (::app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class**)(modloader::win::memory::resolve_rva(0x0474D7C8)); }
    namespace ServerSpawnOnKill_SpawnOnKillData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerSpawnOnKill_SpawnOnKillData__Class** type_info = (::app::ServerSpawnOnKill_SpawnOnKillData__Class**)(modloader::win::memory::resolve_rva(0x04736B88)); }
    namespace ServerSphereCollider_SphereColliderData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerSphereCollider_SphereColliderData__Class** type_info = (::app::ServerSphereCollider_SphereColliderData__Class**)(modloader::win::memory::resolve_rva(0x0475D4D8)); }
    namespace ServerTransform_TransformData { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerTransform_TransformData__Class** type_info = (::app::ServerTransform_TransformData__Class**)(modloader::win::memory::resolve_rva(0x047307E8)); }
    namespace SneezeSlugBurrowBehaviour_UnburrowPointRate { IL2CPP_MODLOADER_DLLEXPORT ::app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class** type_info = (::app::SneezeSlugBurrowBehaviour_UnburrowPointRate__Class**)(modloader::win::memory::resolve_rva(0x04784538)); }
    namespace IPlatformMovement { IL2CPP_MODLOADER_DLLEXPORT ::app::IPlatformMovement__Class** type_info = (::app::IPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x04756850)); }
    namespace Task_1_SystemIntegration_Races_RaceRequestResultEntry___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Task_1_SystemIntegration_Races_RaceRequestResultEntry___Array__Class** type_info = (::app::Task_1_SystemIntegration_Races_RaceRequestResultEntry___Array__Class**)(modloader::win::memory::resolve_rva(0x047994D0)); }
    namespace ITrapAttackable { IL2CPP_MODLOADER_DLLEXPORT ::app::ITrapAttackable__Class** type_info = (::app::ITrapAttackable__Class**)(modloader::win::memory::resolve_rva(0x04796AB0)); }
    namespace IWindPipeZoneReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::IWindPipeZoneReceiver__Class** type_info = (::app::IWindPipeZoneReceiver__Class**)(modloader::win::memory::resolve_rva(0x0473D038)); }
    namespace Int32Enum__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Int32Enum__Enum__Class** type_info = (::app::Int32Enum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477BED8)); }
    namespace ByteEnum__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ByteEnum__Enum__Class** type_info = (::app::ByteEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470A360)); }
    namespace PlayableBinding { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayableBinding__Class** type_info = (::app::PlayableBinding__Class**)(modloader::win::memory::resolve_rva(0x047816B0)); }
    namespace PlayableBinding__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayableBinding__Array__Class** type_info = (::app::PlayableBinding__Array__Class**)(modloader::win::memory::resolve_rva(0x04798D10)); }
    namespace EmptyStruct { IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyStruct__Class** type_info = (::app::EmptyStruct__Class**)(modloader::win::memory::resolve_rva(0x04711A20)); }
    namespace AtlassingSetting__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AtlassingSetting__Array__Class** type_info = (::app::AtlassingSetting__Array__Class**)(modloader::win::memory::resolve_rva(0x0472EE08)); }
    namespace FPSTestFields_FieldDef__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSTestFields_FieldDef__Array__Class** type_info = (::app::FPSTestFields_FieldDef__Array__Class**)(modloader::win::memory::resolve_rva(0x0478EBD8)); }
    namespace ArraySegment_1_Byte___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ArraySegment_1_Byte___Array__Class** type_info = (::app::ArraySegment_1_Byte___Array__Class**)(modloader::win::memory::resolve_rva(0x0470BAE8)); }
    namespace InternalCodePageDataItem__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalCodePageDataItem__Array__Class** type_info = (::app::InternalCodePageDataItem__Array__Class**)(modloader::win::memory::resolve_rva(0x047539A8)); }
    namespace InternalEncodingDataItem__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalEncodingDataItem__Array__Class** type_info = (::app::InternalEncodingDataItem__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A7E8)); }
    namespace Socket_WSABUF__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Socket_WSABUF__Array__Class** type_info = (::app::Socket_WSABUF__Array__Class**)(modloader::win::memory::resolve_rva(0x047940A8)); }
    namespace GCHandle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::GCHandle__Array__Class** type_info = (::app::GCHandle__Array__Class**)(modloader::win::memory::resolve_rva(0x047943C8)); }
    namespace SendMouseEvents_HitInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SendMouseEvents_HitInfo__Array__Class** type_info = (::app::SendMouseEvents_HitInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04756D48)); }
    namespace ADP { IL2CPP_MODLOADER_DLLEXPORT ::app::ADP__Class** type_info = (::app::ADP__Class**)(modloader::win::memory::resolve_rva(0x047240A8)); }
    namespace GC_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GC_1__Class** type_info = (::app::GC_1__Class**)(modloader::win::memory::resolve_rva(0x0474D440)); }
    namespace Convert { IL2CPP_MODLOADER_DLLEXPORT ::app::Convert__Class** type_info = (::app::Convert__Class**)(modloader::win::memory::resolve_rva(0x0472F068)); }
    namespace ShaderID_AVProWindowsMediaFormatConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AVProWindowsMediaFormatConverter__Class** type_info = (::app::ShaderID_AVProWindowsMediaFormatConverter__Class**)(modloader::win::memory::resolve_rva(0x047080B8)); }
    namespace Mathf { IL2CPP_MODLOADER_DLLEXPORT ::app::Mathf__Class** type_info = (::app::Mathf__Class**)(modloader::win::memory::resolve_rva(0x047629A8)); }
    namespace Graphics { IL2CPP_MODLOADER_DLLEXPORT ::app::Graphics__Class** type_info = (::app::Graphics__Class**)(modloader::win::memory::resolve_rva(0x04761928)); }
    namespace GUI { IL2CPP_MODLOADER_DLLEXPORT ::app::GUI__Class** type_info = (::app::GUI__Class**)(modloader::win::memory::resolve_rva(0x0476D9C8)); }
    namespace AVProWindowsMediaMovie__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AVProWindowsMediaMovie__Array__Class** type_info = (::app::AVProWindowsMediaMovie__Array__Class**)(modloader::win::memory::resolve_rva(0x0470F920)); }
    namespace ShaderKeyword_AVProWindowsMediaManager { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword_AVProWindowsMediaManager__Class** type_info = (::app::ShaderKeyword_AVProWindowsMediaManager__Class**)(modloader::win::memory::resolve_rva(0x0471E248)); }
    namespace Debug_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Debug_1__Class** type_info = (::app::Debug_1__Class**)(modloader::win::memory::resolve_rva(0x0474F2E0)); }
    namespace Path { IL2CPP_MODLOADER_DLLEXPORT ::app::Path__Class** type_info = (::app::Path__Class**)(modloader::win::memory::resolve_rva(0x04718150)); }
    namespace Marshal { IL2CPP_MODLOADER_DLLEXPORT ::app::Marshal__Class** type_info = (::app::Marshal__Class**)(modloader::win::memory::resolve_rva(0x047428E0)); }
    namespace IComparable { IL2CPP_MODLOADER_DLLEXPORT ::app::IComparable__Class** type_info = (::app::IComparable__Class**)(modloader::win::memory::resolve_rva(0x04743E08)); }
    namespace AchievementUploader { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementUploader__Class** type_info = (::app::AchievementUploader__Class**)(modloader::win::memory::resolve_rva(0x04773FB0)); }
    namespace UI { IL2CPP_MODLOADER_DLLEXPORT ::app::UI__Class** type_info = (::app::UI__Class**)(modloader::win::memory::resolve_rva(0x04783338)); }
    namespace UI_Hints { IL2CPP_MODLOADER_DLLEXPORT ::app::UI_Hints__Class** type_info = (::app::UI_Hints__Class**)(modloader::win::memory::resolve_rva(0x04736668)); }
    namespace SuspensionManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SuspensionManager__Class** type_info = (::app::SuspensionManager__Class**)(modloader::win::memory::resolve_rva(0x04720CD0)); }
    namespace Checkpoint_Events { IL2CPP_MODLOADER_DLLEXPORT ::app::Checkpoint_Events__Class** type_info = (::app::Checkpoint_Events__Class**)(modloader::win::memory::resolve_rva(0x04794928)); }
    namespace UberShaderAPI { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderAPI__Class** type_info = (::app::UberShaderAPI__Class**)(modloader::win::memory::resolve_rva(0x0471E900)); }
    namespace Input_Cmd { IL2CPP_MODLOADER_DLLEXPORT ::app::Input_Cmd__Class** type_info = (::app::Input_Cmd__Class**)(modloader::win::memory::resolve_rva(0x0475BD40)); }
    namespace Targets { IL2CPP_MODLOADER_DLLEXPORT ::app::Targets__Class** type_info = (::app::Targets__Class**)(modloader::win::memory::resolve_rva(0x047219C0)); }
    namespace PhysicsHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsHelper__Class** type_info = (::app::PhysicsHelper__Class**)(modloader::win::memory::resolve_rva(0x04726968)); }
    namespace UI_Cameras { IL2CPP_MODLOADER_DLLEXPORT ::app::UI_Cameras__Class** type_info = (::app::UI_Cameras__Class**)(modloader::win::memory::resolve_rva(0x04704778)); }
}
