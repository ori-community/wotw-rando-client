#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MergablePropertyAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::MergablePropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::MergablePropertyAttribute* this_ptr, bool allow_merge)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_AllowMerge, app::MergablePropertyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298FB10, bool, Equals, app::MergablePropertyAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, app::MergablePropertyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298FBE0, bool, IsDefaultAttribute, app::MergablePropertyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298FCA0, void, cctor, )
} // namespace app::classes::System::ComponentModel::MergablePropertyAttribute
