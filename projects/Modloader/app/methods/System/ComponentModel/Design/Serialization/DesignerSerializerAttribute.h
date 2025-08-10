#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesignerSerializerAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::Design::Serialization::DesignerSerializerAttribute {
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        ctor,
        app::DesignerSerializerAttribute* this_ptr,
        app::String* serializer_type_name,
        app::String* base_serializer_type_name
    )
    IL2CPP_REGISTER_METHOD(0x01FE4CC0, app::Object*, get_TypeId, app::DesignerSerializerAttribute* this_ptr)
} // namespace app::classes::System::ComponentModel::Design::Serialization::DesignerSerializerAttribute
