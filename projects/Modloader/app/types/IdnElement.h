#pragma once
#include <Modloader/app/structs/IdnElement.h>
#include <Modloader/app/structs/IdnElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IdnElement {
        inline app::IdnElement__Class** type_info() {
            static app::IdnElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IdnElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IdnElement__Class* get_class() {
            return il2cpp::get_class<app::IdnElement__Class>(type_info(), "System.Configuration", "IdnElement");
        }
        inline app::IdnElement* create() {
            return il2cpp::create_object<app::IdnElement>(get_class());
        }
    } // namespace IdnElement
} // namespace app::classes::types
