#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinCharacterExtensions {
    IL2CPP_REGISTER_METHOD(0x00A44160, bool, IsPeforming, (app::SeinCharacter * character, app::SeinEvent__Enum evt))
    IL2CPP_REGISTER_METHODINFO(0x04740E00, SeinCharacterExtensions_IsPeforming__MethodInfo)
} // namespace app::classes::SeinCharacterExtensions
