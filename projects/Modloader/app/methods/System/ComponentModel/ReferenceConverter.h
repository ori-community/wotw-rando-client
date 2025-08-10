#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReferenceConverter.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>

namespace app::classes::System::ComponentModel::ReferenceConverter {
    IL2CPP_REGISTER_METHOD(0x02999290, void, ctor, app::ReferenceConverter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02999340, bool, CanConvertFrom, app::ReferenceConverter* this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type)
    IL2CPP_REGISTER_METHOD(
        0x02999420,
        app::Object*,
        ConvertFrom,
        app::ReferenceConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02999660,
        app::Object*,
        ConvertTo,
        app::ReferenceConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x02999870,
        app::TypeConverter_StandardValuesCollection*,
        GetStandardValues,
        app::ReferenceConverter* this_ptr,
        app::ITypeDescriptorContext* context
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, app::ReferenceConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, app::ReferenceConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValueAllowed, app::ReferenceConverter* this_ptr, app::ITypeDescriptorContext* context, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02999F70, void, cctor, )
} // namespace app::classes::System::ComponentModel::ReferenceConverter
