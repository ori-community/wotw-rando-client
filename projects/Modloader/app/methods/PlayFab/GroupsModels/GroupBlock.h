#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroupBlock.h>

namespace app::classes::PlayFab::GroupsModels::GroupBlock {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupBlock * this_ptr))
}
