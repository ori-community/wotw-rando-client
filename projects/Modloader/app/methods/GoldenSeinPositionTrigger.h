#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GoldenSeinPositionTrigger.h>

namespace app::classes::GoldenSeinPositionTrigger {
    IL2CPP_REGISTER_METHOD(0x01078E90, void, FixedUpdate, app::GoldenSeinPositionTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GoldenSeinPositionTrigger* this_ptr)
} // namespace app::classes::GoldenSeinPositionTrigger
