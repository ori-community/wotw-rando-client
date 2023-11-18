#pragma once
#include <Modloader/app/structs/ConditionalFieldAttribute.h>
#include <Modloader/app/structs/ConditionalFieldAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalFieldAttribute {
        inline app::ConditionalFieldAttribute__Class** type_info() {
            static app::ConditionalFieldAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalFieldAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalFieldAttribute__Class>(type_info(), "", "ConditionalFieldAttribute");
        }
        inline app::ConditionalFieldAttribute* create() {
            return il2cpp::create_object<app::ConditionalFieldAttribute>(get_class());
        }
    } // namespace ConditionalFieldAttribute
} // namespace app::classes::types
