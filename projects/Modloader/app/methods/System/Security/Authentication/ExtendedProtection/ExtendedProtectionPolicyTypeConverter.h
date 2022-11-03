#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter {
    IL2CPP_REGISTER_METHOD(0x021BC830, bool, CanConvertTo, (app::ExtendedProtectionPolicyTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0470D8F8, ExtendedProtectionPolicyTypeConverter_CanConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021BC880, app::Object*, ConvertTo, (app::ExtendedProtectionPolicyTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0474FEE8, ExtendedProtectionPolicyTypeConverter_ConvertTo__MethodInfo)
} // namespace app::classes::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter
