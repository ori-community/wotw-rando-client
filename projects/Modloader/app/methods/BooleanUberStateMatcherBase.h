#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BooleanUberStateMatcherBase.h>
#include <Modloader/app/structs/IUberState.h>

namespace app::classes::BooleanUberStateMatcherBase {
    IL2CPP_REGISTER_METHOD(0x01B56460, int32_t, Resolve, (app::BooleanUberStateMatcherBase * this_ptr, app::IUberState* descriptor))
    IL2CPP_REGISTER_METHOD(0x01B56650, void, ctor, (app::BooleanUberStateMatcherBase * this_ptr))
} // namespace app::classes::BooleanUberStateMatcherBase
