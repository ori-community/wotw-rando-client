#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkPSNAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkPSNAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnlinkPSNAccountResult* this_ptr)
}
