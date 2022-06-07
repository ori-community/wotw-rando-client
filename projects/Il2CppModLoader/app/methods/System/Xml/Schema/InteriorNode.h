#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::InteriorNode {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SyntaxTreeNode *, get_LeftChild, (app::InteriorNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_LeftChild, (app::InteriorNode * this_ptr, app::SyntaxTreeNode * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::SyntaxTreeNode *, get_RightChild, (app::InteriorNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_RightChild, (app::InteriorNode * this_ptr, app::SyntaxTreeNode * value))
    IL2CPP_REGISTER_METHOD(0x016CC230, void, ExpandTreeNoRecursive, (app::InteriorNode * this_ptr, app::InteriorNode * parent, app::SymbolsDictionary * symbols, app::Positions * positions))
    IL2CPP_REGISTER_METHOD(0x016CC500, void, ExpandTree, (app::InteriorNode * this_ptr, app::InteriorNode * parent, app::SymbolsDictionary * symbols, app::Positions * positions))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InteriorNode * this_ptr))
}
