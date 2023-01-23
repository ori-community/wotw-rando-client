#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IKTargetBehaviour.h>
#include <Modloader/app/structs/IKPostprocessPlayer.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::IKPostprocessPlayer {
    IL2CPP_REGISTER_METHOD(0x0076F5E0, app::IKTargetBehaviour*, get_TargetBehaviour, (app::IKPostprocessPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076F720, void, OnUpdateEntity, (app::IKPostprocessPlayer * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (app::IKPostprocessPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (app::IKPostprocessPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076FB00, void, OnStartPlayback, (app::IKPostprocessPlayer * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0076FB90, void, OnStopPlayback, (app::IKPostprocessPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076FC40, void, ctor, (app::IKPostprocessPlayer * this_ptr))
} // namespace app::classes::Moon::Timeline::IKPostprocessPlayer
