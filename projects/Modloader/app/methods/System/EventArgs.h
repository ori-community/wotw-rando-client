#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventArgs.h>

namespace app::classes::System::EventArgs {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1AE80, void, cctor, ())
} // namespace app::classes::System::EventArgs
