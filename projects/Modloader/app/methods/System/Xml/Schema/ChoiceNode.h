#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SyntaxTreeNode.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/ChoiceNode.h>
#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#include <Modloader/app/structs/Positions.h>

namespace app::classes::System::Xml::Schema::ChoiceNode {
    IL2CPP_REGISTER_METHOD(0x019A9600, void, ConstructChildPos, (app::SyntaxTreeNode * child, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos))
    IL2CPP_REGISTER_METHOD(0x019A98B0, void, ConstructPos, (app::ChoiceNode * this_ptr, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos))
    IL2CPP_REGISTER_METHOD(0x019A9BA0, bool, get_IsNullable, (app::ChoiceNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A9C90, void, ExpandTree, (app::ChoiceNode * this_ptr, app::InteriorNode* parent, app::SymbolsDictionary* symbols, app::Positions* positions))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ChoiceNode * this_ptr))
} // namespace app::classes::System::Xml::Schema::ChoiceNode
