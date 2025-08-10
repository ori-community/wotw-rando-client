#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TargetIndicator.h>

namespace app::classes::TargetIndicator {
    IL2CPP_REGISTER_METHOD(0x00CE2970, void, Start, app::TargetIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE2A10, void, Update, app::TargetIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00723FF0, void, ctor, app::TargetIndicator* this_ptr)
} // namespace app::classes::TargetIndicator
