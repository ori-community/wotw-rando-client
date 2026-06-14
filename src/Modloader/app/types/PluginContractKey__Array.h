#pragma once
#include <Modloader/app/structs/PluginContractKey__Array.h>
#include <Modloader/app/structs/PluginContractKey__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PluginContractKey__Array {
        inline app::PluginContractKey__Array__Class** type_info() {
            static app::PluginContractKey__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PluginContractKey__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PluginContractKey__Array__Class* get_class() {
            return il2cpp::get_class<app::PluginContractKey__Array__Class>(type_info(), "PlayFab", "PluginContractKey[]");
        }
        inline app::PluginContractKey__Array* create() {
            return il2cpp::create_object<app::PluginContractKey__Array>(get_class());
        }
    } // namespace PluginContractKey__Array
} // namespace app::classes::types
