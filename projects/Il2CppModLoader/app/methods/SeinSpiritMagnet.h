#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinSpiritMagnet {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinSpiritMagnet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A010, float, get_AttractionDistance, (app::SeinSpiritMagnet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A1A0, void, OnSetReferenceToSein, (app::SeinSpiritMagnet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A280, void, ctor, (app::SeinSpiritMagnet * this_ptr))
} // namespace app::classes::SeinSpiritMagnet
