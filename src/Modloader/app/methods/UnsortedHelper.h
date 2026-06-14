#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UnsortedHelper.h>

namespace app::classes::UnsortedHelper {
    IL2CPP_REGISTER_METHOD(0x013AD620, app::String__Array*, DefaultLayerNames, )
    IL2CPP_REGISTER_METHOD(0x013AD880, void, ctor, app::UnsortedHelper* this_ptr)
} // namespace app::classes::UnsortedHelper
