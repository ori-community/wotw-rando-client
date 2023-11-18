#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatAndMouseKuroLandZone.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>

namespace app::classes::CatAndMouseKuroLandZone {
    IL2CPP_REGISTER_METHOD(0x010283C0, void, Awake, (app::CatAndMouseKuroLandZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::CatAndMouseKuroLandZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CatAndMouseKuroLandZone * this_ptr))
} // namespace app::classes::CatAndMouseKuroLandZone
