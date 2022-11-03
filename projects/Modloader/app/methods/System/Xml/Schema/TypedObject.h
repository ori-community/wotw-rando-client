#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::TypedObject {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Dim, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsList, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ABCC10, bool, get_IsDecimal, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Decimal__Array*, get_Dvalue, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Value, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlSchemaDatatype*, get_Type, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ABCC30, void, ctor, (app::TypedObject * this_ptr, app::Object* obj, app::String* svalue, app::XmlSchemaDatatype* xsdtype))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, ToString, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ABCE30, void, SetDecimal, (app::TypedObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ABD3C0, bool, ListDValueEquals, (app::TypedObject * this_ptr, app::TypedObject* other))
    IL2CPP_REGISTER_METHOD(0x01ABD570, bool, Equals, (app::TypedObject * this_ptr, app::TypedObject* other))
} // namespace app::classes::System::Xml::Schema::TypedObject
