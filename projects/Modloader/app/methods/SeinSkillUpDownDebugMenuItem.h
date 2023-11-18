#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinSkillUpDownDebugMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SeinSkillUpDownDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x005DAE00, void, ctor, (app::SeinSkillUpDownDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x005DAFC0, void, OnSelectedFixedUpdate, (app::SeinSkillUpDownDebugMenuItem * this_ptr))
} // namespace app::classes::SeinSkillUpDownDebugMenuItem
