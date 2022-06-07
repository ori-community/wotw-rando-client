#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::QmarkNode {
    IL2CPP_REGISTER_METHOD(0x016E5D00, void, ConstructPos, (app::QmarkNode * this_ptr, app::BitSet * firstpos, app::BitSet * lastpos, app::BitSet__Array * followpos))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsNullable, (app::QmarkNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QmarkNode * this_ptr))
}
