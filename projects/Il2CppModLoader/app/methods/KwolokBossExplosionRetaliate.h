#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KwolokBossExplosionRetaliate {
    IL2CPP_REGISTER_METHOD(0x012DFF60, void, Start, (app::KwolokBossExplosionRetaliate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0140, void, OnDrawGizmos, (app::KwolokBossExplosionRetaliate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0230, void, Update, (app::KwolokBossExplosionRetaliate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E07E0, void, SpawnExplosion, (app::KwolokBossExplosionRetaliate * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793AD0, KwolokBossExplosionRetaliate_SpawnExplosion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012E09A0, void, ctor, (app::KwolokBossExplosionRetaliate * this_ptr))
} // namespace app::classes::KwolokBossExplosionRetaliate
