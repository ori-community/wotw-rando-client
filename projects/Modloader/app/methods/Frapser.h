#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Frapser {
    IL2CPP_REGISTER_METHOD(0x01645D10, bool, IsFrapserActive, ())
    IL2CPP_REGISTER_METHOD(0x01646050, void, StopFrapser, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Frapser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01646240, void, cctor, ())
} // namespace app::classes::Frapser
