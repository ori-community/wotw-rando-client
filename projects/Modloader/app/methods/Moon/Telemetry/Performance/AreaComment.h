#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AreaComment.h>

namespace app::classes::Moon::Telemetry::Performance::AreaComment {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AreaComment * this_ptr))
}
