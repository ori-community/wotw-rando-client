#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StaticEventDescriptor.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Timeline::StaticEventDescriptor {
    IL2CPP_REGISTER_METHOD(
        0x01E83110,
        void,
        ctor,
        app::StaticEventDescriptor* this_ptr,
        int32_t event_id,
        float static_time,
        app::String* name,
        bool is_constrainable,
        bool is_deletable
    )
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_EventId, app::StaticEventDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStatic, app::StaticEventDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_StaticTime, app::StaticEventDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, app::StaticEventDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_VolatilePreviewTime, app::StaticEventDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64050, void, set_VolatilePreviewTime, app::StaticEventDescriptor* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_IsConstrainable, app::StaticEventDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0185DFF0, bool, get_IsDeletable, app::StaticEventDescriptor* this_ptr)
} // namespace app::classes::Moon::Timeline::StaticEventDescriptor
