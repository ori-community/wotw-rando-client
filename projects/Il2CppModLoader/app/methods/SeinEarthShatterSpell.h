#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinEarthShatterSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinEarthShatterSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB1A0, void, OnSetReferenceToSein, (app::SeinEarthShatterSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB1D0, void, OnDestroy, (app::SeinEarthShatterSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinEarthShatterSpell * this_ptr))
}
