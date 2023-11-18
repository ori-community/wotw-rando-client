#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectGetArgs.h>

namespace app::classes::ObjectGetArgs {
    IL2CPP_REGISTER_METHOD(0x02719D70, void, ctor, (app::ObjectGetArgs * this_ptr))
}
