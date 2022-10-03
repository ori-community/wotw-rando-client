#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::JsonBuilder_Array {
    IL2CPP_REGISTER_METHOD(0x002453D0, void, ctor, (app::JsonBuilder_Array__Boxed * this_ptr, int32_t ident, app::JsonBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x002453E0, void, Dispose, (app::JsonBuilder_Array__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756F98, JsonBuilder_Array_Dispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002453F0, app::JsonBuilder_Slot, Slot, (app::JsonBuilder_Array__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759BB8, JsonBuilder_Array_Slot__MethodInfo)
} // namespace app::classes::Moon::JsonBuilder_Array
