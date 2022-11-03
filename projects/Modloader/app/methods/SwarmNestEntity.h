#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SwarmNestEntity {
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, BindSwarm, (app::SwarmNestEntity * this_ptr, app::SwarmEntity* swarm))
    IL2CPP_REGISTER_METHOD(0x01823990, void, Awake, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01823FF0, void, Update, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018240B0, void, SpawnSwarmAgent, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018243E0, void, ResetSwarmNest, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01824580, float, GetSwarmHealth, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01824670, void, StopIdleTimeline, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047984A0, SwarmNestEntity_StopIdleTimeline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018246E0, void, StartIdleTimeline, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C150, SwarmNestEntity_StartIdleTimeline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01824720, void, DestroyAtEndOfTimeline, (app::SwarmNestEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F7A0, SwarmNestEntity_DestroyAtEndOfTimeline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01824810, void, ctor, (app::SwarmNestEntity * this_ptr))
} // namespace app::classes::SwarmNestEntity
