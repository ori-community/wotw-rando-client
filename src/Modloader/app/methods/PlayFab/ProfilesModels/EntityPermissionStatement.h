#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityPermissionStatement.h>

namespace app::classes::PlayFab::ProfilesModels::EntityPermissionStatement {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityPermissionStatement* this_ptr)
}
