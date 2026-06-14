#pragma once
#include <Modloader/app/structs/ConnectionManagementElementCollection.h>
#include <Modloader/app/structs/ConnectionManagementElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConnectionManagementElementCollection {
        inline app::ConnectionManagementElementCollection__Class** type_info() {
            static app::ConnectionManagementElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConnectionManagementElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConnectionManagementElementCollection__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementElementCollection__Class>(type_info(), "System.Net.Configuration", "ConnectionManagementElementCollection");
        }
        inline app::ConnectionManagementElementCollection* create() {
            return il2cpp::create_object<app::ConnectionManagementElementCollection>(get_class());
        }
    } // namespace ConnectionManagementElementCollection
} // namespace app::classes::types
