#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UpgradeTowerAction {
    IL2CPP_REGISTER_METHOD(0x013AF580, void, Perform, (app::UpgradeTowerAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::UpgradeTowerAction * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::UpgradeTowerAction * this_ptr))
}
