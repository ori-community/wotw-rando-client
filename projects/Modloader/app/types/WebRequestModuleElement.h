#pragma once
#include <Modloader/app/structs/WebRequestModuleElement.h>
#include <Modloader/app/structs/WebRequestModuleElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebRequestModuleElement {
        inline app::WebRequestModuleElement__Class** type_info() {
            static app::WebRequestModuleElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebRequestModuleElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebRequestModuleElement__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModuleElement__Class>(type_info(), "System.Net.Configuration", "WebRequestModuleElement");
        }
        inline app::WebRequestModuleElement* create() {
            return il2cpp::create_object<app::WebRequestModuleElement>(get_class());
        }
    } // namespace WebRequestModuleElement
} // namespace app::classes::types
