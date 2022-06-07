#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ParticleAutodestruct {
    IL2CPP_REGISTER_METHOD(0x004445B0, void, Start, (app::ParticleAutodestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444720, void, Update, (app::ParticleAutodestruct * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ParticleAutodestruct * this_ptr))
}
