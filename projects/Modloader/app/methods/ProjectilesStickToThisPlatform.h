#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProjectilesStickToThisPlatform.h>

namespace app::classes::ProjectilesStickToThisPlatform {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::ProjectilesStickToThisPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::ProjectilesStickToThisPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ProjectilesStickToThisPlatform * this_ptr))
} // namespace app::classes::ProjectilesStickToThisPlatform
