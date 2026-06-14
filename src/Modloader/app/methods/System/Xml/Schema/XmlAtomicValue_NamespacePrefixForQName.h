#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAtomicValue_NamespacePrefixForQName.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>

namespace app::classes::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName {
    IL2CPP_REGISTER_METHOD(0x02028E40, void, ctor, app::XmlAtomicValue_NamespacePrefixForQName* this_ptr, app::String* prefix, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x0223D290, app::String*, LookupNamespace, app::XmlAtomicValue_NamespacePrefixForQName* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x0223D2E0, app::String*, LookupPrefix, app::XmlAtomicValue_NamespacePrefixForQName* this_ptr, app::String* namespace_name)
    IL2CPP_REGISTER_METHOD(
        0x0223D330,
        app::IDictionary_2_System_String_System_String_*,
        GetNamespacesInScope,
        app::XmlAtomicValue_NamespacePrefixForQName* this_ptr,
        app::XmlNamespaceScope__Enum scope
    )
} // namespace app::classes::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName
