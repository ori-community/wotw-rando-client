#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/TimelineHelper_EverythingConstrainedTo_d_28.h>

namespace app::classes::Moon::Timeline::TimelineHelper__EverythingConstrainedTo_d__28 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x01E8C410, void, IDisposable_Dispose, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E8C450, bool, MoveNext, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E8C610, void, __m__Finally1, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::TimelineEntityRecord*,
        IEnumerator_TimelineEntityRecord__get_Current,
        app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01E8C6A0, void, IEnumerator_Reset, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E8C6F0,
        app::IEnumerator_1_Moon_Timeline_TimelineEntityRecord_*,
        IEnumerable_TimelineEntityRecord__GetEnumerator,
        app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01E8C8E0, app::IEnumerator*, IEnumerable_GetEnumerator, app::TimelineHelper_EverythingConstrainedTo_d_28* this_ptr)
} // namespace app::classes::Moon::Timeline::TimelineHelper__EverythingConstrainedTo_d__28
