#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlAnyListConverter.h>
#include <Modloader/app/structs/XmlBaseConverter.h>

namespace app::classes::System::Xml::Schema::XmlAnyListConverter {
    IL2CPP_REGISTER_METHOD(0x0223B440, void, ctor, app::XmlAnyListConverter* this_ptr, app::XmlBaseConverter* atomic_converter)
    IL2CPP_REGISTER_METHOD(
        0x0223B450,
        app::Object*,
        ChangeType,
        app::XmlAnyListConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x0223B700, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XmlAnyListConverter
