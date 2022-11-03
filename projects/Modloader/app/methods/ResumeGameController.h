#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ResumeGameController {
    IL2CPP_REGISTER_METHOD(0x0090DD60, void, PCFixedUpdate, (app::ResumeGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090DFB0, void, FixedUpdate, (app::ResumeGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090E1B0, void, Hide, (app::ResumeGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090E380, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ResumeGameController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::ResumeGameController
