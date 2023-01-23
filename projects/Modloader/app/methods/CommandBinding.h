#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CommandBinding.h>

namespace app::classes::CommandBinding {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CommandBinding * this_ptr))
}
