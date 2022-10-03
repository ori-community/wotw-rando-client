#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebRequestPrefixElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebRequestPrefixElement__Class** type_info;
        inline app::WebRequestPrefixElement__Class* get_class() {
            return il2cpp::get_class<app::WebRequestPrefixElement__Class>(type_info, "System.Net", "WebRequestPrefixElement");
        }
        inline app::WebRequestPrefixElement* create() {
            return il2cpp::create_object<app::WebRequestPrefixElement>(get_class());
        }
    } // namespace WebRequestPrefixElement
} // namespace app::classes::types
