#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExtendedProtectionPolicyTypeConverter.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter {
    IL2CPP_REGISTER_METHOD(0x021BC830, bool, CanConvertTo, (app::ExtendedProtectionPolicyTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x021BC880, app::Object*, ConvertTo, (app::ExtendedProtectionPolicyTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
} // namespace app::classes::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter
