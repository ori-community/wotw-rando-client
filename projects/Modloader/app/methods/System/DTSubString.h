#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DTSubString__Boxed.h>

namespace app::classes::System::DTSubString {
    IL2CPP_REGISTER_METHOD(0x00213D30, char16_t, get_Item, (app::DTSubString__Boxed * this_ptr, int32_t relative_index))
}
