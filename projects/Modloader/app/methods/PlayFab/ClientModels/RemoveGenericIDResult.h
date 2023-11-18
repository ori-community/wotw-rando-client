#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveGenericIDResult.h>

namespace app::classes::PlayFab::ClientModels::RemoveGenericIDResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemoveGenericIDResult * this_ptr))
}
