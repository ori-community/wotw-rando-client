#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::LayerMaskExtensions {
    IL2CPP_REGISTER_METHOD(0x02A2BC20, bool, Contains, (app::LayerMask mask, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x02A2BC30, app::LayerMask, Create_1, (app::String__Array * layer_names))
    IL2CPP_REGISTER_METHOD(0x02A2BC40, app::LayerMask, Create_2, (app::Int32__Array * layer_numbers))
    IL2CPP_REGISTER_METHOD(0x02A2BCA0, app::LayerMask, NamesToMask, (app::String__Array * layer_names))
    IL2CPP_REGISTER_METHOD(0x02A2BC40, app::LayerMask, LayerNumbersToMask, (app::Int32__Array * layer_numbers))
    IL2CPP_REGISTER_METHOD(0x02A2BD50, app::LayerMask, Inverse, (app::LayerMask original))
    IL2CPP_REGISTER_METHOD(0x02A2BD60, app::LayerMask, AddToMask, (app::LayerMask original, app::String__Array * layer_names))
    IL2CPP_REGISTER_METHOD(0x02A2BD80, app::LayerMask, RemoveFromMask, (app::LayerMask original, app::String__Array * layer_names))
    IL2CPP_REGISTER_METHOD(0x02A2BDB0, app::String__Array *, MaskToNames, (app::LayerMask original))
    IL2CPP_REGISTER_METHOD(0x02A2BFB0, app::Int32__Array *, MaskToNumbers, (app::LayerMask original))
    IL2CPP_REGISTER_METHOD(0x02A2C2B0, app::String *, MaskToString_1, (app::LayerMask original))
    IL2CPP_REGISTER_METHOD(0x02A2C350, app::String *, MaskToString_2, (app::LayerMask original, app::String * delimiter))
}
