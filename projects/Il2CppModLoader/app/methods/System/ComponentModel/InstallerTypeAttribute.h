#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::InstallerTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x01FEED00, void, ctor_1, (app::InstallerTypeAttribute * this_ptr, app::Type * installer_type))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::InstallerTypeAttribute * this_ptr, app::String * type_name))
    IL2CPP_REGISTER_METHOD(0x01FEED40, app::Type *, get_InstallerType, (app::InstallerTypeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEEE00, bool, Equals, (app::InstallerTypeAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::InstallerTypeAttribute * this_ptr))
}
