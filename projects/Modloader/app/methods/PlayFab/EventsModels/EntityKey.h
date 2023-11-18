#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityKey_4.h>

namespace app::classes::PlayFab::EventsModels::EntityKey {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityKey_4 * this_ptr))
}
