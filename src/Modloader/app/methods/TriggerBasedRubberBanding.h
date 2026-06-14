#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TriggerBasedRubberBanding.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TriggerBasedRubberBanding {
    IL2CPP_REGISTER_METHOD(0x00B125C0, bool, IsEnabled, app::TriggerBasedRubberBanding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B12750, float, GetValue, app::TriggerBasedRubberBanding* this_ptr, app::Vector3 origin, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TriggerBasedRubberBanding* this_ptr)
} // namespace app::classes::TriggerBasedRubberBanding
