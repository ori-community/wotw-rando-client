#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TimedActionSequence {
    IL2CPP_REGISTER_METHOD(0x010F2920, void, Awake, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F2A40, void, FindActions, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F2EF0, void, OnDestroy, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Duration, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Duration, (app::TimedActionSequence * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010F3010, void, Perform, (app::TimedActionSequence * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010F3180, void, Stop, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F32C0, bool, get_IsPerforming, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_SequenceCurrentTime, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_SequenceCurrentTime, (app::TimedActionSequence * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSequenceRunning, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSequenceRunning, (app::TimedActionSequence * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_Pause, (app::TimedActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_Pause, (app::TimedActionSequence * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x010F3450, app::IEnumerator*, RunSequence, (app::TimedActionSequence * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::TimedActionSequence * this_ptr))
} // namespace app::classes::TimedActionSequence
