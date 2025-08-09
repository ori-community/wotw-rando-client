#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyAttribute.h>

namespace app::classes::System::ComponentModel::ReadOnlyAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::ReadOnlyAttribute* this_ptr, bool is_read_only)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReadOnly, app::ReadOnlyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02998B90, bool, Equals, app::ReadOnlyAttribute* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, app::ReadOnlyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02998C60, bool, IsDefaultAttribute, app::ReadOnlyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02998D20, void, cctor, )
} // namespace app::classes::System::ComponentModel::ReadOnlyAttribute
