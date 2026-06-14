#pragma once
#include <Modloader/app/structs/ProxyElement.h>
#include <Modloader/app/structs/ProxyElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProxyElement {
        inline app::ProxyElement__Class** type_info() {
            static app::ProxyElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProxyElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProxyElement__Class* get_class() {
            return il2cpp::get_class<app::ProxyElement__Class>(type_info(), "System.Net.Configuration", "ProxyElement");
        }
        inline app::ProxyElement* create() {
            return il2cpp::create_object<app::ProxyElement>(get_class());
        }
    } // namespace ProxyElement
} // namespace app::classes::types
