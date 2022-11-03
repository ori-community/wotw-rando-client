#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::DateTimeConverter {
    IL2CPP_REGISTER_METHOD(0x01FDEA30, bool, CanConvertFrom, (app::DateTimeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x01FDEB10, bool, CanConvertTo, (app::DateTimeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FDEBF0, app::Object*, ConvertFrom, (app::DateTimeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04714920, DateTimeConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FDEF20, app::Object*, ConvertTo, (app::DateTimeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FDFC70, void, ctor, (app::DateTimeConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::DateTimeConverter
