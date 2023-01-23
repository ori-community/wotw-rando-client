#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PluginContractKeyComparator__Class.h>
#include <Modloader/app/structs/PluginContractKeyComparator.h>

namespace app::classes::types {
    namespace PluginContractKeyComparator {
        inline app::PluginContractKeyComparator__Class** type_info = (app::PluginContractKeyComparator__Class**)(modloader::win::memory::resolve_rva(0x0475DD20));
        inline app::PluginContractKeyComparator__Class* get_class() {
            return il2cpp::get_class<app::PluginContractKeyComparator__Class>(type_info, "PlayFab", "PluginContractKeyComparator");
        }
        inline app::PluginContractKeyComparator* create() {
            return il2cpp::create_object<app::PluginContractKeyComparator>(get_class());
        }
    } // namespace PluginContractKeyComparator
} // namespace app::classes::types
