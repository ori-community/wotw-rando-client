#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinTimeWarpSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinTimeWarpSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9E970, void, OnSetReferenceToSein, (app::SeinTimeWarpSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9E9A0, void, OnDestroy, (app::SeinTimeWarpSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinTimeWarpSpell * this_ptr))
}
