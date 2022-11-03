#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PluginContractKey {
        namespace {
            inline app::PluginContractKey__Class* type_info_ref = nullptr;
        }
        inline app::PluginContractKey__Class** type_info = &type_info_ref;
        inline app::PluginContractKey__Class* get_class() {
            return il2cpp::get_class<app::PluginContractKey__Class>(type_info, "PlayFab", "PluginContractKey");
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
