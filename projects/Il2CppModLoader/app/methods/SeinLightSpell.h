#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinLightSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinLightSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008925E0, void, OnSetReferenceToSein, (app::SeinLightSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00892610, void, OnDestroy, (app::SeinLightSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinLightSpell * this_ptr))
}
