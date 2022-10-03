#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BitLayer {
    IL2CPP_REGISTER_METHOD(0x01156D60, bool, ContainsLayer, (app::LayerMask layer_mask, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x02551C40, int32_t, MaskFromLayer, (int32_t layer))
    IL2CPP_REGISTER_METHOD(0x02551CD0, int32_t, LayerFromMask, (int32_t bitmask))
} // namespace app::classes::BitLayer
