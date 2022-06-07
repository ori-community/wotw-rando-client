#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Frapser {
    IL2CPP_REGISTER_METHOD(0x01645D10, bool, IsFrapserActive, ())
    IL2CPP_REGISTER_METHOD(0x01646050, void, StopFrapser, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Frapser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01646240, void, cctor, ())
}
