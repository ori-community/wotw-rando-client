#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::XPath::Root {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Root * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::AstNode_AstType__Enum, get_Type, (app::Root * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::XPathResultType__Enum, get_ReturnType, (app::Root * this_ptr))
} // namespace app::classes::MS::Internal::Xml::XPath::Root
