#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateBansResult.h>

namespace app::classes::PlayFab::ServerModels::UpdateBansResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateBansResult* this_ptr)
}
