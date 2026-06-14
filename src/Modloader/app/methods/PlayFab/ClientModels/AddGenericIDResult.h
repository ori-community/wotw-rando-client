#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddGenericIDResult.h>

namespace app::classes::PlayFab::ClientModels::AddGenericIDResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AddGenericIDResult* this_ptr)
}
