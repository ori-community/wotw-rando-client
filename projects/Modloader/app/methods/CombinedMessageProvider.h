#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CombinedMessageProvider {
    IL2CPP_REGISTER_METHOD(0x011DDF50, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::CombinedMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::CombinedMessageProvider * this_ptr))
} // namespace app::classes::CombinedMessageProvider
