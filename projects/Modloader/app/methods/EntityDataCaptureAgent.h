#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityDataCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::EntityDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::EntityDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C906C0, app::String__Array*, GetDataHeaderNames, app::EntityDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C90740, void, OnInitialize, app::EntityDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C907E0, app::String__Array*, GetFrameData, app::EntityDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::EntityDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityDataCaptureAgent* this_ptr)
} // namespace app::classes::EntityDataCaptureAgent
