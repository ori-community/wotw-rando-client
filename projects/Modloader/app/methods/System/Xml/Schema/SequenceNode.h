#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SequenceNode.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/SymbolsDictionary.h>

namespace app::classes::System::Xml::Schema::SequenceNode {
    IL2CPP_REGISTER_METHOD(0x01AB9C70, void, ConstructPos, (app::SequenceNode * this_ptr, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos))
    IL2CPP_REGISTER_METHOD(0x01ABA4E0, bool, get_IsNullable, (app::SequenceNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A9C90, void, ExpandTree, (app::SequenceNode * this_ptr, app::InteriorNode* parent, app::SymbolsDictionary* symbols, app::Positions* positions))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SequenceNode * this_ptr))
} // namespace app::classes::System::Xml::Schema::SequenceNode
