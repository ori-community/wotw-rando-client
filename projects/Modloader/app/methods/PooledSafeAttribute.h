#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PooledSafeAttribute.h>

namespace app::classes::PooledSafeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PooledSafeAttribute* this_ptr)
}
