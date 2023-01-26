#pragma once
#include <Modloader/app/structs/UIComponent__Array.h>
#include <Modloader/app/structs/UIComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIComponent__Array {
        inline app::UIComponent__Array__Class** type_info() {
            static app::UIComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UIComponent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UIComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UIComponent__Array__Class>(type_info(), "Moon.UI", "UIComponent[]");
        }
        inline app::UIComponent__Array* create() {
            return il2cpp::create_object<app::UIComponent__Array>(get_class());
        }
    } // namespace UIComponent__Array
} // namespace app::classes::types
