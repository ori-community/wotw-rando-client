#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventProvider_c_DisplayClass44_0.h>

namespace app::classes::System::Diagnostics::Tracing::EventProvider___c__DisplayClass44_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EventProvider_c_DisplayClass44_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x017515D0,
        void,
        _GetSessions_b__0,
        app::EventProvider_c_DisplayClass44_0* this_ptr,
        int32_t etw_session_id,
        int64_t match_all_keywords
    )
} // namespace app::classes::System::Diagnostics::Tracing::EventProvider___c__DisplayClass44_0
