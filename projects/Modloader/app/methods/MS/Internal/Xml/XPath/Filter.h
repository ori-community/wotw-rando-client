#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Filter.h>
#include <Modloader/app/structs/AstNode.h>
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#include <Modloader/app/structs/XPathResultType__Enum.h>

namespace app::classes::MS::Internal::Xml::XPath::Filter {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::Filter * this_ptr, app::AstNode* input, app::AstNode* condition))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::AstNode_AstType__Enum, get_Type, (app::Filter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::XPathResultType__Enum, get_ReturnType, (app::Filter * this_ptr))
} // namespace app::classes::MS::Internal::Xml::XPath::Filter
