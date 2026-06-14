#pragma once
#include <Modloader/app/structs/AuthenticationModuleElementCollection.h>
#include <Modloader/app/structs/AuthenticationModuleElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationModuleElementCollection {
        inline app::AuthenticationModuleElementCollection__Class** type_info() {
            static app::AuthenticationModuleElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationModuleElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationModuleElementCollection__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModuleElementCollection__Class>(type_info(), "System.Net.Configuration", "AuthenticationModuleElementCollection");
        }
        inline app::AuthenticationModuleElementCollection* create() {
            return il2cpp::create_object<app::AuthenticationModuleElementCollection>(get_class());
        }
    } // namespace AuthenticationModuleElementCollection
} // namespace app::classes::types
