#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageText.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::DamageText {
    IL2CPP_REGISTER_METHOD(0x00DC9AD0, void, Awake, (app::DamageText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9AE0, void, Start, (app::DamageText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (app::DamageText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (app::DamageText * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DC9D50, void, FixedUpdate, (app::DamageText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCA0C0, void, ChangeText, (app::DamageText * this_ptr, app::Damage* damage, bool is_player_damage))
    IL2CPP_REGISTER_METHOD(0x00DCA500, void, OnPoolSpawned, (app::DamageText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::DamageText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCA510, void, ctor, (app::DamageText * this_ptr))
} // namespace app::classes::DamageText
