#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UriTypeConverter.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::UriTypeConverter {
    IL2CPP_REGISTER_METHOD(0x031A0790, void, ctor, (app::UriTypeConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A0820, bool, CanConvert, (app::UriTypeConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x031A0910, bool, CanConvertFrom, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x031A09F0, bool, CanConvertTo, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x031A0AB0, app::Object*, ConvertFrom, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x031A0D80, app::Object*, ConvertTo, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
} // namespace app::classes::System::UriTypeConverter
