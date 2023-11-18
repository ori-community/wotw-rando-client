#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LaserShooterEntityPlaceholder.h>

namespace app::classes::LaserShooterEntityPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::LaserShooterEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::LaserShooterEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::LaserShooterEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F13BC0, void, ctor, (app::LaserShooterEntityPlaceholder * this_ptr))
} // namespace app::classes::LaserShooterEntityPlaceholder
