#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ReadOnlySpan_1_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00219D80, void, ctor_1, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr, app::Byte__Array* array))
    IL2CPP_REGISTER_METHODINFO(0x0474B560, ReadOnlySpan_1_Byte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D4F0, ReadOnlySpan_1_Byte__get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A050, uint8_t, get_Item, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04711830, ReadOnlySpan_1_Byte__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00219D90, void, ctor_2, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr, app::Void* pointer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x00219EF0, app::String*, get_DebuggerDisplay, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021A060, bool, Equals, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x04784890, ReadOnlySpan_1_Byte__Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A070, int32_t, GetHashCode, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798968, ReadOnlySpan_1_Byte__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A080, uint8_t*, DangerousGetPinnableReference, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Byte_*, get_Pinnable, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, void*, get_ByteOffset, (app::ReadOnlySpan_1_Byte___Boxed * this_ptr))
} // namespace app::classes::System::ReadOnlySpan_1_Byte_
