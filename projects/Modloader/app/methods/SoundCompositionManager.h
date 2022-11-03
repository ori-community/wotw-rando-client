#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SoundCompositionManager {
    IL2CPP_REGISTER_METHOD(0x00EE5E50, void, Awake, (app::SoundCompositionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::SoundCompositionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5EE0, void, PlaySound, (app::SoundCompositionManager * this_ptr, app::SoundComposition* sound_composition, app::SoundCompositionTransition* transition))
    IL2CPP_REGISTER_METHOD(0x00EE6140, void, StopMusic, (app::SoundCompositionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SoundCompositionManager * this_ptr))
} // namespace app::classes::SoundCompositionManager
