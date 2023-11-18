#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityKey_2.h>

namespace app::classes::PlayFab::CloudScriptModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityKey_2 * this_ptr))
}
