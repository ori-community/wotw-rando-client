#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkipUberStateDuplicationHookAttribute.h>

namespace app::classes::Moon::SkipUberStateDuplicationHookAttribute {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_ShouldSkip, app::SkipUberStateDuplicationHookAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_ShouldSkip, app::SkipUberStateDuplicationHookAttribute* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, app::SkipUberStateDuplicationHookAttribute* this_ptr)
} // namespace app::classes::Moon::SkipUberStateDuplicationHookAttribute
