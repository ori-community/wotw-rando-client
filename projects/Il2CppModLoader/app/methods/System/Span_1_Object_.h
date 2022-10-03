#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Span_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x001FFA00, app::String*, get_DebuggerDisplay, (app::Span_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, (app::Span_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF9C0, app::Object**, get_Item, (app::Span_1_Object___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Object_*, get_Pinnable, (app::Span_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, void*, get_ByteOffset, (app::Span_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FF9F0, void, ctor, (app::Span_1_Object___Boxed * this_ptr, app::Object__Array* array))
    IL2CPP_REGISTER_METHOD(0x001FFB60, bool, Equals, (app::Span_1_Object___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x04713FD8, Span_1_Object__Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FFB70, int32_t, GetHashCode, (app::Span_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B390, Span_1_Object__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02775030, app::Span_1_Object_, op_Implicit, (app::Object__Array * array))
} // namespace app::classes::System::Span_1_Object_
