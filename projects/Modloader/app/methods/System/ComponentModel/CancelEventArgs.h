#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CancelEventArgs.h>

namespace app::classes::System::ComponentModel::CancelEventArgs {
    IL2CPP_REGISTER_METHOD(0x024A5EC0, void, ctor_1, (app::CancelEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A5F60, void, ctor_2, (app::CancelEventArgs * this_ptr, bool cancel))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Cancel, (app::CancelEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Cancel, (app::CancelEventArgs * this_ptr, bool value))
} // namespace app::classes::System::ComponentModel::CancelEventArgs
