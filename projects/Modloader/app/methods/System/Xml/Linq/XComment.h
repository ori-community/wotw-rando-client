#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Linq::XComment {
    IL2CPP_REGISTER_METHOD(0x0302F580, void, ctor_1, (app::XComment * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04747360, XComment__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0302F640, void, ctor_2, (app::XComment * this_ptr, app::XComment* other))
    IL2CPP_REGISTER_METHODINFO(0x0477E5A0, XComment__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::XmlNodeType__Enum, get_NodeType, (app::XComment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Value, (app::XComment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302F700, void, WriteTo, (app::XComment * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHODINFO(0x0478C648, XComment_WriteTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0302F7D0, app::XNode*, CloneNode, (app::XComment * this_ptr))
} // namespace app::classes::System::Xml::Linq::XComment
