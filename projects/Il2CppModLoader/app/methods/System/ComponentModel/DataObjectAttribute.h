#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::DataObjectAttribute {
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor_1, (app::DataObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor_2, (app::DataObjectAttribute * this_ptr, bool is_data_object))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDataObject, (app::DataObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FDE300, bool, Equals, (app::DataObjectAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FDE3D0, int32_t, GetHashCode, (app::DataObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FDE3E0, bool, IsDefaultAttribute, (app::DataObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FDE4A0, void, cctor, ())
}
