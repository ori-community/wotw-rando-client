#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/SwarmNestEntity.h>

namespace app::classes::SwarmNestEntity {
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, BindSwarm, app::SwarmNestEntity* this_ptr, app::SwarmEntity* swarm)
    IL2CPP_REGISTER_METHOD(0x01823990, void, Awake, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01823FF0, void, Update, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018240B0, void, SpawnSwarmAgent, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018243E0, void, ResetSwarmNest, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01824580, float, GetSwarmHealth, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01824670, void, StopIdleTimeline, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018246E0, void, StartIdleTimeline, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01824720, void, DestroyAtEndOfTimeline, app::SwarmNestEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01824810, void, ctor, app::SwarmNestEntity* this_ptr)
} // namespace app::classes::SwarmNestEntity
