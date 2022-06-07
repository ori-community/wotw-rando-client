#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineMarkerRecord {
    IL2CPP_REGISTER_METHOD(0x01E8CB90, void, ctor, (app::TimelineMarkerRecord * this_ptr, app::EntityId id))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EntityId, get_Id, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConstrainedToEventId, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_ConstrainedToEventId, (app::TimelineMarkerRecord * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_EventId, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_StaticTime, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8CBB0, app::String *, get_Name, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_VolatilePreviewTime, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012219F0, void, set_VolatilePreviewTime, (app::TimelineMarkerRecord * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsConstrainable, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsDeletable, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::EntityId, get_ConstrainedTo, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ConstrainedTo, (app::TimelineMarkerRecord * this_ptr, app::EntityId value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_PreviewTime, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_PreviewTime, (app::TimelineMarkerRecord * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::EntityId, get_EntityToDrawOn, (app::TimelineMarkerRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_EntityToDrawOn, (app::TimelineMarkerRecord * this_ptr, app::EntityId value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasFinished, (app::TimelineMarkerRecord * this_ptr, int32_t event_id))
}
