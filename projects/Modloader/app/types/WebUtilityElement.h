#pragma once
#include <Modloader/app/structs/WebUtilityElement.h>
#include <Modloader/app/structs/WebUtilityElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebUtilityElement {
        inline app::WebUtilityElement__Class** type_info() {
            static app::WebUtilityElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebUtilityElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebUtilityElement__Class* get_class() {
            return il2cpp::get_class<app::WebUtilityElement__Class>(type_info(), "System.Net.Configuration", "WebUtilityElement");
        }
        inline app::WebUtilityElement* create() {
            return il2cpp::create_object<app::WebUtilityElement>(get_class());
        }
    } // namespace WebUtilityElement
} // namespace app::classes::types
