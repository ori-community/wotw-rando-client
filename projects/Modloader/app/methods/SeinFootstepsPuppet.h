#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinFootstepsPuppet.h>

namespace app::classes::SeinFootstepsPuppet {
    IL2CPP_REGISTER_METHOD(0x00AE2690, int32_t, get_Id, (app::SeinFootstepsPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinFootstepsPuppet * this_ptr))
} // namespace app::classes::SeinFootstepsPuppet
