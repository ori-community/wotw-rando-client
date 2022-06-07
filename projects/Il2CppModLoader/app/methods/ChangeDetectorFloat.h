#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ChangeDetectorFloat {
    IL2CPP_REGISTER_METHOD(0x010457E0, bool, CheckValueChanged, (app::ChangeDetectorFloat * this_ptr, float t))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ChangeDetectorFloat * this_ptr))
}
