#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::PlusNode {
    IL2CPP_REGISTER_METHOD(0x016D9320, void, ConstructPos, (app::PlusNode * this_ptr, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_IsNullable, (app::PlusNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlusNode * this_ptr))
} // namespace app::classes::System::Xml::Schema::PlusNode
