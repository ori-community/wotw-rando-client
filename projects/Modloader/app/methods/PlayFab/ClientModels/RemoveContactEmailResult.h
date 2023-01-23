#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RemoveContactEmailResult.h>

namespace app::classes::PlayFab::ClientModels::RemoveContactEmailResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveContactEmailResult * this_ptr))
}
