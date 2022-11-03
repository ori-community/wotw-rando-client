#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ChangeDetectorString {
    IL2CPP_REGISTER_METHOD(0x01045800, bool, CheckValueChanged, (app::ChangeDetectorString * this_ptr, app::String* t))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ChangeDetectorString * this_ptr))
} // namespace app::classes::ChangeDetectorString
