#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinSpiritCrescentSpell.h>
#include <Modloader/app/structs/SpiritCrescent.h>
#include <Modloader/app/structs/SpiritCrescent_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritCrescent {
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, app::SpiritCrescent* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D2620, void, set_Mask, app::SpiritCrescent* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x011D2630, void, Awake, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D2980, void, OnDestroy, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D2C90, void, Throw, app::SpiritCrescent* this_ptr, app::SeinSpiritCrescentSpell* spell, app::Vector3 direction, float speed)
    IL2CPP_REGISTER_METHOD(0x011D2E90, void, Despawn, app::SpiritCrescent* this_ptr, bool caught)
    IL2CPP_REGISTER_METHOD(0x011D2FB0, void, Explode, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D32C0, void, PerformCatchAssist, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D3720, void, EnterState, app::SpiritCrescent* this_ptr, app::SpiritCrescent_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00BE9110, float, get_Period, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D3B00, void, Update, app::SpiritCrescent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D4580, bool, ShouldDealDamage, app::SpiritCrescent* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x011D4700, void, OnDamageDealt, app::SpiritCrescent* this_ptr, app::DamageDealer* dealer, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x011D4710, void, ctor, app::SpiritCrescent* this_ptr)
} // namespace app::classes::SpiritCrescent
