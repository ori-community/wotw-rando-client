#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XCData.h>
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::Linq::XCData {
    IL2CPP_REGISTER_METHOD(0x0302F340, void, ctor_1, app::XCData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0302F350, void, ctor_2, app::XCData* this_ptr, app::XCData* other)
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::XmlNodeType__Enum, get_NodeType, app::XCData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0302F360, void, WriteTo, app::XCData* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x0302F430, app::XNode*, CloneNode, app::XCData* this_ptr)
} // namespace app::classes::System::Xml::Linq::XCData
