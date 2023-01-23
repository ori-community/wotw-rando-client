#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTimeRawInfo__Boxed.h>

namespace app::classes::System::DateTimeRawInfo {
    IL2CPP_REGISTER_METHOD(0x00215B80, void, Init, (app::DateTimeRawInfo__Boxed * this_ptr, int32_t* number_buffer))
    IL2CPP_REGISTER_METHOD(0x00215BB0, void, AddNumber, (app::DateTimeRawInfo__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00215BD0, int32_t, GetNumber, (app::DateTimeRawInfo__Boxed * this_ptr, int32_t index))
} // namespace app::classes::System::DateTimeRawInfo
