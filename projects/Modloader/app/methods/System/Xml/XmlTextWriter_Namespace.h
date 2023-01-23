#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlTextWriter_Namespace__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::XmlTextWriter_Namespace {
    IL2CPP_REGISTER_METHOD(0x001DA650, void, Set, (app::XmlTextWriter_Namespace__Boxed * this_ptr, app::String* prefix, app::String* ns, bool declared))
}
