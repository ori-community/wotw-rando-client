#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectResult.h>

namespace app::classes::PlayFab::DataModels::ObjectResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ObjectResult* this_ptr)
}
