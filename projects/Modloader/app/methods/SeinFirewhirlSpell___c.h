#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FirewhirlBeam.h>
#include <Modloader/app/structs/SeinFirewhirlSpell_c.h>

namespace app::classes::SeinFirewhirlSpell___c {
    IL2CPP_REGISTER_METHOD(0x00AE0BD0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SeinFirewhirlSpell_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE0D10, bool, _UpdateBeamDamageDealing_b__31_0, app::SeinFirewhirlSpell_c* this_ptr, app::FirewhirlBeam* a)
} // namespace app::classes::SeinFirewhirlSpell___c
