#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_uuid {
    IL2CPP_REGISTER_METHOD(0x023637C0, app::Type *, get_ValueType, (app::Datatype_uuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02363860, app::Type *, get_ListValueType, (app::Datatype_uuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_uuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02363900, int32_t, Compare, (app::Datatype_uuid * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x023639D0, app::Object *, ParseValue, (app::Datatype_uuid * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr))
    IL2CPP_REGISTER_METHODINFO(0x04722268, Datatype_uuid_ParseValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02363B40, app::Exception *, TryParseValue, (app::Datatype_uuid * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x02363C30, void, ctor, (app::Datatype_uuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02363CD0, void, cctor, ())
}
