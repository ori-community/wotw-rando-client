#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnSafeCharBuffer__Boxed.h>

namespace app::classes::System::UnSafeCharBuffer {
    IL2CPP_REGISTER_METHOD(0x00206930, void, ctor, app::UnSafeCharBuffer__Boxed* this_ptr, char16_t* buffer, int32_t buffer_size)
    IL2CPP_REGISTER_METHOD(0x00206940, void, AppendString, app::UnSafeCharBuffer__Boxed* this_ptr, app::String* string_to_append)
} // namespace app::classes::System::UnSafeCharBuffer
