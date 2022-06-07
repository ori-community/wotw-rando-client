#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Group {
    IL2CPP_REGISTER_METHOD(0x00243CE0, void, ctor, (app::P3D_Group__Boxed * this_ptr, int32_t new_index))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Implicit_1, (app::P3D_Group group))
    IL2CPP_REGISTER_METHOD(0x03091AB0, app::P3D_Group, op_Implicit_2, (int32_t index))
}
