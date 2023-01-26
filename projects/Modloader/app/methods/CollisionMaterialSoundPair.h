#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollisionMaterialSoundPair.h>

namespace app::classes::CollisionMaterialSoundPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CollisionMaterialSoundPair * this_ptr))
}
