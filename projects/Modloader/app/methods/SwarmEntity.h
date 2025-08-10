#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/List_1_SwarmAgent_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SwarmAgent.h>
#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/SwarmNestEntity.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SwarmEntity {
    IL2CPP_REGISTER_METHOD(0x018191D0, bool, IsAggro, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018194B0, bool, CanMiniGun, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01819820, bool, ShouldAttack, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018198C0, bool, SeeOriInRange, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01819C50, bool, InNestRange, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F189C0, app::List_1_SwarmAgent_*, get_SwarmAgents, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01819E80, app::Transform*, get_GetFirstLiveAgent, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01819FE0, void, Start, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181A310, void, OnEnable, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181A770, void, OnDisable, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181A960, void, OnUpdate, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181AA20, void, OnSuspended, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181AA30, void, OnResumed, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181AA40, void, AddPatrolNodes, app::SwarmEntity* this_ptr, app::List_1_UnityEngine_Vector3_* nodes)
    IL2CPP_REGISTER_METHOD(0x0181AB20, void, InitiateSwarmCount, app::SwarmEntity* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0181AD70, void, CreateAndAssignAgents, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181B2D0, void, RandomizeAgentsVisuals, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181B410, void, SetAfterAttackTarget, app::SwarmEntity* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0181B7B0, void, CreateAgent, app::SwarmEntity* this_ptr, app::Transform* target_transform)
    IL2CPP_REGISTER_METHOD(0x0181BBF0, void, UpdateAgents, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181BE80, void, RegroupAgents, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181C370, void, SetDamageDealerValue, app::SwarmEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0181C4E0, void, EnableSpin, app::SwarmEntity* this_ptr, bool enable)
    IL2CPP_REGISTER_METHOD(0x0181C770, void, RandomizeTargets, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181CA10, void, ForceKillAgent, app::SwarmEntity* this_ptr, app::SwarmAgent* agent)
    IL2CPP_REGISTER_METHOD(0x0181CA30, bool, TryKillAgent, app::SwarmEntity* this_ptr, app::SwarmAgent* agent, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x0181D440, void, KillAgent, app::SwarmEntity* this_ptr, app::SwarmAgent* agent)
    IL2CPP_REGISTER_METHOD(0x0181D6E0, void, HideAgents, app::SwarmEntity* this_ptr, bool hide)
    IL2CPP_REGISTER_METHOD(0x0181D8E0, void, AgentDisappearedAfterDeath, app::SwarmEntity* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x0181DB40, void, AddAgent, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181DB60, void, UnlockKillingAgents, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181DBF0, app::SwarmAgent*, GetKilledAgent, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181DE30, void, DisableDamageRecieverEffects, app::SwarmEntity* this_ptr, bool disable)
    IL2CPP_REGISTER_METHOD(0x0181DFD0, void, EnableAfterAttackTargetSpin, app::SwarmEntity* this_ptr, float spin_step)
    IL2CPP_REGISTER_METHOD(0x0181E230, void, DisableAfterAttackTargetSpin, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181E480, void, ResetTargetsIndexes, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181E6C0, void, ResetAllTargetsIndexes, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181EAD0, app::Transform*, GetNextTarget, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181EDA0, app::Transform*, GetDefaultTarget, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181F070, void, SwapAllowedAreas, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181F660, void, DisableAfterAttackTargetFollow, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181F830, void, BindNest, app::SwarmEntity* this_ptr, app::SwarmNestEntity* swarm_nest)
    IL2CPP_REGISTER_METHOD(0x0181F840, app::Vector3, GetNestPosition, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181F9F0, bool, IsAnyAgentAlive, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0181FB00, void, ResetEntity, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01215B60, void, OnPostRestoreCheckpoint, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018201B0, void, PlayHitTimeline, app::SwarmEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018202A0, void, ctor, app::SwarmEntity* this_ptr)
} // namespace app::classes::SwarmEntity
