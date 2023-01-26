#pragma once
#include <Modloader/app/structs/AuthenticationModuleElement.h>
#include <Modloader/app/structs/AuthenticationModuleElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationModuleElement {
        inline app::AuthenticationModuleElement__Class** type_info() {
            static app::AuthenticationModuleElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationModuleElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationModuleElement__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModuleElement__Class>(type_info(), "System.Net.Configuration", "AuthenticationModuleElement");
        }
        inline app::AuthenticationModuleElement* create() {
            return il2cpp::create_object<app::AuthenticationModuleElement>(get_class());
        }
    } // namespace AuthenticationModuleElement
} // namespace app::classes::types
