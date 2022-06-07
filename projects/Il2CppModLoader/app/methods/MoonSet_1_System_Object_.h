#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonSet_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AF7920, int32_t, get_Count, (app::MoonSet_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF7730, void, Add, (app::MoonSet_1_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02AF7810, void, Remove, (app::MoonSet_1_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01584050, app::Object *, GetValueOfType, (app::MoonSet_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF78F0, app::Object *, GetValue, (app::MoonSet_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02AF7950, void, PopulateFromChildren, (app::MoonSet_1_System_Object_ * this_ptr, app::Transform * parent))
    IL2CPP_REGISTER_METHOD(0x02AF7A10, void, PopulateFromList, (app::MoonSet_1_System_Object_ * this_ptr, app::List_1_System_Object_ * values))
    IL2CPP_REGISTER_METHOD(0x02AF7AD0, bool, Contains, (app::MoonSet_1_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02AF7B00, void, ctor, (app::MoonSet_1_System_Object_ * this_ptr))
}
