#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FrameCaptureTester_StringBuilderScope {
    IL2CPP_REGISTER_METHOD(0x00139AC0, void, ctor, (app::FrameCaptureTester_StringBuilderScope__Boxed * this_ptr, app::FrameCaptureTester* self))
    IL2CPP_REGISTER_METHOD(0x00139B00, app::StringBuilder*, get_StringBuilder, (app::FrameCaptureTester_StringBuilderScope__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00139B20, void, Dispose, (app::FrameCaptureTester_StringBuilderScope__Boxed * this_ptr))
} // namespace app::classes::FrameCaptureTester_StringBuilderScope
