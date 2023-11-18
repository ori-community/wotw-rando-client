#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TheGiftSetupController.h>

namespace app::classes::TheGiftSetupController {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::TheGiftSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ECED0, void, OnNaruCollided, (app::TheGiftSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (app::TheGiftSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ED390, void, OnFindSeinAnimationEnd, (app::TheGiftSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TheGiftSetupController * this_ptr))
} // namespace app::classes::TheGiftSetupController
