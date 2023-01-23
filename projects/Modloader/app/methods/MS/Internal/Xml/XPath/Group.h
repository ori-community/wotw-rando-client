#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Group_1.h>
#include <Modloader/app/structs/AstNode.h>
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#include <Modloader/app/structs/XPathResultType__Enum.h>

namespace app::classes::MS::Internal::Xml::XPath::Group {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::Group_1 * this_ptr, app::AstNode* group_node))
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::AstNode_AstType__Enum, get_Type, (app::Group_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::XPathResultType__Enum, get_ReturnType, (app::Group_1 * this_ptr))
} // namespace app::classes::MS::Internal::Xml::XPath::Group
