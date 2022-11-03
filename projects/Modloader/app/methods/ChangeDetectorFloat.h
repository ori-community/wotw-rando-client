#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ChangeDetectorFloat {
    IL2CPP_REGISTER_METHOD(0x010457E0, bool, CheckValueChanged, (app::ChangeDetectorFloat * this_ptr, float t))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ChangeDetectorFloat * this_ptr))
} // namespace app::classes::ChangeDetectorFloat
