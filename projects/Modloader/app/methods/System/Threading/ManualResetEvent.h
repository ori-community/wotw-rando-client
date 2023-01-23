#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ManualResetEvent.h>

namespace app::classes::System::Threading::ManualResetEvent {
    IL2CPP_REGISTER_METHOD(0x027DE940, void, ctor, (app::ManualResetEvent * this_ptr, bool initial_state))
}
