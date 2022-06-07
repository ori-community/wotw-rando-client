#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::StickSpawner {
    IL2CPP_REGISTER_METHOD(0x00E31ED0, app::Input_InputButtonProcessor *, get_ActivationButton, (app::StickSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9AD0, void, Awake, (app::StickSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E31F70, app::GameObject *, InstantiatePrefab, (app::StickSpawner * this_ptr, app::ICharacter * character))
    IL2CPP_REGISTER_METHOD(0x00E322D0, bool, CanInteractWithCharacter, (app::StickSpawner * this_ptr, app::ICharacter * character))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::StickSpawner * this_ptr))
}
