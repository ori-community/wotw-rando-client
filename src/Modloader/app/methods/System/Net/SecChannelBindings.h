#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SecChannelBindings.h>

namespace app::classes::System::Net::SecChannelBindings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SecChannelBindings* this_ptr)
}
