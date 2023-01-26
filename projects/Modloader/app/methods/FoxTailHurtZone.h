#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FoxTailHurtZone.h>
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::FoxTailHurtZone {
    IL2CPP_REGISTER_METHOD(0x01633ED0, void, add_ReceiveDamageCallback, (app::FoxTailHurtZone * this_ptr, app::Action_1_Damage_* value))
    IL2CPP_REGISTER_METHOD(0x01633FC0, void, remove_ReceiveDamageCallback, (app::FoxTailHurtZone * this_ptr, app::Action_1_Damage_* value))
    IL2CPP_REGISTER_METHOD(0x016340B0, void, OnRecieveDamage, (app::FoxTailHurtZone * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x01634150, void, ctor, (app::FoxTailHurtZone * this_ptr))
} // namespace app::classes::FoxTailHurtZone
