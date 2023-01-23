#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossTendrilLengthBrain.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/Enum.h>

namespace app::classes::KwolokBossTendrilLengthBrain {
    IL2CPP_REGISTER_METHOD(0x012EE510, void, Start, (app::KwolokBossTendrilLengthBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EE5A0, app::Enum__Array*, GetEntries, (app::KwolokBossTendrilLengthBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EE630, app::Enum, Evaluate, (app::KwolokBossTendrilLengthBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::KwolokBossTendrilLengthBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::KwolokBossTendrilLengthBrain * this_ptr))
} // namespace app::classes::KwolokBossTendrilLengthBrain
