#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IntDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x006371F0, void, ctor_1, (app::IntDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00637270, void, ctor_2, (app::IntDebugMenuItem * this_ptr, app::String* path, app::String* text))
    IL2CPP_REGISTER_METHOD(0x00637350, void, ctor_3, (app::IntDebugMenuItem * this_ptr, app::String* path, app::String* text, app::Func_1_Int32_* getter, app::Action_1_Int32_* setter, int32_t min, int32_t max, int32_t speed, app::String* help, app::Func_1_String_* text_getter, bool single_increment, bool should_show_only_selected))
    IL2CPP_REGISTER_METHOD(0x00637470, void, IncrementValue, (app::IntDebugMenuItem * this_ptr, int32_t delta))
} // namespace app::classes::IntDebugMenuItem
