#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CCTextTorusWrapper {
    IL2CPP_REGISTER_METHOD(0x03162340, void, Modify, (app::CCTextTorusWrapper * this_ptr, app::CCText* text))
    IL2CPP_REGISTER_METHOD(0x03162360, void, RevolveX, (app::CCTextTorusWrapper * this_ptr, app::CCText* text))
    IL2CPP_REGISTER_METHOD(0x031627C0, void, RevolveY, (app::CCTextTorusWrapper * this_ptr, app::CCText* text))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CCTextTorusWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03162C20, void, cctor, ())
} // namespace app::classes::CCTextTorusWrapper
