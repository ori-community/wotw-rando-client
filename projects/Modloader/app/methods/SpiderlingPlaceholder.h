#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderlingPlaceholder.h>

namespace app::classes::SpiderlingPlaceholder {
    IL2CPP_REGISTER_METHOD(0x011C6DE0, void, ctor, app::SpiderlingPlaceholder* this_ptr)
}
