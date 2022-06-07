#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SoundSize {
    IL2CPP_REGISTER_METHOD(0x00EECE30, app::SoundSize *, get_Everywhere, ())
    IL2CPP_REGISTER_METHOD(0x00EECFC0, void, ctor, (app::SoundSize * this_ptr))
}
