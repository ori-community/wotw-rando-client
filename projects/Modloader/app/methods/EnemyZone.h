#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyZone.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::EnemyZone {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::EnemyZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C86850, bool, InSameZone, app::Vector2 origin, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00C86A90, bool, IsInside, app::EnemyZone* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00C86B90, void, Awake, app::EnemyZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C87180, void, OnDestroy, app::EnemyZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EnemyZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C87240, void, cctor, )
} // namespace app::classes::EnemyZone
