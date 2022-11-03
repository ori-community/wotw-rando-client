#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::StateOverrideSystem_UberStateOverride {
    IL2CPP_REGISTER_METHOD(0x00249990, void, ApplyDynamic, (app::StateOverrideSystem_UberStateOverride__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002499A0, void, ApplyStatic, (app::StateOverrideSystem_UberStateOverride__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00249A90, bool, get_IsValid, (app::StateOverrideSystem_UberStateOverride__Boxed * this_ptr))
} // namespace app::classes::StateOverrideSystem_UberStateOverride
