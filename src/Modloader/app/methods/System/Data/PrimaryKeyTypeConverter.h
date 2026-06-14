#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PrimaryKeyTypeConverter.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::PrimaryKeyTypeConverter {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, app::PrimaryKeyTypeConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(
        0x01E49100,
        bool,
        CanConvertTo,
        app::PrimaryKeyTypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01E491E0,
        app::Object*,
        ConvertTo,
        app::PrimaryKeyTypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
} // namespace app::classes::System::Data::PrimaryKeyTypeConverter
