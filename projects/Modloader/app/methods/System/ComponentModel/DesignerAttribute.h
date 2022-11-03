#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::DesignerAttribute {
    IL2CPP_REGISTER_METHOD(0x01FE6280, void, ctor_1, (app::DesignerAttribute * this_ptr, app::String* designer_type_name))
    IL2CPP_REGISTER_METHOD(0x01FE63A0, void, ctor_2, (app::DesignerAttribute * this_ptr, app::Type* designer_type))
    IL2CPP_REGISTER_METHOD(0x01FE64A0, void, ctor_3, (app::DesignerAttribute * this_ptr, app::String* designer_type_name, app::String* designer_base_type_name))
    IL2CPP_REGISTER_METHOD(0x01FE6570, void, ctor_4, (app::DesignerAttribute * this_ptr, app::String* designer_type_name, app::Type* designer_base_type))
    IL2CPP_REGISTER_METHOD(0x01FE6660, void, ctor_5, (app::DesignerAttribute * this_ptr, app::Type* designer_type, app::Type* designer_base_type))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DesignerBaseTypeName, (app::DesignerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DesignerTypeName, (app::DesignerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE4CC0, app::Object*, get_TypeId, (app::DesignerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE66D0, bool, Equals, (app::DesignerAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FE67F0, int32_t, GetHashCode, (app::DesignerAttribute * this_ptr))
} // namespace app::classes::System::ComponentModel::DesignerAttribute
