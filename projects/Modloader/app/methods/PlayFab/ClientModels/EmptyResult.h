#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EmptyResult.h>

namespace app::classes::PlayFab::ClientModels::EmptyResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyResult * this_ptr))
}
