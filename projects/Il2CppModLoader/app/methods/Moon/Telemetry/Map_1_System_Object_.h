#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Map_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Object_*, get_Cells, (app::Map_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF3460, app::Object*, get_Item, (app::Map_1_System_Object_ * this_ptr, int32_t row, int32_t column))
    IL2CPP_REGISTER_METHOD(0x02AF3500, void, set_Item, (app::Map_1_System_Object_ * this_ptr, int32_t row, int32_t column, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02AF3700, bool, HasKey, (app::Map_1_System_Object_ * this_ptr, int32_t row, int32_t column))
    IL2CPP_REGISTER_METHOD(0x02AF37B0, void, ctor, (app::Map_1_System_Object_ * this_ptr))
} // namespace app::classes::Moon::Telemetry::Map_1_System_Object_
