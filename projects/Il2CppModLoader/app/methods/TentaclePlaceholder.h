#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TentaclePlaceholder {
    IL2CPP_REGISTER_METHOD(0x010D6940, app::GameObject *, get_Prefab, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D6950, bool, get_IsOnScreen, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D6B30, bool, get_IsOnScreenPadded, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D6D10, bool, get_IsOnScreenPaddedExtended, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F290, void, ClearPrefabLinks, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D6EF0, void, Spawn, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::TentaclePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D7050, void, ctor, (app::TentaclePlaceholder * this_ptr))
}
