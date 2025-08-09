#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityLineage.h>

namespace app::classes::PlayFab::ProfilesModels::EntityLineage {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityLineage* this_ptr)
}
