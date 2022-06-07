#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::ManualResetEvent {
    IL2CPP_REGISTER_METHOD(0x027DE940, void, ctor, (app::ManualResetEvent * this_ptr, bool initial_state))
}
