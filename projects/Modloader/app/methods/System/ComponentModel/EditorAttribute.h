#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EditorAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::EditorAttribute {
    IL2CPP_REGISTER_METHOD(0x01FE7CE0, void, ctor_1, app::EditorAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FE7D80, void, ctor_2, app::EditorAttribute* this_ptr, app::String* type_name, app::String* base_type_name)
    IL2CPP_REGISTER_METHOD(0x01FE7DD0, void, ctor_3, app::EditorAttribute* this_ptr, app::String* type_name, app::Type* base_type)
    IL2CPP_REGISTER_METHOD(0x01FE7E40, void, ctor_4, app::EditorAttribute* this_ptr, app::Type* type, app::Type* base_type)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_EditorBaseTypeName, app::EditorAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_EditorTypeName, app::EditorAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FE7EB0, app::Object*, get_TypeId, app::EditorAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FE7F50, bool, Equals, app::EditorAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, app::EditorAttribute* this_ptr)
} // namespace app::classes::System::ComponentModel::EditorAttribute
