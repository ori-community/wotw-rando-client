#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_anyAtomicType.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::Datatype_anyAtomicType {
    IL2CPP_REGISTER_METHOD(0x023581B0, app::XmlValueConverter*, CreateValueConverter, app::Datatype_anyAtomicType* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, app::Datatype_anyAtomicType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008556D0, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_anyAtomicType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02358250, void, ctor, app::Datatype_anyAtomicType* this_ptr)
} // namespace app::classes::System::Xml::Schema::Datatype_anyAtomicType
