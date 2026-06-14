#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Counter_1__Boxed.h>

namespace app::classes::Moon::Counter {
    IL2CPP_REGISTER_METHOD(0x0011D960, void, Add, app::Counter_1__Boxed* this_ptr, double value)
}
