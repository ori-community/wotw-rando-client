#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/WispMessageProvider.h>

namespace app::classes::WispMessageProvider {
    IL2CPP_REGISTER_METHOD(0x0057D070, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::WispMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::WispMessageProvider * this_ptr))
} // namespace app::classes::WispMessageProvider
