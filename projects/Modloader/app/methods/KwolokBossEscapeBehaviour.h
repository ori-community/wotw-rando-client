#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossEscapeBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::KwolokBossEscapeBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::KwolokBossEscapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012DECB0, void, OnEnter, (app::KwolokBossEscapeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012DF160, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossEscapeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012DF640, void, OnExit, (app::KwolokBossEscapeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012DF830, void, UpdateResetDamageDealers, (app::KwolokBossEscapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012DF8A0, void, SetSpeedToAnimations, (app::KwolokBossEscapeBehaviour * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x012DFA00, void, OnEscapeTimelineEnded, (app::KwolokBossEscapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047695B8, KwolokBossEscapeBehaviour_OnEscapeTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012DFAA0, void, DisableDamageDealers, (app::KwolokBossEscapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012DFD60, void, ResetDamageDealers, (app::KwolokBossEscapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012DFE70, void, ModifyMaxLookAtWeights, (app::KwolokBossEscapeBehaviour * this_ptr, app::Vector2* weights))
    IL2CPP_REGISTER_METHOD(0x012DFF20, void, ctor, (app::KwolokBossEscapeBehaviour * this_ptr))
} // namespace app::classes::KwolokBossEscapeBehaviour
