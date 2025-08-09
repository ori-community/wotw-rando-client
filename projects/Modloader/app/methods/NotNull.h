#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotNull.h>

namespace app::classes::NotNull {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotNull* this_ptr)
}
