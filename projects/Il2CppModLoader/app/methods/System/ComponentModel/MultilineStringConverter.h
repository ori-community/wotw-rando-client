#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::MultilineStringConverter {
    IL2CPP_REGISTER_METHOD(0x0298FED0, app::Object *, ConvertTo, (app::MultilineStringConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04754898, MultilineStringConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptorCollection *, GetProperties, (app::MultilineStringConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, (app::MultilineStringConverter * this_ptr, app::ITypeDescriptorContext * context))
    IL2CPP_REGISTER_METHOD(0x02990050, void, ctor, (app::MultilineStringConverter * this_ptr))
}
