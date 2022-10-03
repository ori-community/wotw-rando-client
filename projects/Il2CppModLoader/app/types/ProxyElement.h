#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProxyElement {
        namespace {
            app::ProxyElement__Class* type_info_ref = nullptr;
        }
        app::ProxyElement__Class** type_info = &type_info_ref;
        inline app::ProxyElement__Class* get_class() {
            return il2cpp::get_class<app::ProxyElement__Class>(type_info, "System.Net.Configuration", "ProxyElement");
        }
        inline app::ProxyElement* create() {
            return il2cpp::create_object<app::ProxyElement>(get_class());
        }
    } // namespace ProxyElement
} // namespace app::classes::types
