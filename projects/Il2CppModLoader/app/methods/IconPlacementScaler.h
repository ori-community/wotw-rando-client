#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IconPlacementScaler {
    IL2CPP_REGISTER_METHOD(0x00624540, void, PlaceIcon, (app::IconPlacementScaler * this_ptr, app::GameObject* icon, app::Vector3 location, bool is_teleportable))
    IL2CPP_REGISTER_METHOD(0x00624870, void, RemoveIcon, (app::IconPlacementScaler * this_ptr, app::GameObject* icon))
    IL2CPP_REGISTER_METHOD(0x00624930, void, UpdateIconPositions, (app::IconPlacementScaler * this_ptr, bool force_update))
    IL2CPP_REGISTER_METHOD(0x006250C0, void, ctor, (app::IconPlacementScaler * this_ptr))
} // namespace app::classes::IconPlacementScaler
