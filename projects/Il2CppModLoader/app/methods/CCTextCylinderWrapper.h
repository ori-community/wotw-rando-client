#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CCTextCylinderWrapper {
    IL2CPP_REGISTER_METHOD(0x03160D50, void, Modify, (app::CCTextCylinderWrapper * this_ptr, app::CCText * text))
    IL2CPP_REGISTER_METHOD(0x03160D70, void, WrapX, (app::CCTextCylinderWrapper * this_ptr, app::CCText * text))
    IL2CPP_REGISTER_METHOD(0x03161320, void, WrapY, (app::CCTextCylinderWrapper * this_ptr, app::CCText * text))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CCTextCylinderWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031618C0, void, cctor, ())
}
