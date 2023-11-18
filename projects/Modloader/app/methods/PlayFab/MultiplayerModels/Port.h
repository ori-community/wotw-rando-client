#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Port.h>

namespace app::classes::PlayFab::MultiplayerModels::Port {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Port * this_ptr))
}
