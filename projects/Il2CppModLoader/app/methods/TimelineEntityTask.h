#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimelineEntityTask {
    IL2CPP_REGISTER_METHOD(0x010F6E20, void, OnEnterTask, (app::TimelineEntityTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x010F6E60, app::BehaviourStatus__Enum, OnExecuteTask, (app::TimelineEntityTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F1E070, void, OnExitTask, (app::TimelineEntityTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, ShouldPauseLocomotion, (app::TimelineEntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F6E90, void, ctor, (app::TimelineEntityTask * this_ptr))
}
