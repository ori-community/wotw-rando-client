#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterlockedStack.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::InterlockedStack {
    IL2CPP_REGISTER_METHOD(0x01E6A520, void, ctor, app::InterlockedStack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6A670, void, Push, app::InterlockedStack* this_ptr, app::Object* pooled_stream)
    IL2CPP_REGISTER_METHOD(0x01E6A820, app::Object*, Pop, app::InterlockedStack* this_ptr)
} // namespace app::classes::System::Net::InterlockedStack
