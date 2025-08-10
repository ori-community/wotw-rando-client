#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EntityPlaceholder.h>
#include <Modloader/app/structs/EntityPlaceholder__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions_State__Enum.h>

namespace app::classes::SpiderBossAttackCallMinions {
    IL2CPP_REGISTER_METHOD(0x00966940, app::EntityPlaceholder__Array*, get_Spawners, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00966A80, void, OnEntityInitialized, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00966C40, void, Start, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00966DE0, void, OnDestroy, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009670D0, void, OnRestoreCheckpoint, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00967180, void, FixedUpdate, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009673B0, app::EntityPlaceholder*, FindPlaceholderForSpawning, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009675E0, void, OnSpiderHealthReachedZero, app::SpiderBossAttackCallMinions* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x009677F0, void, OnEnter, app::SpiderBossAttackCallMinions* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00967B30, app::BehaviourStatus__Enum, OnExecute, app::SpiderBossAttackCallMinions* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00967B90, void, OnExit, app::SpiderBossAttackCallMinions* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00965930, void, InitializeCancellableController, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00967E90, void, ChangeState, app::SpiderBossAttackCallMinions* this_ptr, app::SpiderBossAttackCallMinions_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateState, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00965A10, void, OnEnterTransition, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterShootAndEnd, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00967ED0, void, OnTimelineEnded, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00967EF0, void, SpawnMinions, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968270, float, ComputeUtility, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968460, void, ResetAliveSpiderling, app::SpiderBossAttackCallMinions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009685F0, void, ctor, app::SpiderBossAttackCallMinions* this_ptr)
} // namespace app::classes::SpiderBossAttackCallMinions
