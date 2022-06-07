#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberAtlasPrefabAreas {
    IL2CPP_REGISTER_METHOD(0x013DE8B0, void, add_OnUpdated, (app::UberAtlasPrefabAreas * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x013DE9A0, void, remove_OnUpdated, (app::UberAtlasPrefabAreas * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x013DEA90, void, ctor, (app::UberAtlasPrefabAreas * this_ptr))
}
