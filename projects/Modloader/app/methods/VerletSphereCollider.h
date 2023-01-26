#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerletSphereCollider.h>

namespace app::classes::VerletSphereCollider {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::VerletSphereCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::VerletSphereCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VerletSphereCollider * this_ptr))
} // namespace app::classes::VerletSphereCollider
