#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FirewhirlBeam.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner_c.h>

namespace app::classes::FirewhirlBeamSpawner___c {
    IL2CPP_REGISTER_METHOD(0x01266690, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FirewhirlBeamSpawner_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012667D0, bool, _UpdateBeamDamageDealing_b__57_0, app::FirewhirlBeamSpawner_c* this_ptr, app::FirewhirlBeam* b)
} // namespace app::classes::FirewhirlBeamSpawner___c
