#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Operand.h>
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XPathResultType__Enum.h>

namespace app::classes::MS::Internal::Xml::XPath::Operand {
    IL2CPP_REGISTER_METHOD(0x01DE2830, void, ctor_1, (app::Operand * this_ptr, app::String* val))
    IL2CPP_REGISTER_METHOD(0x021D9370, void, ctor_2, (app::Operand * this_ptr, double val))
    IL2CPP_REGISTER_METHOD(0x00420230, app::AstNode_AstType__Enum, get_Type, (app::Operand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::XPathResultType__Enum, get_ReturnType, (app::Operand * this_ptr))
} // namespace app::classes::MS::Internal::Xml::XPath::Operand
