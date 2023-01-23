#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/FrameCaptureTester.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/FrameCaptureTester_StringBuilderScope.h>

namespace app::classes::FrameCaptureTester_AgentOutput {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FrameCaptureTester_AgentOutput * this_ptr, app::FrameCaptureTester* self))
    IL2CPP_REGISTER_METHOD(0x0163DDF0, app::StringBuilder*, StartWrite, (app::FrameCaptureTester_AgentOutput * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471C718, FrameCaptureTester_AgentOutput_StartWrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0163DEE0, void, Write_1, (app::FrameCaptureTester_AgentOutput * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0163DFA0, void, Write_2, (app::FrameCaptureTester_AgentOutput * this_ptr, int32_t value, bool skip_if_zero))
    IL2CPP_REGISTER_METHOD(0x0163E090, void, Write_3, (app::FrameCaptureTester_AgentOutput * this_ptr, float value, bool skip_if_zero))
    IL2CPP_REGISTER_METHOD(0x0163E160, void, Write_4, (app::FrameCaptureTester_AgentOutput * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0163E260, void, Write_5, (app::FrameCaptureTester_AgentOutput * this_ptr, app::StringBuilder* value))
    IL2CPP_REGISTER_METHOD(0x0163E4A0, void, Write_6, (app::FrameCaptureTester_AgentOutput * this_ptr, app::StringBuilder* value, int32_t index, int32_t length))
    IL2CPP_REGISTER_METHOD(0x0163E6E0, app::FrameCaptureTester_StringBuilderScope, WriteScope, (app::FrameCaptureTester_AgentOutput * this_ptr))
} // namespace app::classes::FrameCaptureTester_AgentOutput
