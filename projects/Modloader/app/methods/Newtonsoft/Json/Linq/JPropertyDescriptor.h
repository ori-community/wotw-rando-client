#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Linq::JPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x01F0E5C0, void, ctor, (app::JPropertyDescriptor * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (app::JPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x01F0E5D0, app::Object*, GetValue, (app::JPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (app::JPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x01F0E6D0, void, SetValue, (app::JPropertyDescriptor * this_ptr, app::Object* component, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (app::JPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x01F0E900, app::Type*, get_ComponentType, (app::JPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::JPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0E9A0, app::Type*, get_PropertyType, (app::JPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NameHashCode, (app::JPropertyDescriptor * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Linq::JPropertyDescriptor
