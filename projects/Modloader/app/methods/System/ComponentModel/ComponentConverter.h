#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ComponentConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::ComponentConverter {
    IL2CPP_REGISTER_METHOD(0x024A9C70, void, ctor, app::ComponentConverter* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x024A9D90,
        app::PropertyDescriptorCollection*,
        GetProperties,
        app::ComponentConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Object* value,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetPropertiesSupported, app::ComponentConverter* this_ptr, app::ITypeDescriptorContext* context)
} // namespace app::classes::System::ComponentModel::ComponentConverter
