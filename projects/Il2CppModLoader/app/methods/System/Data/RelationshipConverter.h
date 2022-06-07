#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::RelationshipConverter {
    IL2CPP_REGISTER_METHOD(0x01E4B2A0, bool, CanConvertTo, (app::RelationshipConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * destination_type))
    IL2CPP_REGISTER_METHOD(0x01E4B380, app::Object *, ConvertTo, (app::RelationshipConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0470BF00, RelationshipConverter_ConvertTo__MethodInfo)
}
