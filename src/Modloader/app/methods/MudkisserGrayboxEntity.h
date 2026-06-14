#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MudkisserGrayboxEntity.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MudkisserGrayboxEntity {
    IL2CPP_REGISTER_METHOD(0x00875900, bool, get_IsFlopping, app::MudkisserGrayboxEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875910, void, set_IsFlopping, app::MudkisserGrayboxEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00875960, void, Start, app::MudkisserGrayboxEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875B10, void, OnEnable, app::MudkisserGrayboxEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875C40, bool, get_IsInWater, app::MudkisserGrayboxEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875C70, app::Vector3, get_LastPositionInWater, app::MudkisserGrayboxEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875CA0, void, OnFixedUpdate, app::MudkisserGrayboxEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875F50, void, ctor, app::MudkisserGrayboxEntity* this_ptr)
} // namespace app::classes::MudkisserGrayboxEntity
