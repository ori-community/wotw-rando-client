#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExceptionCaptureAgent.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::ExceptionCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::ExceptionCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00982F60, void, OnInitialize, app::ExceptionCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009830C0, void, OnTestEnd, app::ExceptionCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00983220, app::String__Array*, GetDataHeaderNames, app::ExceptionCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00983310,
        void,
        LogReceived,
        app::ExceptionCaptureAgent* this_ptr,
        app::String* condition,
        app::String* stacktrace,
        app::LogType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x00983470, app::String__Array*, GetFrameData_1, app::ExceptionCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009834C0, void, GetFrameData_2, app::ExceptionCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x00983630, void, ctor, app::ExceptionCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::ExceptionCaptureAgent
