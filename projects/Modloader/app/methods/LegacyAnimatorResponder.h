#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyAnimatorResponder.h>

namespace app::classes::LegacyAnimatorResponder {
    IL2CPP_REGISTER_METHOD(0x015CCAF0, void, OnEnable, (app::LegacyAnimatorResponder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CCC70, void, FixedUpdate, (app::LegacyAnimatorResponder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CD110, void, ctor, (app::LegacyAnimatorResponder * this_ptr))
} // namespace app::classes::LegacyAnimatorResponder
