#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SessionMask.h>
#include <Modloader/app/structs/SessionMask__Boxed.h>

namespace app::classes::System::Diagnostics::Tracing::SessionMask {
    IL2CPP_REGISTER_METHOD(0x00154CB0, void, ctor, app::SessionMask__Boxed* this_ptr, uint32_t mask)
    IL2CPP_REGISTER_METHOD(0x00154CC0, bool, IsEqualOrSupersetOf, app::SessionMask__Boxed* this_ptr, app::SessionMask m)
    IL2CPP_REGISTER_METHOD(0x00D51450, app::SessionMask, get_All, )
    IL2CPP_REGISTER_METHOD(0x01A076D0, app::SessionMask, FromId, int32_t per_event_source_session_id)
    IL2CPP_REGISTER_METHOD(0x00154CD0, uint64_t, ToEventKeywords, app::SessionMask__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A076E0, app::SessionMask, FromEventKeywords, uint64_t m)
    IL2CPP_REGISTER_METHOD(0x00154CE0, bool, get_Item, app::SessionMask__Boxed* this_ptr, int32_t per_event_source_session_id)
    IL2CPP_REGISTER_METHOD(0x00154D00, void, set_Item, app::SessionMask__Boxed* this_ptr, int32_t per_event_source_session_id, bool value)
    IL2CPP_REGISTER_METHOD(0x006CE970, uint64_t, op_Explicit_1, app::SessionMask m)
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, app::SessionMask m)
} // namespace app::classes::System::Diagnostics::Tracing::SessionMask
