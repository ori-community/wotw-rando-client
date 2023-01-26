#pragma once
#include <Modloader/app/structs/BatSwarmPlaceholder_BatSwarmPlaceholderSettings.h>
#include <Modloader/app/structs/BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatSwarmPlaceholder_BatSwarmPlaceholderSettings {
        inline app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class** type_info() {
            static app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class>(type_info(), "", "BatSwarmPlaceholder", "BatSwarmPlaceholderSettings");
        }
        inline app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings* create() {
            return il2cpp::create_object<app::BatSwarmPlaceholder_BatSwarmPlaceholderSettings>(get_class());
        }
    } // namespace BatSwarmPlaceholder_BatSwarmPlaceholderSettings
} // namespace app::classes::types
