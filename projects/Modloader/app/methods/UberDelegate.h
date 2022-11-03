#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberDelegate {
    IL2CPP_REGISTER_METHOD(0x013E5FA0, void, Clear, (app::UberDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E6080, void, Add, (app::UberDelegate * this_ptr, app::Action* act))
    IL2CPP_REGISTER_METHOD(0x013E6200, void, Print, (app::UberDelegate * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x013E63F0, void, Call, (app::UberDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E6870, void, Remove, (app::UberDelegate * this_ptr, app::Action* act))
    IL2CPP_REGISTER_METHOD(0x013E6960, void, ctor, (app::UberDelegate * this_ptr))
} // namespace app::classes::UberDelegate
