#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MudkisserFallReactionBehaviour.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::MudkisserFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00873B70, void, AllowCancel, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00873B80, void, DisallowCancel, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00873B90, void, StartTimeline, (app::MudkisserFallReactionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x00874120, void, ResetTimeline, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00874610, void, EndBehaviour, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00874940, void, OnInitializeTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00874B00, void, OnEnterTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00874E70, void, GotHit, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00874EF0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00875720, bool, ShouldPauseLocomotion, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875730, void, OnExitTask, (app::MudkisserFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00875740, void, ctor, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875770, void, _OnEnterTask_b__24_0, (app::MudkisserFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875770, void, _OnEnterTask_b__24_1, (app::MudkisserFallReactionBehaviour * this_ptr))
} // namespace app::classes::MudkisserFallReactionBehaviour
