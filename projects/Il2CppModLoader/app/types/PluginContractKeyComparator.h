#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PluginContractKeyComparator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PluginContractKeyComparator__Class** type_info;
        inline app::PluginContractKeyComparator__Class* get_class() {
            return il2cpp::get_class<app::PluginContractKeyComparator__Class>(type_info, "PlayFab", "PluginContractKeyComparator");
        }
        inline app::PluginContractKeyComparator* create() {
            return il2cpp::create_object<app::PluginContractKeyComparator>(get_class());
        }
    } // namespace PluginContractKeyComparator
} // namespace app::classes::types
