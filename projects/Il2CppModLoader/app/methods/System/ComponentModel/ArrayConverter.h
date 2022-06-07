#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::ArrayConverter {
    IL2CPP_REGISTER_METHOD(0x0249F430, app::Object *, ConvertTo, (app::ArrayConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0470C728, ArrayConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0249F760, app::PropertyDescriptorCollection *, GetProperties, (app::ArrayConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetPropertiesSupported, (app::ArrayConverter * this_ptr, app::ITypeDescriptorContext * context))
    IL2CPP_REGISTER_METHOD(0x0249FD10, void, ctor, (app::ArrayConverter * this_ptr))
}
