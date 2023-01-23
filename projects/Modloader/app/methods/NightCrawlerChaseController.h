#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/NightCrawlerChaseController.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::NightCrawlerChaseController {
    IL2CPP_REGISTER_METHOD(0x00601A30, app::Vector3, get_KnockbackForceDirection, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InvalidateParentTimelineCache, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InvalidateParentTimelineCache, (app::NightCrawlerChaseController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00601C70, void, OnEnable, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00602470, void, OnDisable, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00602C60, void, Start, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00602DD0, void, OnRestoreCheckpoint, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796458, NightCrawlerChaseController_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006030B0, void, Update, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603130, void, FixedUpdate, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006032E0, void, OnPushOri, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047602B8, NightCrawlerChaseController_OnPushOri__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006033B0, void, OnChaseStart, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747CF0, NightCrawlerChaseController_OnChaseStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006033F0, void, GetTorch, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047789E0, NightCrawlerChaseController_GetTorch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006036E0, void, TriggerKillPlayer, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780DD0, NightCrawlerChaseController_TriggerKillPlayer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00603A50, void, OnPlayAnimation, (app::NightCrawlerChaseController * this_ptr, app::IAnimation* moon_animation, app::ActiveAnimationHandle active_animation, int32_t prio, app::Func_1_Boolean_* continue_condition))
    IL2CPP_REGISTER_METHODINFO(0x04763BE8, NightCrawlerChaseController_OnPlayAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::NightCrawlerChaseController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x006030B0, void, UpdateState, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshAnimationPlayers, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_1, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_2, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_3, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_4, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_5, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_6, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_7, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_8, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_9, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_10, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_11, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_12, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_13, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_14, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_15, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_16, (app::NightCrawlerChaseController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IMoonTypeResolver*, GetResolverForType_17, (app::NightCrawlerChaseController * this_ptr))
} // namespace app::classes::NightCrawlerChaseController
