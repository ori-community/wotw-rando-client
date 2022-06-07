#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ClothCage {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::ClothCage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::ClothCage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ClothCage * this_ptr))
}
