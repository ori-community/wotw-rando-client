#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PasswordPropertyTextAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::PasswordPropertyTextAttribute {
    IL2CPP_REGISTER_METHOD(0x00531660, void, ctor_1, (app::PasswordPropertyTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor_2, (app::PasswordPropertyTextAttribute * this_ptr, bool password))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Password, (app::PasswordPropertyTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02992000, bool, Equals, (app::PasswordPropertyTextAttribute * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::PasswordPropertyTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029920E0, bool, IsDefaultAttribute, (app::PasswordPropertyTextAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029921A0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::PasswordPropertyTextAttribute
