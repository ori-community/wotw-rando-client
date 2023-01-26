#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BodyTilt.h>

namespace app::classes::RootMotion::FinalIK::BodyTilt {
    IL2CPP_REGISTER_METHOD(0x02051260, void, Start, (app::BodyTilt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020512F0, void, OnModifyOffset, (app::BodyTilt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020517A0, void, ctor, (app::BodyTilt * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::BodyTilt
