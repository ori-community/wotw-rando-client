#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberWaterRandomActor.h>

namespace app::classes::UberWaterRandomActor {
    IL2CPP_REGISTER_METHOD(0x0129F710, void, OnValidate, (app::UberWaterRandomActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129F7A0, void, OnEnable, (app::UberWaterRandomActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129FA70, void, Update, (app::UberWaterRandomActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012A0270, void, RefreshWaterList, (app::UberWaterRandomActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012A0A40, void, RefreshBasePosition, (app::UberWaterRandomActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012A0C80, void, ctor, (app::UberWaterRandomActor * this_ptr))
} // namespace app::classes::UberWaterRandomActor
