#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberEnvirionmentParticle.h>

namespace app::classes::UberEnvirionmentParticle {
    IL2CPP_REGISTER_METHOD(0x013E8070, void, OnDrawGizmosSelected, (app::UberEnvirionmentParticle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E81F0, void, Update, (app::UberEnvirionmentParticle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberEnvirionmentParticle * this_ptr))
} // namespace app::classes::UberEnvirionmentParticle
