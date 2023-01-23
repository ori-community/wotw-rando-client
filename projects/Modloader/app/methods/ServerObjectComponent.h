#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerObjectComponent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ServerBoxCollider_BoxColliderData.h>
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#include <Modloader/app/structs/BreakablePhysicalSetup.h>
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData.h>
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData.h>
#include <Modloader/app/structs/ExplodingRigidbody.h>
#include <Modloader/app/structs/ServerInstantiateAction_InstantiateActionData.h>
#include <Modloader/app/structs/InstantiateAction.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/ServerMeshCollider_MeshColliderData.h>
#include <Modloader/app/structs/ServerOwlProjectileTest_OwlProjectileTestData.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_PhysicalManagerData.h>
#include <Modloader/app/structs/ServerPolygon_PolygonData.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData.h>
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData.h>
#include <Modloader/app/structs/SeekingProjectile.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData.h>
#include <Modloader/app/structs/ServerSpawnOnKill_SpawnOnKillData.h>
#include <Modloader/app/structs/SpawnOnKill.h>
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData.h>
#include <Modloader/app/structs/ServerTransform_TransformData.h>

namespace app::classes::ServerObjectComponent {
    IL2CPP_REGISTER_METHOD(0x00AC05C0, void, ctor, (app::ServerObjectComponent * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x016AB2F0, app::Object*, GrabData_1, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB350, app::Object*, RebuildComponent_1, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016AB530, app::Object*, RebuildComponent_2, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_1, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerBoxCollider_BoxColliderData, GrabData_2, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754618, ServerObjectComponent_GrabData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_2, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x0470B7E8, ServerObjectComponent_CreateBaseData_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAF10, app::ServerBreakablePhysicalSetup_BreakablePhysicalSetupData, GrabData_3, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A740, ServerObjectComponent_GrabData_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::BreakablePhysicalSetup*, RebuildComponent_3, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x047566A8, ServerObjectComponent_RebuildComponent_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAF90, app::ServerConfigurableJoint_ConfigurableJointData, GrabData_4, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471EFB8, ServerObjectComponent_GrabData_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB060, app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData, GrabData_5, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709628, ServerObjectComponent_GrabData_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_3, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x0472F4A8, ServerObjectComponent_CreateBaseData_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB350, app::ExplodingRigidbody*, RebuildComponent_4, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780C30, ServerObjectComponent_RebuildComponent_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB2F0, app::String*, GrabData_6, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D290, ServerObjectComponent_GrabData_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_4, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x04738AA0, ServerObjectComponent_CreateBaseData_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB100, app::ServerInstantiateAction_InstantiateActionData, GrabData_7, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CB58, ServerObjectComponent_GrabData_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::InstantiateAction*, RebuildComponent_5, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x0475E028, ServerObjectComponent_RebuildComponent_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_5, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x0475F1C8, ServerObjectComponent_CreateBaseData_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB350, app::LimitedLifetime*, RebuildComponent_6, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F038, ServerObjectComponent_RebuildComponent_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerMeshCollider_MeshColliderData, GrabData_8, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AEB0, ServerObjectComponent_GrabData_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB180, app::ServerOwlProjectileTest_OwlProjectileTestData, GrabData_9, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B420, ServerObjectComponent_GrabData_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB1F0, app::ServerPhysicalSystemManager_PhysicalManagerData, GrabData_10, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730B48, ServerObjectComponent_GrabData_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_6, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x04752AA0, ServerObjectComponent_CreateBaseData_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB100, app::ServerPolygon_PolygonData, GrabData_11, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744D70, ServerObjectComponent_GrabData_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::Polygon_1*, RebuildComponent_7, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x04725B40, ServerObjectComponent_RebuildComponent_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_7, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x0470D4D0, ServerObjectComponent_CreateBaseData_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB180, app::ServerProjectile_ServerProjectileData, GrabData_12, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472ED38, ServerObjectComponent_GrabData_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::Projectile*, RebuildComponent_8, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x047799F8, ServerObjectComponent_RebuildComponent_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_8, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x04746A10, ServerObjectComponent_CreateBaseData_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB100, app::ServerProjectileSpawner_ProjectileSpawnerData, GrabData_13, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047992D8, ServerObjectComponent_GrabData_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::ProjectileSpawner*, RebuildComponent_9, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x047174C8, ServerObjectComponent_RebuildComponent_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB1F0, app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData, GrabData_14, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476DE60, ServerObjectComponent_GrabData_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB270, app::ServerRigidbody_RigidbodyData, GrabData_15, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736C68, ServerObjectComponent_GrabData_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_9, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x0478BC20, ServerObjectComponent_CreateBaseData_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::SeekingProjectile*, RebuildComponent_10, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x0473D788, ServerObjectComponent_RebuildComponent_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData, GrabData_16, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727778, ServerObjectComponent_GrabData_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01541A70, app::String*, CreateBaseData_10, (app::ServerObjectComponent * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x0475CE98, ServerObjectComponent_CreateBaseData_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB180, app::ServerSpawnOnKill_SpawnOnKillData, GrabData_17, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BE30, ServerObjectComponent_GrabData_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB530, app::SpawnOnKill*, RebuildComponent_11, (app::ServerObjectComponent * this_ptr, app::String* xmlobj))
    IL2CPP_REGISTER_METHODINFO(0x04762440, ServerObjectComponent_RebuildComponent_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAE90, app::ServerSphereCollider_SphereColliderData, GrabData_18, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BCE0, ServerObjectComponent_GrabData_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AAF10, app::ServerTransform_TransformData, GrabData_19, (app::ServerObjectComponent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778440, ServerObjectComponent_GrabData_18__MethodInfo)
} // namespace app::classes::ServerObjectComponent
