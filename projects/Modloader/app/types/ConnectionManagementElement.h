#pragma once
#include <Modloader/app/structs/ConnectionManagementElement.h>
#include <Modloader/app/structs/ConnectionManagementElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConnectionManagementElement {
        inline app::ConnectionManagementElement__Class** type_info() {
            static app::ConnectionManagementElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConnectionManagementElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConnectionManagementElement__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementElement__Class>(type_info(), "System.Net.Configuration", "ConnectionManagementElement");
        }
        inline app::ConnectionManagementElement* create() {
            return il2cpp::create_object<app::ConnectionManagementElement>(get_class());
        }
    } // namespace ConnectionManagementElement
} // namespace app::classes::types
