#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::LeafNode {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LeafNode * this_ptr, int32_t pos))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Pos, (app::LeafNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Pos, (app::LeafNode * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExpandTree, (app::LeafNode * this_ptr, app::InteriorNode* parent, app::SymbolsDictionary* symbols, app::Positions* positions))
    IL2CPP_REGISTER_METHOD(0x016CD200, void, ConstructPos, (app::LeafNode * this_ptr, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsNullable, (app::LeafNode * this_ptr))
} // namespace app::classes::System::Xml::Schema::LeafNode
