#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::ExternalTimelineRecord {
    IL2CPP_REGISTER_METHOD(0x01BBF7A0, void, ctor, (app::ExternalTimelineRecord * this_ptr, app::EntityId id))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EntityId, get_Id, (app::ExternalTimelineRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MoonReference_1_Moon_Timeline_ITimelineEntity_*, get_Entity, (app::ExternalTimelineRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBF900, bool, HasFinished, (app::ExternalTimelineRecord * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHODINFO(0x04733668, ExternalTimelineRecord_HasFinished__MethodInfo)
} // namespace app::classes::Moon::Timeline::ExternalTimelineRecord
