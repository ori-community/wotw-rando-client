#pragma once
#include <Modloader/app/structs/WebProxyScriptElement.h>
#include <Modloader/app/structs/WebProxyScriptElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebProxyScriptElement {
        inline app::WebProxyScriptElement__Class** type_info() {
            static app::WebProxyScriptElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebProxyScriptElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebProxyScriptElement__Class* get_class() {
            return il2cpp::get_class<app::WebProxyScriptElement__Class>(type_info(), "System.Net.Configuration", "WebProxyScriptElement");
        }
        inline app::WebProxyScriptElement* create() {
            return il2cpp::create_object<app::WebProxyScriptElement>(get_class());
        }
    } // namespace WebProxyScriptElement
} // namespace app::classes::types
