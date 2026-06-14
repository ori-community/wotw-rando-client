#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleFPSController.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleFPSController {
    IL2CPP_REGISTER_METHOD(0x0166AAA0, void, Awake, app::SimpleFPSController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166AB40, void, Update, app::SimpleFPSController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166B250, void, FixedUpdate, app::SimpleFPSController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166B740, bool, get_Grounded, app::SimpleFPSController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166BC10, void, ctor, app::SimpleFPSController* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleFPSController
