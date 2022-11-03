#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::ExtendedPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x01FECBA0, void, ctor_1, (app::ExtendedPropertyDescriptor * this_ptr, app::ReflectPropertyDescriptor* extender_info, app::Type* receiver_type, app::IExtenderProvider* provider, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x01FECF60, void, ctor_2, (app::ExtendedPropertyDescriptor * this_ptr, app::PropertyDescriptor* extender, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x01FED0D0, bool, CanResetValue, (app::ExtendedPropertyDescriptor * this_ptr, app::Object* comp))
    IL2CPP_REGISTER_METHOD(0x01FED100, app::Type*, get_ComponentType, (app::ExtendedPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FED130, bool, get_IsReadOnly, (app::ExtendedPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FED270, app::Type*, get_PropertyType, (app::ExtendedPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FED2A0, app::String*, get_DisplayName, (app::ExtendedPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FED600, app::Object*, GetValue, (app::ExtendedPropertyDescriptor * this_ptr, app::Object* comp))
    IL2CPP_REGISTER_METHOD(0x01FED630, void, ResetValue, (app::ExtendedPropertyDescriptor * this_ptr, app::Object* comp))
    IL2CPP_REGISTER_METHOD(0x01FED670, void, SetValue, (app::ExtendedPropertyDescriptor * this_ptr, app::Object* component, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FED6B0, bool, ShouldSerializeValue, (app::ExtendedPropertyDescriptor * this_ptr, app::Object* comp))
} // namespace app::classes::System::ComponentModel::ExtendedPropertyDescriptor
