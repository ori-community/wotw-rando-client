#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartPlaceholder_CartPlaceholderSettings {
        namespace {
            app::CartPlaceholder_CartPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::CartPlaceholder_CartPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::CartPlaceholder_CartPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::CartPlaceholder_CartPlaceholderSettings__Class>(type_info, "", "CartPlaceholder", "CartPlaceholderSettings");
        }
        inline app::CartPlaceholder_CartPlaceholderSettings* create() {
            return il2cpp::create_object<app::CartPlaceholder_CartPlaceholderSettings>(get_class());
        }
    } // namespace CartPlaceholder_CartPlaceholderSettings
} // namespace app::classes::types
