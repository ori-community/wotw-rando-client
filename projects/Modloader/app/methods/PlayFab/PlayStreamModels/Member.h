#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Member.h>

namespace app::classes::PlayFab::PlayStreamModels::Member {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Member * this_ptr))
}
