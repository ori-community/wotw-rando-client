#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WindVent.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WindVent_State__Enum.h>

namespace app::classes::WindVent {
    IL2CPP_REGISTER_METHOD(0x005790E0, void, FixedUpdate, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00579260, void, StartAnticipation, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005795E0, void, StartBurst, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00579C50, void, ActivateVentGraphic, (app::WindVent * this_ptr, bool active))
    IL2CPP_REGISTER_METHOD(0x00579D80, void, ChangeState, (app::WindVent * this_ptr, app::WindVent_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x0057A0A0, void, StartCooldown, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A130, void, Awake, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A200, void, OnDestroy, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A2A0, void, Start, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A2D0, void, EnableBeamParticleEmission, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A3B0, void, DisableBeamParticleEmission, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A490, void, Serialize, (app::WindVent * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_IsSuspended, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A590, void, set_IsSuspended, (app::WindVent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A5B0, void, set_Mask, (app::WindVent * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::GameObject*, GetDynamicGraphicTarget, (app::WindVent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A670, void, ctor, (app::WindVent * this_ptr))
} // namespace app::classes::WindVent
