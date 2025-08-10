#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMontageEventContext.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinSpiritShardsSpell.h>
#include <Modloader/app/structs/SeinSpiritShardsSpell_State__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinSpiritShardsSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6B020, app::Type*, get_AnimationMontageEventType, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6B0C0, bool, get_CanAfford, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6B100, bool, get_CanAffordCharged, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6B140, void, OnSetReferenceToSein, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, KeepFlurryAnimationPlaying, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6B170, void, Start, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6B230, void, OnDestroy, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A6B310,
        void,
        OnAnimationMontageEventStart,
        app::SeinSpiritShardsSpell* this_ptr,
        int32_t event_id,
        app::AnimationMontageEventContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnAnimationMontageEventStay,
        app::SeinSpiritShardsSpell* this_ptr,
        int32_t event_id,
        app::AnimationMontageEventContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnAnimationMontageEventEnd,
        app::SeinSpiritShardsSpell* this_ptr,
        int32_t event_id,
        app::AnimationMontageEventContext context
    )
    IL2CPP_REGISTER_METHOD(0x00A6B340, void, EnterState, app::SeinSpiritShardsSpell* this_ptr, app::SeinSpiritShardsSpell_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00A6BE00, void, UpdateStateNormal, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6C1E0, void, UpdateStateCharging, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6C280, void, UpdateStateCharged, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6C2F0, bool, get_IsStatePerforming, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6C300, void, UpdateCharacterState, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6C570, void, PlayMontage, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DEF20, void, OnCurrentMontageStopped, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6C7D0, void, SpawnShards, app::SeinSpiritShardsSpell* this_ptr, bool charged_shot)
    IL2CPP_REGISTER_METHOD(0x00A6CAD0, void, SpawnShard, app::SeinSpiritShardsSpell* this_ptr, app::Vector3 direction, bool charged_shot)
    IL2CPP_REGISTER_METHOD(0x00A6CFE0, bool, ShouldDealDamage, app::SeinSpiritShardsSpell* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x00A6D0A0, int32_t, GetShardsCount, app::SeinSpiritShardsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A6D190, void, ctor, app::SeinSpiritShardsSpell* this_ptr)
} // namespace app::classes::SeinSpiritShardsSpell
