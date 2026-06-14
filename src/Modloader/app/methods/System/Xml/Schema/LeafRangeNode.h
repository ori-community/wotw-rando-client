#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/LeafRangeNode.h>
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/SymbolsDictionary.h>

namespace app::classes::System::Xml::Schema::LeafRangeNode {
    IL2CPP_REGISTER_METHOD(0x016CD250, void, ctor_1, app::LeafRangeNode* this_ptr, app::Decimal min, app::Decimal max)
    IL2CPP_REGISTER_METHOD(0x016CD270, void, ctor_2, app::LeafRangeNode* this_ptr, int32_t pos, app::Decimal min, app::Decimal max)
    IL2CPP_REGISTER_METHOD(0x00CB5CB0, app::Decimal, get_Max, app::LeafRangeNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::Decimal, get_Min, app::LeafRangeNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::BitSet*, get_NextIteration, app::LeafRangeNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_NextIteration, app::LeafRangeNode* this_ptr, app::BitSet* value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsRangeNode, app::LeafRangeNode* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016CD290,
        void,
        ExpandTree,
        app::LeafRangeNode* this_ptr,
        app::InteriorNode* parent,
        app::SymbolsDictionary* symbols,
        app::Positions* positions
    )
} // namespace app::classes::System::Xml::Schema::LeafRangeNode
