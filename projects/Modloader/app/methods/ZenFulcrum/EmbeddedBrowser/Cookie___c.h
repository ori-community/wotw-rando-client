#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Cookie_c.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Cookie___c {
    IL2CPP_REGISTER_METHOD(0x01DD09D0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Cookie_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD0B10, app::DateTime, _Copy_b__17_0, (app::Cookie_c * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01DD0F70, app::String*, _Copy_b__18_0, (app::Cookie_c * this_ptr, app::DateTime s))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Cookie___c
