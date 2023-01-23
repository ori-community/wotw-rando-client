#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Object___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Pinnable_1_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::System::ReadOnlySpan_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x0021A460, app::String*, get_DebuggerDisplay, (app::ReadOnlySpan_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, (app::ReadOnlySpan_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021A5C0, app::Object*, get_Item, (app::ReadOnlySpan_1_Object___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Object_*, get_Pinnable, (app::ReadOnlySpan_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, void*, get_ByteOffset, (app::ReadOnlySpan_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00219D80, void, ctor_1, (app::ReadOnlySpan_1_Object___Boxed * this_ptr, app::Object__Array* array))
    IL2CPP_REGISTER_METHOD(0x0021A300, void, ctor_2, (app::ReadOnlySpan_1_Object___Boxed * this_ptr, app::Void* pointer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x0021A5D0, bool, Equals, (app::ReadOnlySpan_1_Object___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x0477B8A0, ReadOnlySpan_1_Object__Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A5E0, int32_t, GetHashCode, (app::ReadOnlySpan_1_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C3B0, ReadOnlySpan_1_Object__GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021A080, app::Object**, DangerousGetPinnableReference, (app::ReadOnlySpan_1_Object___Boxed * this_ptr))
} // namespace app::classes::System::ReadOnlySpan_1_Object_
