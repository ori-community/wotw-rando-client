#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BaseGroupType.h>

namespace app::classes::AK::Wwise::BaseGroupType {
    IL2CPP_REGISTER_METHOD(0x026C1420, uint32_t, get_GroupGuidHash2, (app::BaseGroupType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1460, uint32_t, get_GroupId, (app::BaseGroupType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C14D0, void, set_GroupId, (app::BaseGroupType * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026C14E0, void, ctor, (app::BaseGroupType * this_ptr))
} // namespace app::classes::AK::Wwise::BaseGroupType
