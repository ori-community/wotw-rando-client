#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PluginContractKeyComparator.h>
#include <Modloader/app/structs/PluginContractKey.h>

namespace app::classes::PlayFab::PluginContractKeyComparator {
    IL2CPP_REGISTER_METHOD(0x01AD02D0, bool, Equals, (app::PluginContractKeyComparator * this_ptr, app::PluginContractKey x, app::PluginContractKey y))
    IL2CPP_REGISTER_METHOD(0x01AD0320, int32_t, GetHashCode, (app::PluginContractKeyComparator * this_ptr, app::PluginContractKey obj))
    IL2CPP_REGISTER_METHOD(0x01AD0360, void, ctor, (app::PluginContractKeyComparator * this_ptr))
} // namespace app::classes::PlayFab::PluginContractKeyComparator
