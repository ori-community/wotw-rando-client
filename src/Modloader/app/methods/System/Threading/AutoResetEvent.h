#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AutoResetEvent.h>

namespace app::classes::System::Threading::AutoResetEvent {
    IL2CPP_REGISTER_METHOD(0x027D8430, void, ctor, app::AutoResetEvent* this_ptr, bool initial_state)
}
