#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpawnTextBoxes {
    IL2CPP_REGISTER_METHOD(0x00EF66A0, void, Perform, (app::SpawnTextBoxes * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::SpawnTextBoxes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF6810, bool, get_IsPerforming, (app::SpawnTextBoxes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpawnTextBoxes * this_ptr))
} // namespace app::classes::SpawnTextBoxes
