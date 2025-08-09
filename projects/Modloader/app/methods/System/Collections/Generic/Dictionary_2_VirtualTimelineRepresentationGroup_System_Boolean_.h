#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(
        0x02DB99B0,
        bool,
        get_Item,
        app::Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_* this_ptr,
        app::VirtualTimelineRepresentationGroup__Enum key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_* this_ptr,
        app::VirtualTimelineRepresentationGroup__Enum key,
        bool value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_
