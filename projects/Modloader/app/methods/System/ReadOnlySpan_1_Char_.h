#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Pinnable_1_Char_.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Char___Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::System::ReadOnlySpan_1_Char_ {
    IL2CPP_REGISTER_METHOD(0x0021A2D0, char16_t, get_Item, app::ReadOnlySpan_1_Char___Boxed* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, app::ReadOnlySpan_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021A080, char16_t*, DangerousGetPinnableReference, app::ReadOnlySpan_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021A160, void, ctor_1, app::ReadOnlySpan_1_Char___Boxed* this_ptr, app::Void* pointer, int32_t length)
    IL2CPP_REGISTER_METHOD(0x00219D80, void, ctor_2, app::ReadOnlySpan_1_Char___Boxed* this_ptr, app::Char__Array* array)
    IL2CPP_REGISTER_METHOD(0x0021A170, app::String*, get_DebuggerDisplay, app::ReadOnlySpan_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0021A2E0, bool, Equals, app::ReadOnlySpan_1_Char___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0021A2F0, int32_t, GetHashCode, app::ReadOnlySpan_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Char_*, get_Pinnable, app::ReadOnlySpan_1_Char___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C10, void*, get_ByteOffset, app::ReadOnlySpan_1_Char___Boxed* this_ptr)
} // namespace app::classes::System::ReadOnlySpan_1_Char_
