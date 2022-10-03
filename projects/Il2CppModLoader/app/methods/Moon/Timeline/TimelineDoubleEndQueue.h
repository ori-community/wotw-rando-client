#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::TimelineDoubleEndQueue {
    IL2CPP_REGISTER_METHOD(0x01E84340, int32_t, get_Count, (app::TimelineDoubleEndQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E843E0, app::Reaction, Dequeue, (app::TimelineDoubleEndQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E84660, void, Enqueue, (app::TimelineDoubleEndQueue * this_ptr, app::Reaction reaction))
    IL2CPP_REGISTER_METHOD(0x01E848C0, void, Clear, (app::TimelineDoubleEndQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E849A0, bool, IsPlannedToStop, (app::TimelineDoubleEndQueue * this_ptr, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01E84BC0, bool, HasAnythingButStops, (app::TimelineDoubleEndQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E84EF0, void, ctor, (app::TimelineDoubleEndQueue * this_ptr))
} // namespace app::classes::Moon::Timeline::TimelineDoubleEndQueue
