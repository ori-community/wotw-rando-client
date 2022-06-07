#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Span_1_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, (app::Span_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FA50, Span_1_Byte__get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF9C0, uint8_t *, get_Item, (app::Span_1_Byte___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047473E8, Span_1_Byte__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02774C60, app::Span_1_Byte_, op_Implicit, (app::Byte__Array * array))
    IL2CPP_REGISTER_METHODINFO(0x04770B10, Span_1_Byte__op_Implicit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF850, void, ctor, (app::Span_1_Byte___Boxed * this_ptr, app::Byte__Array * array))
    IL2CPP_REGISTER_METHOD(0x001FF860, app::String *, get_DebuggerDisplay, (app::Span_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF9D0, bool, Equals, (app::Span_1_Byte___Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x04752220, Span_1_Byte__Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF9E0, int32_t, GetHashCode, (app::Span_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755618, Span_1_Byte__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Byte_ *, get_Pinnable, (app::Span_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, void *, get_ByteOffset, (app::Span_1_Byte___Boxed * this_ptr))
}
