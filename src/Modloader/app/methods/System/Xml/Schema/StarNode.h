#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/StarNode.h>

namespace app::classes::System::Xml::Schema::StarNode {
    IL2CPP_REGISTER_METHOD(0x016D9320, void, ConstructPos, app::StarNode* this_ptr, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsNullable, app::StarNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StarNode* this_ptr)
} // namespace app::classes::System::Xml::Schema::StarNode
