#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::AttributeProviderAttribute {
    IL2CPP_REGISTER_METHOD(0x024A26C0, void, ctor_1, (app::AttributeProviderAttribute * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHODINFO(0x04730AB0, AttributeProviderAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A2780, void, ctor_2, (app::AttributeProviderAttribute * this_ptr, app::String* type_name, app::String* property_name))
    IL2CPP_REGISTER_METHODINFO(0x047084E0, AttributeProviderAttribute__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A2880, void, ctor_3, (app::AttributeProviderAttribute * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x0477D5E8, AttributeProviderAttribute__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_TypeName, (app::AttributeProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_PropertyName, (app::AttributeProviderAttribute * this_ptr))
} // namespace app::classes::System::ComponentModel::AttributeProviderAttribute
