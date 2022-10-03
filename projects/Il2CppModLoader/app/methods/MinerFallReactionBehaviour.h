#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MinerFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x014497D0, void, StartTimeline, (app::MinerFallReactionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x01449A40, void, ResetTimeline, (app::MinerFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01449CA0, void, EndBehaviour, (app::MinerFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01449CC0, void, OnInitializeTask, (app::MinerFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterTask, (app::MinerFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01449D90, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01449DF0, void, OnExitTask, (app::MinerFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01449E00, void, ctor, (app::MinerFallReactionBehaviour * this_ptr))
} // namespace app::classes::MinerFallReactionBehaviour
