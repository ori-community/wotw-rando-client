#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinAnimationSystemSwitcher {
    IL2CPP_REGISTER_METHOD(0x00D84720, void, Start, (app::SeinAnimationSystemSwitcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D84730, void, Update, (app::SeinAnimationSystemSwitcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D848F0, void, ToggleOldSystem, (app::SeinAnimationSystemSwitcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D84A50, void, ToggleNewSystem, (app::SeinAnimationSystemSwitcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D84B70, void, ctor, (app::SeinAnimationSystemSwitcher * this_ptr))
} // namespace app::classes::SeinAnimationSystemSwitcher
