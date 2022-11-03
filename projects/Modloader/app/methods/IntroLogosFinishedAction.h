#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IntroLogosFinishedAction {
    IL2CPP_REGISTER_METHOD(0x0063E8E0, void, Perform, (app::IntroLogosFinishedAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::IntroLogosFinishedAction * this_ptr))
} // namespace app::classes::IntroLogosFinishedAction
