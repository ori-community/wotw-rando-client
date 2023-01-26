#pragma once
#include <Modloader/app/structs/ConditionalShowAttribute.h>
#include <Modloader/app/structs/ConditionalShowAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalShowAttribute {
        inline app::ConditionalShowAttribute__Class** type_info() {
            static app::ConditionalShowAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalShowAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalShowAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalShowAttribute__Class>(type_info(), "", "ConditionalShowAttribute");
        }
        inline app::ConditionalShowAttribute* create() {
            return il2cpp::create_object<app::ConditionalShowAttribute>(get_class());
        }
    } // namespace ConditionalShowAttribute
} // namespace app::classes::types
