#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::ProvidePropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x029989E0, void, ctor_1, (app::ProvidePropertyAttribute * this_ptr, app::String * property_name, app::Type * receiver_type))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::ProvidePropertyAttribute * this_ptr, app::String * property_name, app::String * receiver_type_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_PropertyName, (app::ProvidePropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_ReceiverTypeName, (app::ProvidePropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998A20, app::Object *, get_TypeId, (app::ProvidePropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998A70, bool, Equals, (app::ProvidePropertyAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FE67F0, int32_t, GetHashCode, (app::ProvidePropertyAttribute * this_ptr))
}
