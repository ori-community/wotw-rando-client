#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallOptions.h>

namespace app::classes::CallOptions {
    IL2CPP_REGISTER_METHOD(0x02708A70, void, ctor, (app::CallOptions * this_ptr))
}
