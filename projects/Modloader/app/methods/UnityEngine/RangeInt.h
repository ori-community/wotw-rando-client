#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RangeInt__Boxed.h>

namespace app::classes::UnityEngine::RangeInt {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, app::RangeInt__Boxed* this_ptr, int32_t start, int32_t length)
    IL2CPP_REGISTER_METHOD(0x00217900, int32_t, get_end, app::RangeInt__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::RangeInt
