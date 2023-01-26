#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroupPropertyValues.h>

namespace app::classes::PlayFab::PlayStreamModels::GroupPropertyValues {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GroupPropertyValues * this_ptr))
}
