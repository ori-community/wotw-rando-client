#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuPushWall.h>

namespace app::classes::KuPushWall {
    IL2CPP_REGISTER_METHOD(0x01245850, void, OnSetReferenceToKu, (app::KuPushWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (app::KuPushWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01245880, void, UpdateState, (app::KuPushWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01245A40, bool, ShouldPlayPushWall, (app::KuPushWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::KuPushWall * this_ptr))
} // namespace app::classes::KuPushWall
