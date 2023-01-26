#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectInstantiationCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::ObjectInstantiationCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::ObjectInstantiationCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060EFD0, void, OnInitialize, (app::ObjectInstantiationCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060F070, app::String__Array*, GetFrameData, (app::ObjectInstantiationCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::ObjectInstantiationCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060F270, app::String__Array*, GetDataHeaderNames, (app::ObjectInstantiationCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjectInstantiationCaptureAgent * this_ptr))
} // namespace app::classes::ObjectInstantiationCaptureAgent
