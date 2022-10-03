#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute {
    IL2CPP_REGISTER_METHOD(0x01FE5970, void, ctor, (app::RootDesignerSerializerAttribute * this_ptr, app::String* serializer_type_name, app::String* base_serializer_type_name, bool reloadable))
    IL2CPP_REGISTER_METHOD(0x01FE5980, app::Object*, get_TypeId, (app::RootDesignerSerializerAttribute * this_ptr))
} // namespace app::classes::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute
