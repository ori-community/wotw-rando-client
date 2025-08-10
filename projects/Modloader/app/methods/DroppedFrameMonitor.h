#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DroppedFrameMonitor.h>

namespace app::classes::DroppedFrameMonitor {
    IL2CPP_REGISTER_METHOD(0x00BE6930, void, ctor, app::DroppedFrameMonitor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE6C80, void, Update, app::DroppedFrameMonitor* this_ptr, float frame_time)
    IL2CPP_REGISTER_METHOD(0x00BE7190, void, DumpTempData, app::DroppedFrameMonitor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE7590, void, SwapAndReset, app::DroppedFrameMonitor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE75C0, void, Swap, app::DroppedFrameMonitor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE75E0, void, Reset, app::DroppedFrameMonitor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::DroppedFrameMonitor
