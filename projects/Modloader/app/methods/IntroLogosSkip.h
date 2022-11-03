#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IntroLogosSkip {
    IL2CPP_REGISTER_METHOD(0x0063E920, void, Update, (app::IntroLogosSkip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063EA20, void, SkipLogos, (app::IntroLogosSkip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IntroLogosSkip * this_ptr))
} // namespace app::classes::IntroLogosSkip
