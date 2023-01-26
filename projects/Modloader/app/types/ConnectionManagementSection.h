#pragma once
#include <Modloader/app/structs/ConnectionManagementSection.h>
#include <Modloader/app/structs/ConnectionManagementSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConnectionManagementSection {
        inline app::ConnectionManagementSection__Class** type_info() {
            static app::ConnectionManagementSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConnectionManagementSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConnectionManagementSection__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementSection__Class>(type_info(), "System.Net.Configuration", "ConnectionManagementSection");
        }
        inline app::ConnectionManagementSection* create() {
            return il2cpp::create_object<app::ConnectionManagementSection>(get_class());
        }
    } // namespace ConnectionManagementSection
} // namespace app::classes::types
