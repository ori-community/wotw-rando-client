#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RelationshipConverter.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::RelationshipConverter {
    IL2CPP_REGISTER_METHOD(
        0x01E4B2A0,
        bool,
        CanConvertTo,
        app::RelationshipConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01E4B380,
        app::Object*,
        ConvertTo,
        app::RelationshipConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
} // namespace app::classes::System::Data::RelationshipConverter
