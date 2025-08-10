#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsoleCancelEventArgs.h>
#include <Modloader/app/structs/ConsoleSpecialKey__Enum.h>

namespace app::classes::System::ConsoleCancelEventArgs {
    IL2CPP_REGISTER_METHOD(0x02034910, void, ctor_1, app::ConsoleCancelEventArgs* this_ptr, app::ConsoleSpecialKey__Enum type)
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_Cancel, app::ConsoleCancelEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020349C0, void, ctor_2, app::ConsoleCancelEventArgs* this_ptr)
} // namespace app::classes::System::ConsoleCancelEventArgs
