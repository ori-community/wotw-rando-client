#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CrabPlaceholderGroup.h>

namespace app::classes::CrabPlaceholderGroup {
    IL2CPP_REGISTER_METHOD(0x00DB6880, void, Awake, (app::CrabPlaceholderGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB6A40, void, Update, (app::CrabPlaceholderGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB6CF0, void, ctor, (app::CrabPlaceholderGroup * this_ptr))
} // namespace app::classes::CrabPlaceholderGroup
