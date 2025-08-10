#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/CultureInfoConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>

namespace app::classes::System::ComponentModel::CultureInfoConverter {
    IL2CPP_REGISTER_METHOD(0x01FDA1E0, app::String*, get_DefaultCultureString, app::CultureInfoConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDA260, app::String*, GetCultureName, app::CultureInfoConverter* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01FDA290, bool, CanConvertFrom, app::CultureInfoConverter* this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type)
    IL2CPP_REGISTER_METHOD(
        0x01FDA370,
        bool,
        CanConvertTo,
        app::CultureInfoConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01FDA450,
        app::Object*,
        ConvertFrom,
        app::CultureInfoConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01FDAD50,
        app::Object*,
        ConvertTo,
        app::CultureInfoConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01FDB2F0,
        app::TypeConverter_StandardValuesCollection*,
        GetStandardValues,
        app::CultureInfoConverter* this_ptr,
        app::ITypeDescriptorContext* context
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetStandardValuesExclusive, app::CultureInfoConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, app::CultureInfoConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x01FDB670, void, ctor, app::CultureInfoConverter* this_ptr)
} // namespace app::classes::System::ComponentModel::CultureInfoConverter
