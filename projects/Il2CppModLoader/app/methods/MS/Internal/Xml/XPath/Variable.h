#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::XPath::Variable {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::Variable * this_ptr, app::String * name, app::String * prefix))
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::AstNode_AstType__Enum, get_Type, (app::Variable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::XPathResultType__Enum, get_ReturnType, (app::Variable * this_ptr))
}
