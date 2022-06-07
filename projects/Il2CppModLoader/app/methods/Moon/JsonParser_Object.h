#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::JsonParser_Object {
    IL2CPP_REGISTER_METHOD(0x002458B0, void, ctor, (app::JsonParser_Object__Boxed * this_ptr, app::JsonParser * parser))
    IL2CPP_REGISTER_METHOD(0x00245960, app::Nullable_1_Moon_JsonParser_Slot_, TryGetSlot, (app::JsonParser_Object__Boxed * this_ptr, app::String__Array * known_keys, int32_t * known_key_index, app::String * * key))
    IL2CPP_REGISTER_METHODINFO(0x04763C78, JsonParser_Object_TryGetSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002459A0, void, Dispose, (app::JsonParser_Object__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E360, JsonParser_Object_Dispose__MethodInfo)
}
