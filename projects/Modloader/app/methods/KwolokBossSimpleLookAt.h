#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossSimpleLookAt.h>

namespace app::classes::KwolokBossSimpleLookAt {
    IL2CPP_REGISTER_METHOD(0x012E9B00, void, Start, (app::KwolokBossSimpleLookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E9CE0, void, Update, (app::KwolokBossSimpleLookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, FollowOri, (app::KwolokBossSimpleLookAt * this_ptr, bool follow))
    IL2CPP_REGISTER_METHOD(0x00998550, void, ctor, (app::KwolokBossSimpleLookAt * this_ptr))
} // namespace app::classes::KwolokBossSimpleLookAt
