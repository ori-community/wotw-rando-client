#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlaySoundPhaseAction.h>

namespace app::classes::PlaySoundPhaseAction {
    IL2CPP_REGISTER_METHOD(0x0117B380, bool, get_IsPerforming, app::PlaySoundPhaseAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::PlaySoundPhaseAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0117B430, void, Perform, app::PlaySoundPhaseAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::PlaySoundPhaseAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, _Perform_b__7_0, app::PlaySoundPhaseAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, _Perform_b__7_1, app::PlaySoundPhaseAction* this_ptr)
} // namespace app::classes::PlaySoundPhaseAction
