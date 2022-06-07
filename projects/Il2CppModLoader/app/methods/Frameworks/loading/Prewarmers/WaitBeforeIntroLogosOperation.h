#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::WaitBeforeIntroLogosOperation {
    IL2CPP_REGISTER_METHOD(0x00F62B80, void, ctor, (app::WaitBeforeIntroLogosOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62C30, bool, Update, (app::WaitBeforeIntroLogosOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62D10, bool, FinishImmediately, (app::WaitBeforeIntroLogosOperation * this_ptr))
}
