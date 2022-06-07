#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::JsonParser_Array {
    IL2CPP_REGISTER_METHOD(0x002458B0, void, ctor, (app::JsonParser_Array__Boxed * this_ptr, app::JsonParser * parser))
    IL2CPP_REGISTER_METHOD(0x00245900, app::Nullable_1_Moon_JsonParser_Slot_, TryGetSlot, (app::JsonParser_Array__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755448, JsonParser_Array_TryGetSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00245930, void, Dispose, (app::JsonParser_Array__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754BE0, JsonParser_Array_Dispose__MethodInfo)
}
