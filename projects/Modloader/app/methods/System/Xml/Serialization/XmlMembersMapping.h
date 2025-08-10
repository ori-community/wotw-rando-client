#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlMembersMapping.h>

namespace app::classes::System::Xml::Serialization::XmlMembersMapping {
    IL2CPP_REGISTER_METHOD(0x02119370, int32_t, get_Count, app::XmlMembersMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_HasWrapperElement, app::XmlMembersMapping* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlMembersMapping
