#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrameData_1.h>

namespace app::classes::FrameData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::FrameData_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FrameData_1 * this_ptr))
} // namespace app::classes::FrameData
