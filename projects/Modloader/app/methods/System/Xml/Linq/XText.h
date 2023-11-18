#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XText.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Xml::Linq::XText {
    IL2CPP_REGISTER_METHOD(0x0303D1D0, void, ctor_1, (app::XText * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0303D290, void, ctor_2, (app::XText * this_ptr, app::XText* other))
    IL2CPP_REGISTER_METHOD(0x00420230, app::XmlNodeType__Enum, get_NodeType, (app::XText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Value, (app::XText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303D350, void, set_Value, (app::XText * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0303D4A0, void, WriteTo, (app::XText * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x0303D5F0, void, AppendText, (app::XText * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x0303D620, app::XNode*, CloneNode, (app::XText * this_ptr))
} // namespace app::classes::System::Xml::Linq::XText
