#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Datatype_char.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Exception.h>

namespace app::classes::System::Xml::Schema::Datatype_char {
    IL2CPP_REGISTER_METHOD(0x0235A120, app::Type*, get_ValueType, (app::Datatype_char * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235A1C0, app::Type*, get_ListValueType, (app::Datatype_char * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_char * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235A260, int32_t, Compare, (app::Datatype_char * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x0235A320, app::Object*, ParseValue, (app::Datatype_char * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr))
    IL2CPP_REGISTER_METHODINFO(0x04731AF0, Datatype_char_ParseValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0235A480, app::Exception*, TryParseValue, (app::Datatype_char * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x0235A560, void, ctor, (app::Datatype_char * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235A600, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_char
