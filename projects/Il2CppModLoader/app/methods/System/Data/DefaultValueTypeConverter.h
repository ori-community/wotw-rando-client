#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::DefaultValueTypeConverter {
    IL2CPP_REGISTER_METHOD(0x01F4CAC0, app::Object *, ConvertTo, (app::DefaultValueTypeConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04798360, DefaultValueTypeConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4CC70, app::Object *, ConvertFrom, (app::DefaultValueTypeConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value))
}
