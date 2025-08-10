#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpinWait__Boxed.h>

namespace app::classes::System::Threading::SpinWait {
    IL2CPP_REGISTER_METHOD(0x001E6BB0, bool, get_NextSpinWillYield, app::SpinWait__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E6BE0, void, SpinOnce, app::SpinWait__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001267F0, void, Reset, app::SpinWait__Boxed* this_ptr)
} // namespace app::classes::System::Threading::SpinWait
