#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerHoldingTorchUberStateCondition.h>

namespace app::classes::PlayerHoldingTorchUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x0140FBD0, bool, get_HoldingTorch, app::PlayerHoldingTorchUberStateCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140FC80, void, ctor, app::PlayerHoldingTorchUberStateCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140FDA0, bool, Validate, app::PlayerHoldingTorchUberStateCondition* this_ptr)
} // namespace app::classes::PlayerHoldingTorchUberStateCondition
