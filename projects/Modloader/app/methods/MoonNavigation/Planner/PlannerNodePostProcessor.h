#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonNavigation::Planner::PlannerNodePostProcessor {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, Initialize, (app::PlannerNodePostProcessor * this_ptr, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x008B8240, void, ctor, (app::PlannerNodePostProcessor * this_ptr))
} // namespace app::classes::MoonNavigation::Planner::PlannerNodePostProcessor
