#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XNamespace.h>
#include <Modloader/app/structs/NamespaceCache__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Linq::NamespaceCache {
    IL2CPP_REGISTER_METHOD(0x002412B0, app::XNamespace*, Get, (app::NamespaceCache__Boxed * this_ptr, app::String* namespace_name))
}
