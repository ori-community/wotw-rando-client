#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::TypeConverterAttribute {
    IL2CPP_REGISTER_METHOD(0x02946350, void, ctor_1, (app::TypeConverterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEED00, void, ctor_2, (app::TypeConverterAttribute * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x029463E0, void, ctor_3, (app::TypeConverterAttribute * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ConverterTypeName, (app::TypeConverterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029464B0, bool, Equals, (app::TypeConverterAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::TypeConverterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029465A0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::TypeConverterAttribute
