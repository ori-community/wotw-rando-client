#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ShardTraderEntity.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::ShardTraderEntity {
    IL2CPP_REGISTER_METHOD(0x005AC370, app::String*, get_DialogActorName, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC3F0, app::String*, get_InteractionActorName, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00416EB0, app::MoonAnimation*, get_OpenShopAnimation, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC470, app::MoonAnimation*, get_OpenShopLoopAnimation, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC4E0, void, OnEnable, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC590, void, OnDisable, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC640, void, OnUpdate, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC740, void, OnInteractionStart, (app::ShardTraderEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x005AC820, void, UpdateConditionalStock, (app::ShardTraderEntity * this_ptr, app::ShardTraderEntity* trader_n_p_c))
    IL2CPP_REGISTER_METHOD(0x005ACE80, void, Apply, (app::ShardTraderEntity * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005ACE90, app::IUberState__Array*, get_AffectingUberStates, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005ACEA0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AD060, bool, get_CanEffectivelyStartInteraction, (app::ShardTraderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AD180, void, ctor, (app::ShardTraderEntity * this_ptr))
} // namespace app::classes::ShardTraderEntity
