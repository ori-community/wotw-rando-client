#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlWellFormedWriter_Namespace {
    IL2CPP_REGISTER_METHOD(0x001DB370, void, Set, (app::XmlWellFormedWriter_Namespace__Boxed * this_ptr, app::String * prefix, app::String * namespace_uri, app::XmlWellFormedWriter_NamespaceKind__Enum kind))
    IL2CPP_REGISTER_METHOD(0x001DB390, void, WriteDecl, (app::XmlWellFormedWriter_Namespace__Boxed * this_ptr, app::XmlWriter * writer, app::XmlRawWriter * raw_writer))
}
