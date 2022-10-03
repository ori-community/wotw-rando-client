#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::SortingLayer {
    IL2CPP_REGISTER_METHOD(0x02C60C10, int32_t, GetLayerValueFromID, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x02C60C60, int32_t, NameToID, (app::String * name))
} // namespace app::classes::UnityEngine::SortingLayer
