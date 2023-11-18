#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerPuppetCharacterStates.h>

namespace app::classes::PlayerPuppetCharacterStates {
    IL2CPP_REGISTER_METHOD(0x01428220, bool, IsPerforming, (app::PlayerPuppetCharacterStates * this_ptr, int32_t state_id))
    IL2CPP_REGISTER_METHOD(0x014283E0, void, SetStatePerforming, (app::PlayerPuppetCharacterStates * this_ptr, int32_t state_id, bool value))
    IL2CPP_REGISTER_METHOD(0x01428520, void, RemoveAllStates, (app::PlayerPuppetCharacterStates * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01428630, void, ctor, (app::PlayerPuppetCharacterStates * this_ptr))
} // namespace app::classes::PlayerPuppetCharacterStates
