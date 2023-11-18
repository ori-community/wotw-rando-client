#pragma once
#include <Modloader/app/structs/UIComponent.h>
#include <Modloader/app/structs/UIComponent__Array.h>
#include <Modloader/app/structs/UIComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIComponent {
        inline app::UIComponent__Class** type_info() {
            static app::UIComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UIComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UIComponent__Class* get_class() {
            return il2cpp::get_class<app::UIComponent__Class>(type_info(), "Moon.UI", "UIComponent");
        }
        inline app::UIComponent* create() {
            return il2cpp::create_object<app::UIComponent>(get_class());
        }
        inline app::UIComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::UIComponent__Array>(get_class(), size);
        }
        inline app::UIComponent__Array* create_array(const std::vector<app::UIComponent*>& items) {
            return il2cpp::array_new<app::UIComponent__Array>(get_class(), items);
        }
    } // namespace UIComponent
} // namespace app::classes::types
