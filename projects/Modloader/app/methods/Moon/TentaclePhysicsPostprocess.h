#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TentaclePhysicsPostprocess.h>
#include <Modloader/app/structs/TentaclePhysicsController.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/EnvTopology.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::Moon::TentaclePhysicsPostprocess {
    IL2CPP_REGISTER_METHOD(0x010ADD80, bool, get_ClassEnabled, ())
    IL2CPP_REGISTER_METHOD(0x010ADE20, void, set_ClassEnabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ADED0, app::TentaclePhysicsController*, get_PhysCtrl, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ADEF0, void, OnAddedToAnimator, (app::TentaclePhysicsPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x010ADFA0, void, OnRemovedFromAnimator, (app::TentaclePhysicsPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x010AE050, void, RegisterBatchedCapsules, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AE0F0, void, UnregisterBatchedCapsules, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AE190, int32_t, get_JointCount, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AE1C0, void, GenerateEnvTopology, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AE400, void, Init, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AE610, void, Allocate, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AE8B0, void, Process, (app::TentaclePhysicsPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010AF8D0, void, DrawJointChain, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, app::Color color, float radius))
    IL2CPP_REGISTER_METHOD(0x010AF940, void, GetTransforms, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, app::Quaternion__Array* joint_rot))
    IL2CPP_REGISTER_METHOD(0x010AF9E0, void, SetTransforms, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, app::Quaternion__Array* joint_rot, app::Vector3__Array* joint_scale))
    IL2CPP_REGISTER_METHOD(0x010AFA60, void, PullTowardsTarget, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* target_pos, app::Vector3__Array* particle_pos, app::Vector3__Array* particle_velo, float influence, float dt))
    IL2CPP_REGISTER_METHOD(0x010B0160, void, ApplyBoneLen, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* particle_pos, app::Vector3__Array* particle_velo, float dt))
    IL2CPP_REGISTER_METHOD(0x010B0720, void, ApplyVeloSmoothing, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* particle_velo))
    IL2CPP_REGISTER_METHOD(0x010B0E60, void, ApplyStraightening, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* particle_pos, app::Vector3__Array* particle_velo, float dt))
    IL2CPP_REGISTER_METHOD(0x010B13E0, void, ApplyGravity, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* particle_velo, float influence, float dt))
    IL2CPP_REGISTER_METHOD(0x010B1630, void, PushFromEnv, (app::TentaclePhysicsPostprocess * this_ptr, app::EnvTopology* env, app::Vector3__Array* particle_pos, app::Vector3__Array* particle_velo, bool apply_friction, float dt))
    IL2CPP_REGISTER_METHOD(0x010B1FC0, void, UpdateParticles, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* particle_pos, app::Vector3__Array* particle_velo, bool in_water, float dt))
    IL2CPP_REGISTER_METHOD(0x010B22D0, void, ValidateParticlePositions, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3 origin, app::Vector3__Array* particle_pos, app::Vector3__Array* particle_velo, app::Vector3__Array* fallback_pos, float max_dist))
    IL2CPP_REGISTER_METHOD(0x010B2560, void, ApplyKickback, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* source_pos, app::Vector3__Array* result_pos))
    IL2CPP_REGISTER_METHOD(0x010B2760, void, UpdateHeadPos, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos))
    IL2CPP_REGISTER_METHOD(0x010B29C0, void, UpdateHeadRot, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, app::Quaternion__Array* joint_post_rot, app::Quaternion__Array* joint_anim_rot))
    IL2CPP_REGISTER_METHOD(0x010B2E70, app::Quaternion, GetSimpleHeadRot, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos))
    IL2CPP_REGISTER_METHOD(0x010B3070, void, CalculateJointRotations, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, app::Quaternion__Array* joint_rot, app::Vector3__Array* joint_scale))
    IL2CPP_REGISTER_METHOD(0x010B3400, void, UpdateAnimRefTarget, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B3700, void, ApplyTargetIKToChain, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* from_joints, app::Vector3__Array* to_joints))
    IL2CPP_REGISTER_METHOD(0x010B3F90, app::Vector3, ApplyTargetIKToJoint, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3 joint_pos, app::Vector3 ref_origin, app::Vector3 ref_tangent, app::Vector3 ref_normal, app::Vector3 target_tangent, app::Vector3 target_normal, float target_tangent_scale, float weight))
    IL2CPP_REGISTER_METHOD(0x010B42E0, void, UpdateAdaptiveColliders, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, int32_t joint_count))
    IL2CPP_REGISTER_METHOD(0x010B4360, void, SetActiveCapsules, (app::TentaclePhysicsPostprocess * this_ptr, int32_t from_index, int32_t to_index, bool active))
    IL2CPP_REGISTER_METHOD(0x010B4540, void, AdaptCapsulesToRange, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, int32_t from_index, int32_t to_index, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x010B4920, void, AddAdaptiveCapsule, (app::TentaclePhysicsPostprocess * this_ptr, app::Vector3__Array* joint_pos, int32_t from_index, int32_t to_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B4D00, void, ctor, (app::TentaclePhysicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B4E20, void, cctor, ())
} // namespace app::classes::Moon::TentaclePhysicsPostprocess
