#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityWithLineage.h>

namespace app::classes::PlayFab::GroupsModels::EntityWithLineage {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityWithLineage * this_ptr))
}
