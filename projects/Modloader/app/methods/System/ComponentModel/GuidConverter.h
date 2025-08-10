#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/GuidConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::GuidConverter {
    IL2CPP_REGISTER_METHOD(0x01FEDA40, bool, CanConvertFrom, app::GuidConverter* this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type)
    IL2CPP_REGISTER_METHOD(0x01FEDB20, bool, CanConvertTo, app::GuidConverter* this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(
        0x01FEDC00,
        app::Object*,
        ConvertFrom,
        app::GuidConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01FEDD30,
        app::Object*,
        ConvertTo,
        app::GuidConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(0x01FEE0F0, void, ctor, app::GuidConverter* this_ptr)
} // namespace app::classes::System::ComponentModel::GuidConverter
