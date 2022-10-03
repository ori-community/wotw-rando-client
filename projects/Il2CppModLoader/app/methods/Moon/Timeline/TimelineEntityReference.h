#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::TimelineEntityReference {
    IL2CPP_REGISTER_METHOD(0x01E87760, app::ITimelineEntity*, ResolveReference, (app::TimelineEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MonoBehaviour*, GetBackingField, (app::TimelineEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetBackingField, (app::TimelineEntityReference * this_ptr, app::MonoBehaviour* obj))
    IL2CPP_REGISTER_METHOD(0x01E877E0, bool, CanResolve, (app::TimelineEntityReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimelineEntityReference * this_ptr))
} // namespace app::classes::Moon::Timeline::TimelineEntityReference
