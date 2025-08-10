#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>

namespace app::classes::MoonDriverExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x0313D770, app::IMoonDriverExecutionOrderMap*, Get, )
}
