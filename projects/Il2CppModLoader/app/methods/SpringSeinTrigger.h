#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpringSeinTrigger {
    IL2CPP_REGISTER_METHOD(0x009A8A00, void, OnCollisionEnter, (app::SpringSeinTrigger * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x009A8CA0, void, Spring, (app::SpringSeinTrigger * this_ptr, app::GameObject * target))
    IL2CPP_REGISTER_METHOD(0x009A8FF0, void, SpringSein, (app::SpringSeinTrigger * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x009A95E0, void, SpringKu, (app::SpringSeinTrigger * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x009A8220, void, ctor, (app::SpringSeinTrigger * this_ptr))
}
