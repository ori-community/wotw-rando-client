#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstraintConverter.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::ConstraintConverter {
    IL2CPP_REGISTER_METHOD(
        0x023915D0,
        bool,
        CanConvertTo,
        app::ConstraintConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(
        0x023916B0,
        app::Object*,
        ConvertTo,
        app::ConstraintConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
} // namespace app::classes::System::Data::ConstraintConverter
