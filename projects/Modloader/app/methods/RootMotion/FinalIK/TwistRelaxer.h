#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TwistRelaxer.h>

namespace app::classes::RootMotion::FinalIK::TwistRelaxer {
    IL2CPP_REGISTER_METHOD(0x02A282A0, void, Relax, (app::TwistRelaxer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A28C70, void, Start, (app::TwistRelaxer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A28F80, void, LateUpdate, (app::TwistRelaxer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A28F90, void, ctor, (app::TwistRelaxer * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::TwistRelaxer
