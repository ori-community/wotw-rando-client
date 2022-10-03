#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::WaitForKeyTimelineEntity {
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_CurrentTime, (app::WaitForKeyTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93050, void, OnStartPlayback, (app::WaitForKeyTimelineEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::WaitForKeyTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (app::WaitForKeyTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (app::WaitForKeyTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93060, void, OnUpdateEntity, (app::WaitForKeyTimelineEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHODINFO(0x0472DEA0, WaitForKeyTimelineEntity_OnUpdateEntity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, HasFinished, (app::WaitForKeyTimelineEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01E931A0, void, ctor, (app::WaitForKeyTimelineEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::WaitForKeyTimelineEntity
