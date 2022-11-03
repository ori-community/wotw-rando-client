#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConnectionManagementElementCollection {
        namespace {
            inline app::ConnectionManagementElementCollection__Class* type_info_ref = nullptr;
        }
        inline app::ConnectionManagementElementCollection__Class** type_info = &type_info_ref;
        inline app::ConnectionManagementElementCollection__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementElementCollection__Class>(type_info, "System.Net.Configuration", "ConnectionManagementElementCollection");
        }
        inline app::ConnectionManagementElementCollection* create() {
            return il2cpp::create_object<app::ConnectionManagementElementCollection>(get_class());
        }
    } // namespace ConnectionManagementElementCollection
} // namespace app::classes::types
