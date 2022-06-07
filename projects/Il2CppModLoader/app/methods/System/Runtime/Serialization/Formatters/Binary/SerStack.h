#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::SerStack {
    IL2CPP_REGISTER_METHOD(0x01DA1140, void, ctor, (app::SerStack * this_ptr, app::String * stack_id))
    IL2CPP_REGISTER_METHOD(0x01DA11E0, void, Push, (app::SerStack * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01DA1350, app::Object *, Pop, (app::SerStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA13D0, void, IncreaseCapacity, (app::SerStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA14A0, app::Object *, Peek, (app::SerStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA14F0, app::Object *, PeekPeek, (app::SerStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA1540, bool, IsEmpty, (app::SerStack * this_ptr))
}
