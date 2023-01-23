#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LinkXboxAccountResult.h>

namespace app::classes::PlayFab::ClientModels::LinkXboxAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkXboxAccountResult * this_ptr))
}
