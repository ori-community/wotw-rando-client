#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConnectionManagementElement {
        namespace {
            inline app::ConnectionManagementElement__Class* type_info_ref = nullptr;
        }
        inline app::ConnectionManagementElement__Class** type_info = &type_info_ref;
        inline app::ConnectionManagementElement__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementElement__Class>(type_info, "System.Net.Configuration", "ConnectionManagementElement");
        }
        inline app::ConnectionManagementElement* create() {
            return il2cpp::create_object<app::ConnectionManagementElement>(get_class());
        }
    } // namespace ConnectionManagementElement
} // namespace app::classes::types
