#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlWellFormedWriter_Namespace__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlRawWriter.h>
#include <Modloader/app/structs/XmlWellFormedWriter_NamespaceKind__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::XmlWellFormedWriter_Namespace {
    IL2CPP_REGISTER_METHOD(0x001DB370, void, Set, (app::XmlWellFormedWriter_Namespace__Boxed * this_ptr, app::String* prefix, app::String* namespace_uri, app::XmlWellFormedWriter_NamespaceKind__Enum kind))
    IL2CPP_REGISTER_METHOD(0x001DB390, void, WriteDecl, (app::XmlWellFormedWriter_Namespace__Boxed * this_ptr, app::XmlWriter* writer, app::XmlRawWriter* raw_writer))
} // namespace app::classes::System::Xml::XmlWellFormedWriter_Namespace
