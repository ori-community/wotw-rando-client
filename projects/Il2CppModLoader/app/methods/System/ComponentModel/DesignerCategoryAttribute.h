#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::DesignerCategoryAttribute {
    IL2CPP_REGISTER_METHOD(0x01FE6850, void, ctor_1, (app::DesignerCategoryAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::DesignerCategoryAttribute * this_ptr, app::String * category))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Category, (app::DesignerCategoryAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE68E0, app::Object *, get_TypeId, (app::DesignerCategoryAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE6940, bool, Equals, (app::DesignerCategoryAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::DesignerCategoryAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE6A30, bool, IsDefaultAttribute, (app::DesignerCategoryAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE6B00, void, cctor, ())
}
