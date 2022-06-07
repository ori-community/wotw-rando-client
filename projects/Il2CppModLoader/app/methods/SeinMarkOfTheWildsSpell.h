#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinMarkOfTheWildsSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinMarkOfTheWildsSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2A20, void, OnSetReferenceToSein, (app::SeinMarkOfTheWildsSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2A50, void, OnDestroy, (app::SeinMarkOfTheWildsSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinMarkOfTheWildsSpell * this_ptr))
}
