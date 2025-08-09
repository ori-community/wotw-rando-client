#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AstNode.h>
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#include <Modloader/app/structs/Operator.h>
#include <Modloader/app/structs/Operator_Op__Enum.h>
#include <Modloader/app/structs/XPathResultType__Enum.h>

namespace app::classes::MS::Internal::Xml::XPath::Operator {
    IL2CPP_REGISTER_METHOD(0x0200ADC0, void, ctor, app::Operator* this_ptr, app::Operator_Op__Enum op, app::AstNode* opnd1, app::AstNode* opnd2)
    IL2CPP_REGISTER_METHOD(0x00417920, app::AstNode_AstType__Enum, get_Type, app::Operator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021D9420, app::XPathResultType__Enum, get_ReturnType, app::Operator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021D9440, void, cctor, )
} // namespace app::classes::MS::Internal::Xml::XPath::Operator
