#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventProvider_SessionInfo__Boxed.h>

namespace app::classes::System::Diagnostics::Tracing::EventProvider_SessionInfo {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::EventProvider_SessionInfo__Boxed * this_ptr, int32_t session_id_bit_, int32_t etw_session_id_))
}
