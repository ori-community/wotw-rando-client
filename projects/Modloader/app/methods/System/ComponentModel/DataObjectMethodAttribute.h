#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataObjectMethodAttribute.h>
#include <Modloader/app/structs/DataObjectMethodType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::DataObjectMethodAttribute {
    IL2CPP_REGISTER_METHOD(0x01FDE850, void, ctor_1, (app::DataObjectMethodAttribute * this_ptr, app::DataObjectMethodType__Enum method_type))
    IL2CPP_REGISTER_METHOD(0x01FDE860, void, ctor_2, (app::DataObjectMethodAttribute * this_ptr, app::DataObjectMethodType__Enum method_type, bool is_default))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDefault, (app::DataObjectMethodAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::DataObjectMethodType__Enum, get_MethodType, (app::DataObjectMethodAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FDE870, bool, Equals, (app::DataObjectMethodAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE950, int32_t, GetHashCode, (app::DataObjectMethodAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FDE960, bool, Match, (app::DataObjectMethodAttribute * this_ptr, app::Object* obj))
} // namespace app::classes::System::ComponentModel::DataObjectMethodAttribute
