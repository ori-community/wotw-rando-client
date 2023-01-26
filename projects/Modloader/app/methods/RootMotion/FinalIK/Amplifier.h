#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Amplifier.h>

namespace app::classes::RootMotion::FinalIK::Amplifier {
    IL2CPP_REGISTER_METHOD(0x0204E290, void, OnModifyOffset, (app::Amplifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::Amplifier * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Amplifier
