#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkCustomIDResult.h>

namespace app::classes::PlayFab::ClientModels::LinkCustomIDResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkCustomIDResult * this_ptr))
}
