#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GoThroughPlatform.h>

namespace app::classes::GoThroughPlatformManager {
    IL2CPP_REGISTER_METHOD(0x007FDF00, void, Register, app::GoThroughPlatform* platform)
    IL2CPP_REGISTER_METHOD(0x007FDFC0, void, Unregister, app::GoThroughPlatform* platform)
    IL2CPP_REGISTER_METHOD(0x007FE0A0, void, IgnoreCollisionsWithCollider, app::Collider* collider, bool ignore)
    IL2CPP_REGISTER_METHOD(0x007FE350, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x007FE420, bool, IsGoThroughPlaftorm, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x007FE5F0, void, cctor, )
} // namespace app::classes::GoThroughPlatformManager
