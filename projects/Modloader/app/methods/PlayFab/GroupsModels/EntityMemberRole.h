#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityMemberRole.h>

namespace app::classes::PlayFab::GroupsModels::EntityMemberRole {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityMemberRole * this_ptr))
}
