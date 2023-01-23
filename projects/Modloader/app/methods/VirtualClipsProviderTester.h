#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VirtualClipsProviderTester.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::VirtualClipsProviderTester {
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_InvalidateParentTimelineCache, (app::VirtualClipsProviderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_InvalidateParentTimelineCache, (app::VirtualClipsProviderTester * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, (app::VirtualClipsProviderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::VirtualClipsProviderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C65D0, app::String*, get_NameDisplayedOnClip, (app::VirtualClipsProviderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VirtualClipsProviderTester * this_ptr))
} // namespace app::classes::VirtualClipsProviderTester
