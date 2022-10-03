#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SkeetoNestPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanUseAutosetupPositionInOnSand, (app::SkeetoNestPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F1E0, bool, get_ShouldLimitCount, (app::SkeetoNestPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F290, void, ClearPrefabLinks, (app::SkeetoNestPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F2A0, void, Spawn, (app::SkeetoNestPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F5C0, void, ctor, (app::SkeetoNestPlaceholder * this_ptr))
} // namespace app::classes::SkeetoNestPlaceholder
