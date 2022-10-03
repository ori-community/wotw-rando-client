#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Playables::PlayableAsset {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::PlayableAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02964070, double, get_duration, (app::PlayableAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02964110, app::IEnumerable_1_UnityEngine_Playables_PlayableBinding_*, get_outputs, (app::PlayableAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029641B0, void, Internal_CreatePlayable, (app::PlayableAsset * asset, app::PlayableGraph graph, app::GameObject* go, void* ptr))
    IL2CPP_REGISTER_METHOD(0x029642E0, void, Internal_GetPlayableAssetDuration, (app::PlayableAsset * asset, void* ptr_to_double))
} // namespace app::classes::UnityEngine::Playables::PlayableAsset
