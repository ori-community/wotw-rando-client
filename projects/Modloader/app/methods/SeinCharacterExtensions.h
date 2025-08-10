#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinEvent__Enum.h>

namespace app::classes::SeinCharacterExtensions {
    IL2CPP_REGISTER_METHOD(0x00A44160, bool, IsPeforming, app::SeinCharacter* character, app::SeinEvent__Enum evt)
}
