#pragma once
#include <Modloader/app/structs/PluginContractKey.h>
#include <Modloader/app/structs/PluginContractKey__Array.h>
#include <Modloader/app/structs/PluginContractKey__Boxed.h>
#include <Modloader/app/structs/PluginContractKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PluginContractKey {
        inline app::PluginContractKey__Class** type_info() {
            static app::PluginContractKey__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PluginContractKey__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PluginContractKey__Class* get_class() {
            return il2cpp::get_class<app::PluginContractKey__Class>(type_info(), "PlayFab", "PluginContractKey");
        }
        inline app::PluginContractKey* create() {
            return il2cpp::create_object<app::PluginContractKey>(get_class());
        }
        inline app::PluginContractKey__Boxed* box(app::PluginContractKey value) {
            return il2cpp::box_value<app::PluginContractKey__Boxed>(get_class(), value);
        }
        inline app::PluginContractKey__Array* create_array(int size) {
            return il2cpp::array_new<app::PluginContractKey__Array>(get_class(), size);
        }
        inline app::PluginContractKey__Array* create_array(const std::vector<app::PluginContractKey>& items) {
            return il2cpp::array_new<app::PluginContractKey__Array>(get_class(), items);
        }
    } // namespace PluginContractKey
} // namespace app::classes::types
