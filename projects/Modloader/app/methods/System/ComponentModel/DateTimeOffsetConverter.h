#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTimeOffsetConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CultureInfo.h>

namespace app::classes::System::ComponentModel::DateTimeOffsetConverter {
    IL2CPP_REGISTER_METHOD(0x01FDFD00, bool, CanConvertFrom, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x01FDFDE0, bool, CanConvertTo, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FDFEC0, app::Object*, ConvertFrom, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04788338, DateTimeOffsetConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FE0200, app::Object*, ConvertTo, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FE1160, void, ctor, (app::DateTimeOffsetConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::DateTimeOffsetConverter
