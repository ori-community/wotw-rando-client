#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompositeCollider2D.h>

namespace app::classes::UnityEngine::CompositeCollider2D {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CompositeCollider2D* this_ptr)
}
