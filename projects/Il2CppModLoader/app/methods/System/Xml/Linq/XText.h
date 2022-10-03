#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Linq::XText {
    IL2CPP_REGISTER_METHOD(0x0303D1D0, void, ctor_1, (app::XText * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047734E8, XText__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303D290, void, ctor_2, (app::XText * this_ptr, app::XText* other))
    IL2CPP_REGISTER_METHODINFO(0x0475C498, XText__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420230, app::XmlNodeType__Enum, get_NodeType, (app::XText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Value, (app::XText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303D350, void, set_Value, (app::XText * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047056A8, XText_set_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303D4A0, void, WriteTo, (app::XText * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHODINFO(0x04729D18, XText_WriteTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303D5F0, void, AppendText, (app::XText * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x0303D620, app::XNode*, CloneNode, (app::XText * this_ptr))
} // namespace app::classes::System::Xml::Linq::XText
