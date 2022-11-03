#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::XmlWellFormedWriter_AttrName {
    IL2CPP_REGISTER_METHOD(0x001DAE60, void, Set, (app::XmlWellFormedWriter_AttrName__Boxed * this_ptr, app::String* prefix, app::String* local_name, app::String* namespace_uri))
    IL2CPP_REGISTER_METHOD(0x001DAE80, bool, IsDuplicate, (app::XmlWellFormedWriter_AttrName__Boxed * this_ptr, app::String* prefix, app::String* local_name, app::String* namespace_uri))
} // namespace app::classes::System::Xml::XmlWellFormedWriter_AttrName
