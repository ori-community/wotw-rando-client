#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingAttribute.h>

namespace app::classes::System::Configuration::SettingAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SettingAttribute* this_ptr)
}
