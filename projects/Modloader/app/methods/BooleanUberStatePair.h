#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BooleanUberStatePair.h>

namespace app::classes::BooleanUberStatePair {
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_EffectiveValue, app::BooleanUberStatePair* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BooleanUberStatePair* this_ptr)
} // namespace app::classes::BooleanUberStatePair
