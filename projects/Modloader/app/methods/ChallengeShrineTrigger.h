#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ChallengeShrineTrigger.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::ChallengeShrineTrigger {
    IL2CPP_REGISTER_METHOD(0x01045060, void, OnTriggerEnter, (app::ChallengeShrineTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x010451C0, void, DoTrigger, (app::ChallengeShrineTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447380, void, ResetTrigger, (app::ChallengeShrineTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChallengeShrineTrigger * this_ptr))
} // namespace app::classes::ChallengeShrineTrigger
