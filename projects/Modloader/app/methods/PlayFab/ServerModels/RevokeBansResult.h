#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RevokeBansResult.h>

namespace app::classes::PlayFab::ServerModels::RevokeBansResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RevokeBansResult * this_ptr))
}
