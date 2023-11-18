#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StreamingSoundsDisplay.h>

namespace app::classes::StreamingSoundsDisplay {
    IL2CPP_REGISTER_METHOD(0x0065D540, void, Awake, (app::StreamingSoundsDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::StreamingSoundsDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StreamingSoundsDisplay * this_ptr))
} // namespace app::classes::StreamingSoundsDisplay
