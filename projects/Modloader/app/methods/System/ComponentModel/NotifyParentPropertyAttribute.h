#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotifyParentPropertyAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::NotifyParentPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::NotifyParentPropertyAttribute* this_ptr, bool notify_parent)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_NotifyParent, app::NotifyParentPropertyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02990C30, bool, Equals, app::NotifyParentPropertyAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, app::NotifyParentPropertyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02990D20, bool, IsDefaultAttribute, app::NotifyParentPropertyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02990DE0, void, cctor, )
} // namespace app::classes::System::ComponentModel::NotifyParentPropertyAttribute
