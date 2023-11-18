#pragma once
#include <Modloader/app/structs/CartPlaceholder_CartPlaceholderSettings.h>
#include <Modloader/app/structs/CartPlaceholder_CartPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartPlaceholder_CartPlaceholderSettings {
        inline app::CartPlaceholder_CartPlaceholderSettings__Class** type_info() {
            static app::CartPlaceholder_CartPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartPlaceholder_CartPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartPlaceholder_CartPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::CartPlaceholder_CartPlaceholderSettings__Class>(type_info(), "", "CartPlaceholder", "CartPlaceholderSettings");
        }
        inline app::CartPlaceholder_CartPlaceholderSettings* create() {
            return il2cpp::create_object<app::CartPlaceholder_CartPlaceholderSettings>(get_class());
        }
    } // namespace CartPlaceholder_CartPlaceholderSettings
} // namespace app::classes::types
