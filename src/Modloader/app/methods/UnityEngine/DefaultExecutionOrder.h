#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultExecutionOrder.h>

namespace app::classes::UnityEngine::DefaultExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, get_order, app::DefaultExecutionOrder* this_ptr)
}
