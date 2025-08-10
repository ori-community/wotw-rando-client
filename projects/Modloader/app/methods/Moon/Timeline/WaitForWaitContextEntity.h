#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IWaitContext.h>
#include <Modloader/app/structs/WaitForWaitContextEntity.h>

namespace app::classes::Moon::Timeline::WaitForWaitContextEntity {
    IL2CPP_REGISTER_METHOD(0x008693A0, float, get_CurrentTime, app::WaitForWaitContextEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IWaitContext*, get_CurrentWaitContext, app::WaitForWaitContextEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E93310, void, OnStartPlayback, app::WaitForWaitContextEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, app::WaitForWaitContextEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, app::WaitForWaitContextEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, app::WaitForWaitContextEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E933F0, void, OnUpdateEntity, app::WaitForWaitContextEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, HasFinished, app::WaitForWaitContextEntity* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01E934D0, void, ctor, app::WaitForWaitContextEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::WaitForWaitContextEntity
