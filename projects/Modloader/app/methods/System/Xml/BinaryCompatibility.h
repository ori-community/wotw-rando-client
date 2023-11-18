#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::BinaryCompatibility {
    IL2CPP_REGISTER_METHOD(0x021E7500, bool, get_TargetsAtLeast_Desktop_V4_5_2, ())
    IL2CPP_REGISTER_METHOD(0x021E75A0, bool, RunningOnCheck, (app::String * property_name))
    IL2CPP_REGISTER_METHOD(0x021E7790, void, cctor, ())
} // namespace app::classes::System::Xml::BinaryCompatibility
