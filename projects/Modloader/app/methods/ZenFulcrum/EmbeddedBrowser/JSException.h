#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JSException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::JSException {
    IL2CPP_REGISTER_METHOD(0x01DE2320, void, ctor, (app::JSException * this_ptr, app::String* what))
}
