#pragma once
#include <Modloader/app/structs/BypassElement.h>
#include <Modloader/app/structs/BypassElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BypassElement {
        inline app::BypassElement__Class** type_info() {
            static app::BypassElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BypassElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BypassElement__Class* get_class() {
            return il2cpp::get_class<app::BypassElement__Class>(type_info(), "System.Net.Configuration", "BypassElement");
        }
        inline app::BypassElement* create() {
            return il2cpp::create_object<app::BypassElement>(get_class());
        }
    } // namespace BypassElement
} // namespace app::classes::types
