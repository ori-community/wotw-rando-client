#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatSwarmPlaceholder_BatSwarmPlaceholderSettings {
        namespace {
            app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class>(type_info, "", "BatSwarmPlaceholder", "BatSwarmPlaceholderSettings");
        }
        inline app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings* create() {
            return il2cpp::create_object<app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings>(get_class());
        }
    } // namespace BatSwarmPlaceholder_BatSwarmPlaceholderSettings
} // namespace app::classes::types
