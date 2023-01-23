#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WormEmergingState.h>
#include <Modloader/app/structs/WormEnemy.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>

namespace app::classes::WormEmergingState {
    IL2CPP_REGISTER_METHOD(0x0058D710, void, ctor, (app::WormEmergingState * this_ptr, app::WormEnemy* worm, app::TextureAnimationWithTransitions* emerging, app::PrefabSpawner* emerging_effect, app::SoundSource* emerging_sound))
    IL2CPP_REGISTER_METHOD(0x0058D730, void, OnEnter, (app::WormEmergingState * this_ptr))
} // namespace app::classes::WormEmergingState
