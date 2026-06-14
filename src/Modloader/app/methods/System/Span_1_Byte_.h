#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Pinnable_1_Byte_.h>
#include <Modloader/app/structs/Span_1_Byte_.h>
#include <Modloader/app/structs/Span_1_Byte___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Span_1_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Length, app::Span_1_Byte___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FF9C0, uint8_t*, get_Item, app::Span_1_Byte___Boxed* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02774C60, app::Span_1_Byte_, op_Implicit, app::Byte__Array* array)
    IL2CPP_REGISTER_METHOD(0x001FF850, void, ctor, app::Span_1_Byte___Boxed* this_ptr, app::Byte__Array* array)
    IL2CPP_REGISTER_METHOD(0x001FF860, app::String*, get_DebuggerDisplay, app::Span_1_Byte___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FF9D0, bool, Equals, app::Span_1_Byte___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001FF9E0, int32_t, GetHashCode, app::Span_1_Byte___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Pinnable_1_Byte_*, get_Pinnable, app::Span_1_Byte___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C10, void*, get_ByteOffset, app::Span_1_Byte___Boxed* this_ptr)
} // namespace app::classes::System::Span_1_Byte_
