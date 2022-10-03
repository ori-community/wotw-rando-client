#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::TimerThread_TimerNode {
    IL2CPP_REGISTER_METHOD(0x020A9190, void, ctor_1, (app::TimerThread_TimerNode * this_ptr, app::TimerThread_Callback* callback, app::Object* context, int32_t duration_milliseconds, app::Object* queue_lock))
    IL2CPP_REGISTER_METHOD(0x020A9210, void, ctor_2, (app::TimerThread_TimerNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A9270, bool, get_HasExpired, (app::TimerThread_TimerNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::TimerThread_TimerNode*, get_Next, (app::TimerThread_TimerNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Next, (app::TimerThread_TimerNode * this_ptr, app::TimerThread_TimerNode* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::TimerThread_TimerNode*, get_Prev, (app::TimerThread_TimerNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Prev, (app::TimerThread_TimerNode * this_ptr, app::TimerThread_TimerNode* value))
    IL2CPP_REGISTER_METHOD(0x020A9280, bool, Cancel, (app::TimerThread_TimerNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A93F0, bool, Fire, (app::TimerThread_TimerNode * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764060, TimerThread_TimerNode_Fire__MethodInfo)
} // namespace app::classes::System::Net::TimerThread_TimerNode
