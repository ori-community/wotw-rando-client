#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NearSeinTrigger.h>

namespace app::classes::NearSeinTrigger {
    IL2CPP_REGISTER_METHOD(0x0088A570, void, ProvideComponents, app::NearSeinTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0088A570, void, Start, app::NearSeinTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0088A650, void, FixedUpdate, app::NearSeinTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0088ACF0, void, ctor, app::NearSeinTrigger* this_ptr)
} // namespace app::classes::NearSeinTrigger
