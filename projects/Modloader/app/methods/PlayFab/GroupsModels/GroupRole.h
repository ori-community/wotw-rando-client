#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroupRole.h>

namespace app::classes::PlayFab::GroupsModels::GroupRole {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupRole * this_ptr))
}
