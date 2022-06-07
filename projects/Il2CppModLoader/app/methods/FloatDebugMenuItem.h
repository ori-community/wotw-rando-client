#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FloatDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x01270930, void, ctor_1, (app::FloatDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012709B0, void, ctor_2, (app::FloatDebugMenuItem * this_ptr, app::String * path, app::String * text))
    IL2CPP_REGISTER_METHOD(0x01270A90, void, ctor_3, (app::FloatDebugMenuItem * this_ptr, app::String * path, app::String * text, app::Func_1_Single_ * getter, app::Action_1_Single_ * setter, float min, float max, float speed, app::String * help, app::Func_1_String_ * text_getter, bool should_show_only_selected))
    IL2CPP_REGISTER_METHOD(0x01270B60, void, IncrementValue, (app::FloatDebugMenuItem * this_ptr, int32_t delta))
}
