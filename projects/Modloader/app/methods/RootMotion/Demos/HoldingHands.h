#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HoldingHands.h>

namespace app::classes::RootMotion::Demos::HoldingHands {
    IL2CPP_REGISTER_METHOD(0x0221FBC0, void, Start, (app::HoldingHands * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02220200, void, LateUpdate, (app::HoldingHands * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02220FC0, void, ctor, (app::HoldingHands * this_ptr))
} // namespace app::classes::RootMotion::Demos::HoldingHands
