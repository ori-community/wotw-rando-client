#pragma once
#include <Modloader/app/structs/AuthenticationSchemeSelector.h>
#include <Modloader/app/structs/AuthenticationSchemeSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationSchemeSelector {
        inline app::AuthenticationSchemeSelector__Class** type_info() {
            static app::AuthenticationSchemeSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationSchemeSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationSchemeSelector__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationSchemeSelector__Class>(type_info(), "System.Net", "AuthenticationSchemeSelector");
        }
        inline app::AuthenticationSchemeSelector* create() {
            return il2cpp::create_object<app::AuthenticationSchemeSelector>(get_class());
        }
    } // namespace AuthenticationSchemeSelector
} // namespace app::classes::types
