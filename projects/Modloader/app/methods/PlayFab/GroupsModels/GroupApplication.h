#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroupApplication.h>

namespace app::classes::PlayFab::GroupsModels::GroupApplication {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupApplication * this_ptr))
}
