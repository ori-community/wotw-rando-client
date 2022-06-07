#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::ConstraintConverter {
    IL2CPP_REGISTER_METHOD(0x023915D0, bool, CanConvertTo, (app::ConstraintConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * destination_type))
    IL2CPP_REGISTER_METHOD(0x023916B0, app::Object *, ConvertTo, (app::ConstraintConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04734E20, ConstraintConverter_ConvertTo__MethodInfo)
}
