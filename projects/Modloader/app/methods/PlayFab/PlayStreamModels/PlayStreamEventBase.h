#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayStreamEventBase.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayStreamEventBase {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayStreamEventBase * this_ptr))
}
