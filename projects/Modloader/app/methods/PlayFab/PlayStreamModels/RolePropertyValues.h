#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RolePropertyValues.h>

namespace app::classes::PlayFab::PlayStreamModels::RolePropertyValues {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RolePropertyValues * this_ptr))
}
