#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeakDetector.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LeakDetector {
    IL2CPP_REGISTER_METHOD(0x015C2C60, void, Start, (app::LeakDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::LeakDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C2DE0, app::String*, GetTexturePath, (app::String * texture_name))
    IL2CPP_REGISTER_METHOD(0x015C2F80, void, ctor, (app::LeakDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::LeakDetector
