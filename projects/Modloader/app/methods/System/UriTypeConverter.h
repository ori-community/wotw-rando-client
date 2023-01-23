#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UriTypeConverter.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CultureInfo.h>

namespace app::classes::System::UriTypeConverter {
    IL2CPP_REGISTER_METHOD(0x031A0790, void, ctor, (app::UriTypeConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A0820, bool, CanConvert, (app::UriTypeConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x031A0910, bool, CanConvertFrom, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHODINFO(0x04781578, UriTypeConverter_CanConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031A09F0, bool, CanConvertTo, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x031A0AB0, app::Object*, ConvertFrom, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0474F438, UriTypeConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031A0D80, app::Object*, ConvertTo, (app::UriTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0474F1A0, UriTypeConverter_ConvertTo__MethodInfo)
} // namespace app::classes::System::UriTypeConverter
