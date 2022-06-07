#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinBurrowSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinBurrowSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2F20, void, OnSetReferenceToSein, (app::SeinBurrowSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2F50, void, OnDestroy, (app::SeinBurrowSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinBurrowSpell * this_ptr))
}
