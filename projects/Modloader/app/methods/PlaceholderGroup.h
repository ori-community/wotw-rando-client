#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlaceholderGroup.h>

namespace app::classes::PlaceholderGroup {
    IL2CPP_REGISTER_METHOD(0x01164BD0, void, ctor, (app::PlaceholderGroup * this_ptr))
}
