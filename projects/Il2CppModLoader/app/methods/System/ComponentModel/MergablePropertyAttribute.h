#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::MergablePropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::MergablePropertyAttribute * this_ptr, bool allow_merge))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_AllowMerge, (app::MergablePropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298FB10, bool, Equals, (app::MergablePropertyAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::MergablePropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298FBE0, bool, IsDefaultAttribute, (app::MergablePropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298FCA0, void, cctor, ())
}
