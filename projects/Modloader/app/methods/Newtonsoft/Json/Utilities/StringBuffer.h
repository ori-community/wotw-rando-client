#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StringBuffer__Boxed.h>
#include <Modloader/app/structs/IArrayPool_1_System_Char_.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Utilities::StringBuffer {
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Position, (app::StringBuffer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_Position, (app::StringBuffer__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsEmpty, (app::StringBuffer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002409C0, void, ctor_1, (app::StringBuffer__Boxed * this_ptr, app::IArrayPool_1_System_Char_* buffer_pool, int32_t inital_size))
    IL2CPP_REGISTER_METHOD(0x002409F0, void, ctor_2, (app::StringBuffer__Boxed * this_ptr, app::Char__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x00240A00, void, Append_1, (app::StringBuffer__Boxed * this_ptr, app::IArrayPool_1_System_Char_* buffer_pool, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x00240A10, void, Append_2, (app::StringBuffer__Boxed * this_ptr, app::IArrayPool_1_System_Char_* buffer_pool, app::Char__Array* buffer, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00240A20, void, Clear, (app::StringBuffer__Boxed * this_ptr, app::IArrayPool_1_System_Char_* buffer_pool))
    IL2CPP_REGISTER_METHOD(0x00240A60, void, EnsureSize, (app::StringBuffer__Boxed * this_ptr, app::IArrayPool_1_System_Char_* buffer_pool, int32_t append_length))
    IL2CPP_REGISTER_METHOD(0x00240AD0, app::String*, ToString_1, (app::StringBuffer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00240B00, app::String*, ToString_2, (app::StringBuffer__Boxed * this_ptr, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Char__Array*, get_InternalBuffer, (app::StringBuffer__Boxed * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Utilities::StringBuffer
