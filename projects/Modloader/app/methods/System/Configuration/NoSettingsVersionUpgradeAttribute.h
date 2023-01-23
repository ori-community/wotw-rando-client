#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NoSettingsVersionUpgradeAttribute.h>

namespace app::classes::System::Configuration::NoSettingsVersionUpgradeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NoSettingsVersionUpgradeAttribute * this_ptr))
}
