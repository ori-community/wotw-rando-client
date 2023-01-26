#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerObjectComponent.h>
#include <Modloader/app/structs/BreakablePhysicalSetup.h>
#include <Modloader/app/structs/ExplodingRigidbody.h>
#include <Modloader/app/structs/InstantiateAction.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SeekingProjectile.h>
#include <Modloader/app/structs/ServerBoxCollider_BoxColliderData.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData.h>
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData.h>
#include <Modloader/app/structs/ServerInstantiateAction_InstantiateActionData.h>
#include <Modloader/app/structs/ServerMeshCollider_MeshColliderData.h>
#include <Modloader/app/structs/ServerOwlProjectileTest_OwlProjectileTestData.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_PhysicalManagerData.h>
#include <Modloader/app/structs/ServerPolygon_PolygonData.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData.h>
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData.h>
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData.h>
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData.h>
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData.h>
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData.h>
#include <Modloader/app/structs/ServerTransform_TransformData.h>
#include <Modloader/app/structs/SpawnOnKill.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ServerObjectComponent {
    IL2CPP_REGISTER_METHOD(0x00AC05C0, void, ctor, (app::ServerObjectComponent * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x016AB2F0, app::Object*, GrabData_1, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB350, app::Object*, RebuildComponent_1, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::Object*, RebuildComponent_2, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_1, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerBoxCollider_BoxColliderData, GrabData_2, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_2, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AAF10, app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData, GrabData_3, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::BreakablePhysicalSetup*, RebuildComponent_3, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x016AAF90, app::ServerConfigurableJoint_ConfigurableJointData, GrabData_4, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB060, app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData, GrabData_5, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_3, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB350, app::ExplodingRigidbody*, RebuildComponent_4, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB2F0, app::String*, GrabData_6, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_4, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB100, app::ServerInstantiateAction_InstantiateActionData, GrabData_7, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::InstantiateAction*, RebuildComponent_5, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_5, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB350, app::LimitedLifetime*, RebuildComponent_6, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerMeshCollider_MeshColliderData, GrabData_8, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB180, app::ServerOwlProjectileTest_OwlProjectileTestData, GrabData_9, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB1F0, app::ServerPhysicalSystemManager_PhysicalManagerData, GrabData_10, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_6, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB100, app::ServerPolygon_PolygonData, GrabData_11, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::Polygon_1*, RebuildComponent_7, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_7, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB180, app::ServerProjectile_ServerProjectileData, GrabData_12, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::Projectile*, RebuildComponent_8, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_8, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB100, app::ServerProjectileSpawner_ProjectileSpawnerData, GrabData_13, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::ProjectileSpawner*, RebuildComponent_9, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x016AB1F0, app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData, GrabData_14, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB270, app::ServerRigidbody_RigidbodyData, GrabData_15, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_9, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::SeekingProjectile*, RebuildComponent_10, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData, GrabData_16, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_10, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AB180, app::ServerSpawnOnKill_SpawnOnKillData, GrabData_17, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::SpawnOnKill*, RebuildComponent_11, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerSphereCollider_SphereColliderData, GrabData_18, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AAF10, app::ServerTransform_TransformData, GrabData_19, (app::ServerObjectComponent * this_ptr))
} // namespace app::classes::ServerObjectComponent
