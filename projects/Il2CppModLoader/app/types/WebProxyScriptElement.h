#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebProxyScriptElement {
        namespace {
            app::WebProxyScriptElement__Class* type_info_ref = nullptr;
        }
        app::WebProxyScriptElement__Class** type_info = &type_info_ref;
        inline app::WebProxyScriptElement__Class* get_class() {
            return il2cpp::get_class<app::WebProxyScriptElement__Class>(type_info, "System.Net.Configuration", "WebProxyScriptElement");
        }
        inline app::WebProxyScriptElement* create() {
            return il2cpp::create_object<app::WebProxyScriptElement>(get_class());
        }
    } // namespace WebProxyScriptElement
} // namespace app::classes::types
