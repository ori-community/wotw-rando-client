#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuxBus.h>
#include <Modloader/app/structs/WwiseObjectType__Enum.h>

namespace app::classes::AK::Wwise::AuxBus {
    IL2CPP_REGISTER_METHOD(0x00417920, app::WwiseObjectType__Enum, get_WwiseObjectType, app::AuxBus* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, app::AuxBus* this_ptr)
} // namespace app::classes::AK::Wwise::AuxBus
