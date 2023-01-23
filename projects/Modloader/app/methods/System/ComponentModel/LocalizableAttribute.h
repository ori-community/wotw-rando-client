#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LocalizableAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::LocalizableAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::LocalizableAttribute * this_ptr, bool is_localizable))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsLocalizable, (app::LocalizableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5450, bool, IsDefaultAttribute, (app::LocalizableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5510, bool, Equals, (app::LocalizableAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::LocalizableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF55D0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::LocalizableAttribute
