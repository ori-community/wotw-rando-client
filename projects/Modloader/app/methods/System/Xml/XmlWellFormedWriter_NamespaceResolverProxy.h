#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlWellFormedWriter_NamespaceResolverProxy.h>
#include <Modloader/app/structs/XmlWellFormedWriter.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XmlWellFormedWriter_NamespaceResolverProxy * this_ptr, app::XmlWellFormedWriter* wf_writer))
    IL2CPP_REGISTER_METHOD(0x01FD51D0, app::IDictionary_2_System_String_System_String_*, IXmlNamespaceResolver_GetNamespacesInScope, (app::XmlWellFormedWriter_NamespaceResolverProxy * this_ptr, app::XmlNamespaceScope__Enum scope))
    IL2CPP_REGISTER_METHODINFO(0x0477D718, XmlWellFormedWriter_NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FD5220, app::String*, IXmlNamespaceResolver_LookupNamespace, (app::XmlWellFormedWriter_NamespaceResolverProxy * this_ptr, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x01FD5240, app::String*, IXmlNamespaceResolver_LookupPrefix, (app::XmlWellFormedWriter_NamespaceResolverProxy * this_ptr, app::String* namespace_name))
} // namespace app::classes::System::Xml::XmlWellFormedWriter_NamespaceResolverProxy
