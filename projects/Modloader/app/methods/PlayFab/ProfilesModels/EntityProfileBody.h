#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityProfileBody.h>

namespace app::classes::PlayFab::ProfilesModels::EntityProfileBody {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityProfileBody * this_ptr))
}
