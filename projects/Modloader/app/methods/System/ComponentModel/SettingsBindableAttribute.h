#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsBindableAttribute.h>

namespace app::classes::System::ComponentModel::SettingsBindableAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::SettingsBindableAttribute* this_ptr, bool bindable)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Bindable, app::SettingsBindableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029ACB20, bool, Equals, app::SettingsBindableAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01FDE3D0, int32_t, GetHashCode, app::SettingsBindableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029ACC10, void, cctor, )
} // namespace app::classes::System::ComponentModel::SettingsBindableAttribute
