#pragma once
#include <Modloader/app/structs/ServicePointManagerElement.h>
#include <Modloader/app/structs/ServicePointManagerElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServicePointManagerElement {
        inline app::ServicePointManagerElement__Class** type_info() {
            static app::ServicePointManagerElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServicePointManagerElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServicePointManagerElement__Class* get_class() {
            return il2cpp::get_class<app::ServicePointManagerElement__Class>(type_info(), "System.Net.Configuration", "ServicePointManagerElement");
        }
        inline app::ServicePointManagerElement* create() {
            return il2cpp::create_object<app::ServicePointManagerElement>(get_class());
        }
    } // namespace ServicePointManagerElement
} // namespace app::classes::types
