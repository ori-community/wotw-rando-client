#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_DelayPromise {
    IL2CPP_REGISTER_METHOD(0x0233B230, void, ctor, (app::Task_DelayPromise * this_ptr, app::CancellationToken token))
    IL2CPP_REGISTER_METHOD(0x0233B3C0, void, Complete, (app::Task_DelayPromise * this_ptr))
}
