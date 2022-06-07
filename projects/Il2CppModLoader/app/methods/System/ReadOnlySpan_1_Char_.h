#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ReadOnlySpan_1_Char_ {
    IL2CPP_REGISTER_METHOD(0x0021A2D0, uint16_t, get_Item, (app::ReadOnlySpan_1_Char___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04741BB8, ReadOnlySpan_1_Char__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, (app::ReadOnlySpan_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476DCA0, ReadOnlySpan_1_Char__get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A080, uint16_t *, DangerousGetPinnableReference, (app::ReadOnlySpan_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774768, ReadOnlySpan_1_Char__DangerousGetPinnableReference__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A160, void, ctor_1, (app::ReadOnlySpan_1_Char___Boxed * this_ptr, app::Void * pointer, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x04710458, ReadOnlySpan_1_Char___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00219D80, void, ctor_2, (app::ReadOnlySpan_1_Char___Boxed * this_ptr, app::Char__Array * array))
    IL2CPP_REGISTER_METHOD(0x0021A170, app::String *, get_DebuggerDisplay, (app::ReadOnlySpan_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021A2E0, bool, Equals, (app::ReadOnlySpan_1_Char___Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x047557D0, ReadOnlySpan_1_Char__Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A2F0, int32_t, GetHashCode, (app::ReadOnlySpan_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791BB0, ReadOnlySpan_1_Char__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Char_ *, get_Pinnable, (app::ReadOnlySpan_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, void *, get_ByteOffset, (app::ReadOnlySpan_1_Char___Boxed * this_ptr))
}
