#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SampleOffsetCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::SampleOffsetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C080A0, app::String__Array*, GetDataHeaderNames, (app::SampleOffsetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08120, void, OnInitialize, (app::SampleOffsetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C081C0, app::String__Array*, GetFrameData, (app::SampleOffsetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::SampleOffsetCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SampleOffsetCaptureAgent * this_ptr))
} // namespace app::classes::SampleOffsetCaptureAgent
