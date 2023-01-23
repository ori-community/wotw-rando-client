#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/InputBasedStringProvider.h>

namespace app::classes::InputBasedStringProvider {
    IL2CPP_REGISTER_METHOD(0x006286E0, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::InputBasedStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::InputBasedStringProvider * this_ptr))
} // namespace app::classes::InputBasedStringProvider
