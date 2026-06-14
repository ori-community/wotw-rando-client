#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectProfilingCaptureAgent.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::ObjectProfilingCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060F3A0, void, OnInitialize, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartProfiling, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StopProfiling, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060F440, app::String*, GetPathForID, app::ObjectProfilingCaptureAgent* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateData, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060F4C0, app::String__Array*, GetFrameData, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnTestEnd, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060F660, app::String__Array*, GetDataHeaderNames, app::ObjectProfilingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060F6E0, void, ctor, app::ObjectProfilingCaptureAgent* this_ptr)
} // namespace app::classes::ObjectProfilingCaptureAgent
