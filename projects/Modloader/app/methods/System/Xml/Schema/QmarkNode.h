#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QmarkNode.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>

namespace app::classes::System::Xml::Schema::QmarkNode {
    IL2CPP_REGISTER_METHOD(0x016E5D00, void, ConstructPos, (app::QmarkNode * this_ptr, app::BitSet* firstpos, app::BitSet* lastpos, app::BitSet__Array* followpos))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsNullable, (app::QmarkNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QmarkNode * this_ptr))
} // namespace app::classes::System::Xml::Schema::QmarkNode
