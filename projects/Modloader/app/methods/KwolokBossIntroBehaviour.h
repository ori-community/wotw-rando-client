#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossIntroBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::KwolokBossIntroBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::KwolokBossIntroBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E2320, void, OnEnter, (app::KwolokBossIntroBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E2570, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossIntroBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E25A0, void, OnExit, (app::KwolokBossIntroBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E2780, void, OnStartEscapeTrigger, (app::KwolokBossIntroBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E2820, void, ModifyMaxLookAtWeights, (app::KwolokBossIntroBehaviour * this_ptr, app::Vector2* weights))
    IL2CPP_REGISTER_METHOD(0x012E28D0, void, ctor, (app::KwolokBossIntroBehaviour * this_ptr))
} // namespace app::classes::KwolokBossIntroBehaviour
