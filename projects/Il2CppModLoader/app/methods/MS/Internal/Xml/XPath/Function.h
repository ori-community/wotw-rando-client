#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::XPath::Function {
    IL2CPP_REGISTER_METHOD(0x021D8DA0, void, ctor_1, (app::Function * this_ptr, app::Function_FunctionType__Enum ftype, app::ArrayList * argument_list))
    IL2CPP_REGISTER_METHOD(0x021D8F00, void, ctor_2, (app::Function * this_ptr, app::String * prefix, app::String * name, app::ArrayList * argument_list))
    IL2CPP_REGISTER_METHOD(0x021D9070, void, ctor_3, (app::Function * this_ptr, app::Function_FunctionType__Enum ftype, app::AstNode * arg))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::AstNode_AstType__Enum, get_Type, (app::Function * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D91F0, app::XPathResultType__Enum, get_ReturnType, (app::Function * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D92C0, void, cctor, ())
}
