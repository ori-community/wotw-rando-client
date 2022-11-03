#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::ComplexBindingPropertiesAttribute {
    IL2CPP_REGISTER_METHOD(0x00B70200, void, ctor_1, (app::ComplexBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B701E0, void, ctor_2, (app::ComplexBindingPropertiesAttribute * this_ptr, app::String* data_source))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_3, (app::ComplexBindingPropertiesAttribute * this_ptr, app::String* data_source, app::String* data_member))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DataSource, (app::ComplexBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DataMember, (app::ComplexBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A8A20, bool, Equals, (app::ComplexBindingPropertiesAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::ComplexBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A8B40, void, cctor, ())
} // namespace app::classes::System::ComponentModel::ComplexBindingPropertiesAttribute
