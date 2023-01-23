#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TriggerBasedRubberBandingSet.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TriggerBasedRubberBandingSet {
    IL2CPP_REGISTER_METHOD(0x00B127A0, bool, IsEnabled, (app::TriggerBasedRubberBandingSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B12930, float, GetValue, (app::TriggerBasedRubberBandingSet * this_ptr, app::Vector3 origin, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TriggerBasedRubberBandingSet * this_ptr))
} // namespace app::classes::TriggerBasedRubberBandingSet
