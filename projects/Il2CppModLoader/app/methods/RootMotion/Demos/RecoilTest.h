#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::RecoilTest {
    IL2CPP_REGISTER_METHOD(0x0222EC30, void, Start, (app::RecoilTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222ECC0, void, Update, (app::RecoilTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222ED80, void, OnGUI, (app::RecoilTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::RecoilTest * this_ptr))
}
