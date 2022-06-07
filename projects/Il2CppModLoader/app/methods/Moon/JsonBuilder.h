#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::JsonBuilder {
    IL2CPP_REGISTER_METHOD(0x030EB650, int32_t, get_Capacity, (app::JsonBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EB680, app::JsonBuilder_Slot, RootSlot, (app::JsonBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475DD90, JsonBuilder_RootSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EB760, app::JsonBuilder_Slot, NewSlot, (app::JsonBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772900, JsonBuilder_NewSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EB840, void, Clear, (app::JsonBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477EE40, JsonBuilder_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EB910, void, ResetUnsafe, (app::JsonBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B65290, app::String *, ToString, (app::JsonBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030EB9C0, void, WriteString_1, (app::JsonBuilder * this_ptr, app::String * str))
    IL2CPP_REGISTER_METHOD(0x030EBA90, void, WriteString_2, (app::JsonBuilder * this_ptr, app::String * str, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x0471A5B8, JsonBuilder_WriteString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030EBBD0, void, WriteStringImpl, (app::JsonBuilder * this_ptr, app::String * str, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x030EBFC0, void, WriteF32, (app::JsonBuilder * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x030EC0E0, void, WriteF64, (app::JsonBuilder * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x030EC290, void, WriteDateTime, (app::JsonBuilder * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x030EC6A0, void, ctor, (app::JsonBuilder * this_ptr))
}
