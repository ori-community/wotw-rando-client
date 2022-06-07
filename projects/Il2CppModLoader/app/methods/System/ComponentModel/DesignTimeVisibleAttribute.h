#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::DesignTimeVisibleAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor_1, (app::DesignTimeVisibleAttribute * this_ptr, bool visible))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::DesignTimeVisibleAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Visible, (app::DesignTimeVisibleAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE5DE0, bool, Equals, (app::DesignTimeVisibleAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FE5EB0, int32_t, GetHashCode, (app::DesignTimeVisibleAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE5F90, bool, IsDefaultAttribute, (app::DesignTimeVisibleAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE6050, void, cctor, ())
}
