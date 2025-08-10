#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RefreshPropertiesAttribute.h>
#include <Modloader/app/structs/RefreshProperties__Enum.h>

namespace app::classes::System::ComponentModel::RefreshPropertiesAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::RefreshPropertiesAttribute* this_ptr, app::RefreshProperties__Enum refresh)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::RefreshProperties__Enum, get_RefreshProperties, app::RefreshPropertiesAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029ABD40, bool, Equals, app::RefreshPropertiesAttribute* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, app::RefreshPropertiesAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029ABE20, bool, IsDefaultAttribute, app::RefreshPropertiesAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029ABEE0, void, cctor, )
} // namespace app::classes::System::ComponentModel::RefreshPropertiesAttribute
