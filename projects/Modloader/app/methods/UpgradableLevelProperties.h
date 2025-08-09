#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpgradableLevelProperties.h>

namespace app::classes::UpgradableLevelProperties {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpgradableLevelProperties* this_ptr)
}
