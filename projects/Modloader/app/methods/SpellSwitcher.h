#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellSwitcher.h>

namespace app::classes::SpellSwitcher {
    IL2CPP_REGISTER_METHOD(0x00944270, void, Start, app::SpellSwitcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00944420, void, OnDestroy, app::SpellSwitcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009445C0, void, Update, app::SpellSwitcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00944960, void, SetSpell, app::SpellSwitcher* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00944A90, void, OnGUI, app::SpellSwitcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617EB0, void, OnRestoreCheckpoint, app::SpellSwitcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SpellSwitcher* this_ptr)
} // namespace app::classes::SpellSwitcher
