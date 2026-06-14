#pragma once
#include <Modloader/app/structs/ConditionalAttribute.h>
#include <Modloader/app/structs/ConditionalAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalAttribute {
        inline app::ConditionalAttribute__Class** type_info() {
            static app::ConditionalAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalAttribute__Class>(type_info(), "System.Diagnostics", "ConditionalAttribute");
        }
        inline app::ConditionalAttribute* create() {
            return il2cpp::create_object<app::ConditionalAttribute>(get_class());
        }
    } // namespace ConditionalAttribute
} // namespace app::classes::types
