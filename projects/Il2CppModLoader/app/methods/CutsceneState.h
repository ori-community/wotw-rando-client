#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CutsceneState {
    IL2CPP_REGISTER_METHOD(0x00DBECE0, void, OnUpdate, (app::CutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBEE50, void, RegisterTransition, (app::CutsceneState * this_ptr, app::CutsceneTransition* transition))
    IL2CPP_REGISTER_METHOD(0x00DBEF00, void, UnregisterTransition, (app::CutsceneState * this_ptr, app::CutsceneTransition* transition))
    IL2CPP_REGISTER_METHOD(0x00DBEFA0, void, ctor, (app::CutsceneState * this_ptr))
} // namespace app::classes::CutsceneState
