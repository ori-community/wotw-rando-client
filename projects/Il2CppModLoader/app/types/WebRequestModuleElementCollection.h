#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebRequestModuleElementCollection {
        namespace {
            app::WebRequestModuleElementCollection__Class* type_info_ref = nullptr;
        }
        app::WebRequestModuleElementCollection__Class** type_info = &type_info_ref;
        inline app::WebRequestModuleElementCollection__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModuleElementCollection__Class>(type_info, "System.Net.Configuration", "WebRequestModuleElementCollection");
        }
        inline app::WebRequestModuleElementCollection* create() {
            return il2cpp::create_object<app::WebRequestModuleElementCollection>(get_class());
        }
    } // namespace WebRequestModuleElementCollection
} // namespace app::classes::types
