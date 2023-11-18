#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BerryCelebrationController.h>

namespace app::classes::BerryCelebrationController {
    IL2CPP_REGISTER_METHOD(0x00F9E1C0, void, OnNaruCollided, (app::BerryCelebrationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9E5B0, void, Update, (app::BerryCelebrationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::BerryCelebrationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9E770, void, OnBerryCelebrationAnimationEnd, (app::BerryCelebrationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9E900, void, ctor, (app::BerryCelebrationController * this_ptr))
} // namespace app::classes::BerryCelebrationController
