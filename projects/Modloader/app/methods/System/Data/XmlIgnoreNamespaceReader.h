#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlIgnoreNamespaceReader.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlDocument.h>

namespace app::classes::System::Data::XmlIgnoreNamespaceReader {
    IL2CPP_REGISTER_METHOD(0x023F2490, void, ctor, (app::XmlIgnoreNamespaceReader * this_ptr, app::XmlDocument* xdoc, app::String__Array* namespaces_to_ignore))
    IL2CPP_REGISTER_METHOD(0x023F2600, bool, MoveToFirstAttribute, (app::XmlIgnoreNamespaceReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F2880, bool, MoveToNextAttribute, (app::XmlIgnoreNamespaceReader * this_ptr))
} // namespace app::classes::System::Data::XmlIgnoreNamespaceReader
