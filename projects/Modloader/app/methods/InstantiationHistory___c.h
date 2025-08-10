#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstantiationHistory_c.h>
#include <Modloader/app/structs/Tuple_2_String_Single_.h>

namespace app::classes::InstantiationHistory___c {
    IL2CPP_REGISTER_METHOD(0x00635940, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InstantiationHistory_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00635A80, float, _Update_b__25_1, app::InstantiationHistory_c* this_ptr, app::Tuple_2_String_Single_* x)
    IL2CPP_REGISTER_METHOD(0x00635B10, bool, _Update_b__25_0, app::InstantiationHistory_c* this_ptr, app::Tuple_2_String_Single_* x)
} // namespace app::classes::InstantiationHistory___c
