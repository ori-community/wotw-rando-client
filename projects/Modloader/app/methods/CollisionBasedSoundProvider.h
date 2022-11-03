#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CollisionBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x012D01E0, app::SoundDescriptor*, GetSoundForCollision, (app::CollisionBasedSoundProvider * this_ptr, app::Collision* collision, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012D06B0, app::SoundDescriptor*, GetSound, (app::CollisionBasedSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012D0850, void, ctor, (app::CollisionBasedSoundProvider * this_ptr))
} // namespace app::classes::CollisionBasedSoundProvider
