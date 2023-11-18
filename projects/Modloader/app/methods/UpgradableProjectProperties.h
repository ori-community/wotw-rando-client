#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpgradableProjectProperties.h>

namespace app::classes::UpgradableProjectProperties {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpgradableProjectProperties * this_ptr))
}
