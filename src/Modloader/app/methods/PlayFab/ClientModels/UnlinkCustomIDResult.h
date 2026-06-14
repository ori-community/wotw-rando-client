#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkCustomIDResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkCustomIDResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnlinkCustomIDResult* this_ptr)
}
