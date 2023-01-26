#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MudkisserDeathReactionBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::MudkisserDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00872D40, void, OnInitializeTask, (app::MudkisserDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00872EC0, void, StartDeathTimeline, (app::MudkisserDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008730E0, void, TimelineFinished, (app::MudkisserDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00873100, void, OnEnterTask, (app::MudkisserDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008732C0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MudkisserDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::MudkisserDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00873980, void, ctor, (app::MudkisserDeathReactionBehaviour * this_ptr))
} // namespace app::classes::MudkisserDeathReactionBehaviour
