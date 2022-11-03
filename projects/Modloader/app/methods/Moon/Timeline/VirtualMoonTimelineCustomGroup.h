#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::VirtualMoonTimelineCustomGroup {
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::VirtualTimelineRepresentationGroup__Enum, get_Group, (app::VirtualMoonTimelineCustomGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_Group, (app::VirtualMoonTimelineCustomGroup * this_ptr, app::VirtualTimelineRepresentationGroup__Enum value))
    IL2CPP_REGISTER_METHOD(0x01E92890, void, ctor, (app::VirtualMoonTimelineCustomGroup * this_ptr, app::VirtualTimelineRepresentationGroup__Enum group))
} // namespace app::classes::Moon::Timeline::VirtualMoonTimelineCustomGroup
