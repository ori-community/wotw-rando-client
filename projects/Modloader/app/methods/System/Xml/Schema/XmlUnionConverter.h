#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlUnionConverter.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::XmlUnionConverter {
    IL2CPP_REGISTER_METHOD(0x0192FD00, void, ctor, (app::XmlUnionConverter * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x019300A0, app::XmlValueConverter*, Create, (app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x019301F0, app::Object*, ChangeType, (app::XmlUnionConverter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
} // namespace app::classes::System::Xml::Schema::XmlUnionConverter
