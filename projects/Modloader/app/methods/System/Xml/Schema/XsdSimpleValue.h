#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XsdSimpleValue.h>

namespace app::classes::System::Xml::Schema::XsdSimpleValue {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::XsdSimpleValue* this_ptr, app::XmlSchemaSimpleType* st, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlSchemaSimpleType*, get_XmlType, app::XsdSimpleValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_TypedValue, app::XsdSimpleValue* this_ptr)
} // namespace app::classes::System::Xml::Schema::XsdSimpleValue
