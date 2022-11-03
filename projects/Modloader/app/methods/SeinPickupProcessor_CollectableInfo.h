#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinPickupProcessor_CollectableInfo {
    IL2CPP_REGISTER_METHOD(0x008B80C0, app::PickupContext*, GetPickupContext, (app::SeinPickupProcessor_CollectableInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B8230, void, ctor, (app::SeinPickupProcessor_CollectableInfo * this_ptr))
} // namespace app::classes::SeinPickupProcessor_CollectableInfo
