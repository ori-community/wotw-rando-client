#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::SpiderBossBaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::SpiderBossLocationZone__Enum, GetForcedAnimationZone, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968770, void, OnEnter, (app::SpiderBossBaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009688C0, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossBaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00968910, void, OnExit, (app::SpiderBossBaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009689B0, void, InitializeCancellableController, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009689E0, bool, CanCancel, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968A10, void, InitializeHitReactionController, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968A40, bool, CanAccumulateHits, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968A70, bool, CanHitReact, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968AA0, float, get_BehaviourUtility, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968AC0, float, ComputeUtility, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968EC0, void, ctor, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_1, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_2, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_3, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_4, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_5, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_6, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_7, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_8, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_9, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_10, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_11, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_12, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_13, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_14, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_15, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_16, (app::SpiderBossBaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_17, (app::SpiderBossBaseBehaviour * this_ptr))
} // namespace app::classes::SpiderBossBaseBehaviour
