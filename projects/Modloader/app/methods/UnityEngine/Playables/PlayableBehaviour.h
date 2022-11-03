#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Playables::PlayableBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayableBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGraphStart, (app::PlayableBehaviour * this_ptr, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGraphStop, (app::PlayableBehaviour * this_ptr, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayableCreate, (app::PlayableBehaviour * this_ptr, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayableDestroy, (app::PlayableBehaviour * this_ptr, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBehaviourPlay, (app::PlayableBehaviour * this_ptr, app::Playable playable, app::FrameData info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBehaviourPause, (app::PlayableBehaviour * this_ptr, app::Playable playable, app::FrameData info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrepareFrame, (app::PlayableBehaviour * this_ptr, app::Playable playable, app::FrameData info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessFrame, (app::PlayableBehaviour * this_ptr, app::Playable playable, app::FrameData info, app::Object* player_data))
    IL2CPP_REGISTER_METHOD(0x02964310, app::Object*, Clone, (app::PlayableBehaviour * this_ptr))
} // namespace app::classes::UnityEngine::Playables::PlayableBehaviour
