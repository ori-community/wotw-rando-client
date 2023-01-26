#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetObject.h>

namespace app::classes::PlayFab::DataModels::SetObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetObject * this_ptr))
}
