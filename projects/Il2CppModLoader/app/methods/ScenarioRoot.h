#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ScenarioRoot {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InvalidateParentTimelineCache, (app::ScenarioRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InvalidateParentTimelineCache, (app::ScenarioRoot * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AddChildren, (app::ScenarioRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93870, app::MoonTimeline*, get_RootTimeline, (app::ScenarioRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93940, void, CreateTimelineParentEntity, (app::ScenarioRoot * this_ptr, app::VirtualClipsBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x01E93A00, app::List_1_ITimelineParentOwner_*, GetOutsideOwners, (app::ScenarioRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93CD0, app::ITimelineParentOwner*, CollectOwner, (app::ScenarioRoot * this_ptr, app::Transform* current_external))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScenarioRoot * this_ptr))
} // namespace app::classes::ScenarioRoot
