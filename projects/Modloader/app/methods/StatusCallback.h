#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatusCallback.h>

namespace app::classes::StatusCallback {
    IL2CPP_REGISTER_METHOD(0x02EA25B0, void, ctor, (app::StatusCallback * this_ptr))
}
