#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationModuleElementCollection {
        namespace {
            inline app::AuthenticationModuleElementCollection__Class* type_info_ref = nullptr;
        }
        inline app::AuthenticationModuleElementCollection__Class** type_info = &type_info_ref;
        inline app::AuthenticationModuleElementCollection__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModuleElementCollection__Class>(type_info, "System.Net.Configuration", "AuthenticationModuleElementCollection");
        }
        inline app::AuthenticationModuleElementCollection* create() {
            return il2cpp::create_object<app::AuthenticationModuleElementCollection>(get_class());
        }
    } // namespace AuthenticationModuleElementCollection
} // namespace app::classes::types
