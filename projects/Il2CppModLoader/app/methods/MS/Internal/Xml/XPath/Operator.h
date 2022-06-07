#pragma once
#include <Il2CppModLoader/interception_macros.h>

inline namespace app::methods::MS::Internal::Xml::XPath::Operator {
    inline IL2CPP_REGISTER_METHOD(0x0200ADC0, void, ctor, (app::Operator * this_ptr, app::Operator_Op__Enum op, app::AstNode * opnd1, app::AstNode * opnd2))
    inline IL2CPP_REGISTER_METHOD(0x00417920, app::AstNode_AstType__Enum, get_Type, (app::Operator * this_ptr))
    inline IL2CPP_REGISTER_METHOD(0x021D9420, app::XPathResultType__Enum, get_ReturnType, (app::Operator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D9440, void, cctor, ())
}
